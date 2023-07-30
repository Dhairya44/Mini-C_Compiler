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
int {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return INT;}
char {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return CHAR;}
float {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return FLOAT;}
void {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return VOID;}
if {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return IF;}
else {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return ELSE;}
for {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return FOR;}
while {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return WHILE;}
switch {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return SWITCH;}
continue {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return CONTINUE;}
break {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return BREAK;}
return {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return RETURN;}
printf {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return PRINTF;}
default {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return DEFAULT;}
case {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return CASE;}

{alp}({alp}|{digit})* {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "IDENTIFIER"); return ID;}
"-"?{digit}+ {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "INT_CONST"); return INT_CONST;}
"-"?{digit}+\.{digit}+ {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "FLOAT_CONST"); return FLOAT_CONST;}
\'.\' {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "CHAR_CONST"); return CHAR_CONST;}
\\n {return NEWLINE;}
("+"|"-"|"*"|"/"|\"|";"|","|"="|"%"|":") {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "OPERATOR"); return *yytext;}
("("|")"|"{"|"}"|"["|"]") {//insertIntoTable(line, yytext, "SYMBOL");
    return *yytext;}

">" {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return COMP_OP;}
"<" {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return COMP_OP;}
">=" {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return COMP_OP;}
"<=" {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return COMP_OP;}
"==" {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return COMP_OP;}
"!=" {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return COMP_OP;}
"&&" {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return COMP_OP;}
"\|\|" {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return COMP_OP;}
"!" {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "SYMBOL"); return COMP_OP;}
(.|"/*"|"*/") {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "UNKNOWN"); return UNK;}

({digit})+({alp}|{digit})* {yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "UNKNOWN"); return UNK;}

{alp}({alp}|{digit})*\[\] {yylval.lexeme = strdup(yytext); insertIntoTable(line,yytext,"ARR_E");return ARR_E;}
{alp}({alp}|{digit})*\[({digit}*)\] {yylval.lexeme = strdup(yytext); insertIntoTable(line,yytext,"ARR");return ARR;}
{alp}({alp}|{digit})*\[({digit}*)\]\[({digit}*)\] {yylval.lexeme = strdup(yytext); insertIntoTable(line,yytext,"ARR2");return ARR2;}
{alp}({alp}|{digit})*\(({alp}|{digit}|{space}|,)*\) {
                                                    for(int i = yyleng-1; i>=0; i--){
                                                        unput(yytext[i]);
                                                    }
                                                    BEGIN(FUNCTION);}

<FUNCTION>{alp}({alp}|{digit})* {
                                BEGIN(INITIAL);
                                if(strcmp("if", yytext)==0){yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return IF;}
                                else if(strcmp("printf", yytext)==0){yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return PRINTF;}
                                else if(strcmp("for", yytext)==0){yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return FOR;}
                                else if(strcmp("while", yytext)==0){yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return WHILE;}
                                else if(strcmp("switch", yytext)==0){yylval.lexeme = strdup(yytext); insertIntoTable(line, yytext, "KEYWORD"); return SWITCH;}
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