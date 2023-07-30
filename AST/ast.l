%{
    #include "header.h"
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
%x ARRAY
%%

{newline} {line++;}
{space} {;}
{tab} {;}
"#".* {;}
"//".* {;}
"/*"(.|{newline})*"*/" {for(int i=0; i<strlen(yytext); i++){if(yytext[i] == '\n'){line++;}}}
\"(.)*\" {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "STRING"); return STRING;}
int {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return INT;}
char {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return CHAR;}
float {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return FLOAT;}
void {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return VOID;}
if {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return IF;}
else {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return ELSE;}
for {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return FOR;}
while {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return WHILE;}
switch {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return SWITCH;}
continue {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return CONTINUE;}
break {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return BREAK;}
return {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return RETURN;}
printf {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return PRINTF;}
default {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return DEFAULT;}
case {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "KEYWORD"); return CASE;}

{alp}({alp}|{digit})* {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "IDENTIFIER"); return ID;}
"-"?{digit}+ {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "INT_CONST"); return INT_CONST;}
"-"?{digit}+\.{digit}+ {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "FLOAT_CONST"); return FLOAT_CONST;}
\'.\' {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "CHAR_CONST"); return CHAR_CONST;}
\\n {return NEWLINE;}
("+"|"-"|"*"|"/"|"<"|">"|\"|";"|","|"="|"%"|":") {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "OPERATOR"); return *yytext;}
("("|")"|"{"|"}"|"["|"]") {//insertIntoTable(line, yytext, "SYMBOL");
    return *yytext;}
">=" {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "SYMBOL"); return GTR_EQ;}
"<=" {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "SYMBOL"); return LESS_EQ;}
"==" {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "SYMBOL"); return EQ_EQ;}
"!=" {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "SYMBOL"); return NOT_EQ;}
"&&" {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "SYMBOL"); return AND;}
"\|\|" {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "SYMBOL"); return OR;}
"!" {strcpy(yylval.string, yytext); insertIntoTable(line, yytext, "SYMBOL"); return NOT;}
(.|"/*"|"*/") {insertIntoTable(line, yytext, "UNKNOWN"); return UNK;}

({digit})+({alp}|{digit})* {insertIntoTable(line, yytext, "UNKNOWN"); return UNK;}

{alp}({alp}|{digit})*\[\] {insertIntoTable(line,yytext,"ARR_E");return ARR_E;}

{alp}({alp}|{digit})*\[({digit}+)\] {
                                    for(int i = yyleng - 1;i>=0; i--){
                                        unput(yytext[i]);
                                    }
                                    BEGIN(ARRAY);
                                    }

{alp}({alp}|{digit})*\[({digit}*)\]\[({digit}*)\] {
                                                    for(int i = yyleng - 1;i>=0; i--){
                                                        unput(yytext[i]);
                                                    }
                                                    BEGIN(ARRAY);
                                                  }

<ARRAY>{alp}({alp}|{digit})* {BEGIN(INITIAL); insertIntoTable(line,yytext,"ARR"); strcpy(yylval.string,yytext); return ARR;}

{alp}({alp}|{digit})*\(({alp}|{digit}|{space}|,)*\) {
                                                    for(int i = yyleng-1; i>=0; i--){
                                                        unput(yytext[i]);
                                                    }
                                                    BEGIN(FUNCTION);}

<FUNCTION>{alp}({alp}|{digit})* {strcpy(yylval.string, yytext);
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