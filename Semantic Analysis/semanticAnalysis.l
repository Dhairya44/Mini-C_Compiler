%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include "y.tab.h"
    int line = 1;
%}

alp [a-zA-Z]
digit [0-9]
newline [\n]
space [' ']
tab ['\t']
%x FUNCTION
%%

{newline} {line++;}
{space} {;}
{tab} {;}
"#".* {;}
"//".* {;}
"/*"(.|{newline})*"*/" {for(int i=0; i<strlen(yytext); i++){if(yytext[i] == '\n'){line++;}}}
\"(.)*\" {insertIntoTable(line, yytext, "STRING"); return STRING;}
int {insertIntoTable(line, yytext, "KEYWORD"); yylval.t.lexeme = "INT"; return INT;}
char {insertIntoTable(line, yytext, "KEYWORD"); yylval.t.lexeme = "CHAR"; return CHAR;}
float {insertIntoTable(line, yytext, "KEYWORD"); yylval.t.lexeme = "FLOAT"; return FLOAT;}
void {insertIntoTable(line, yytext, "KEYWORD"); return VOID;}
if {insertIntoTable(line, yytext, "KEYWORD"); return IF;}
else {insertIntoTable(line, yytext, "KEYWORD"); return ELSE;}
for {insertIntoTable(line, yytext, "KEYWORD"); return FOR;}
while {insertIntoTable(line, yytext, "KEYWORD"); return WHILE;}
switch {insertIntoTable(line, yytext, "KEYWORD"); return SWITCH;}
continue {insertIntoTable(line, yytext, "KEYWORD"); return CONTINUE;}
break {insertIntoTable(line, yytext, "KEYWORD"); return BREAK;}
return {insertIntoTable(line, yytext, "KEYWORD"); return RETURN;}
printf {insertIntoTable(line, yytext, "KEYWORD"); return PRINTF;}
default {insertIntoTable(line, yytext, "KEYWORD"); return DEFAULT;}
case {insertIntoTable(line, yytext, "KEYWORD"); return CASE;}

{alp}({alp}|{digit})* {insertIntoTable(line, yytext, "IDENTIFIER"); yylval.t.lexeme = strdup(yytext); return ID;}
"-"?{digit}+ {insertIntoTable(line, yytext, "INT_CONST"); yylval.t.lexeme = strdup("INT"); yylval.t.val = atof(yytext); return INT_CONST;}
"-"?{digit}+\.{digit}+ {insertIntoTable(line, yytext, "FLOAT_CONST"); yylval.t.lexeme = strdup("FLOAT"); yylval.t.val = atof(yytext); return FLOAT_CONST;}
\'.\' {insertIntoTable(line, yytext, "CHAR_CONST"); yylval.t.lexeme = strdup("CHAR"); yylval.t.val = (float)(yytext[1]-'a'); return CHAR_CONST;}
\\n {return NEWLINE;}
("+"|"-"|"*"|"/"|\"|";"|","|"="|"%") {insertIntoTable(line, yytext, "OPERATOR"); return *yytext;}
("("|")"|"{"|"}"|"["|"]") {//insertIntoTable(line, yytext, "SYMBOL");
    return *yytext;}
">"  {yylval.t.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return LESS;}
"<"  {yylval.t.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return GTR;}    
">=" {yylval.t.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return GTR_EQ;}
"<=" {yylval.t.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return LESS_EQ;}
"==" {yylval.t.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return EQ_EQ;}
"!=" {yylval.t.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return NOT_EQ;}
"&&" {yylval.t.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return AND;}
"\|\|" {insertIntoTable(line, yytext, "SYMBOL"); return OR;}
"!" {insertIntoTable(line, yytext, "SYMBOL"); return NOT;}
(.|"/*"|"*/") {insertIntoTable(line, yytext, "UNKNOWN"); return UNK;}

({digit})+({alp}|{digit})* {insertIntoTable(line, yytext, "UNKNOWN"); return UNK;}

{alp}({alp}|{digit})*\[\] {insertIntoTable(line,yytext,"ARR_E");return ARR_E;}
{alp}({alp}|{digit})*\[({digit}*)\] {insertIntoTable(line,yytext,"ARR");return ARR;}
{alp}({alp}|{digit})*\[({digit}*)\]\[({digit}*)\] {insertIntoTable(line,yytext,"ARR2");return ARR2;}
{alp}({alp}|{digit})*\(({alp}|{digit}|{space}|,)*\) {
                                                    for(int i = yyleng-1; i>=0; i--){
                                                        unput(yytext[i]);
                                                    }
                                                    BEGIN(FUNCTION);}

<FUNCTION>{alp}({alp}|{digit})* {
                                yylval.t.lexeme = strdup(yytext);
                                BEGIN(INITIAL);
                                if(strcmp("if", yytext)==0){insertIntoTable(line, yytext, "KEYWORD"); return IF;}
                                else if(strcmp("printf", yytext)==0){insertIntoTable(line, yytext, "KEYWORD"); return PRINTF;}
                                else if(strcmp("for", yytext)==0){insertIntoTable(line, yytext, "KEYWORD"); return FOR;}
                                else if(strcmp("while", yytext)==0){insertIntoTable(line, yytext, "KEYWORD"); return WHILE;}
                                insertIntoTable(line, yytext, "FUNCTION");
                                return FUNC;
                                }

%%
typedef struct node {
    char *lexeme;
    char *token;
    struct node *next;
} node;

node *sym_table[1000];

node *createNode(char *lexeme, char *token){
    node *temp = (node*)malloc(sizeof(node));
    temp->lexeme = (char*)malloc(sizeof(char)*strlen(lexeme));
    temp->token = (char*)malloc(sizeof(char)*strlen(token));
    strcpy(temp->lexeme, lexeme);
    strcpy(temp->token, token);
    temp->next = NULL;
    return temp;
}

void insertIntoTable(int line, char *yytext, char *token){
    node *temp = createNode(yytext, token);
    if(sym_table[line] == NULL){
        sym_table[line] = temp;
        return;
    }

    node *ptr = sym_table[line];
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void printTable(){
    printf("\nSYMBOL TABLE-------------------\n");
    printf("Line\tLexeme\tToken\n\n");
    for(int i=0; i<1000; i++){
        if(sym_table[i] != NULL){
            node *ptr = sym_table[i];
            while(ptr != NULL){
                printf("%d\t%s\t%s\n", i, ptr->lexeme, ptr->token);
                ptr = ptr->next;
            }
        }
    }
    printf("\n");
}

int yywrap()
{
	return 1;
}