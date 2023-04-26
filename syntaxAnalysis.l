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
%%

{newline} {line++;}
{space} {;}
{tab} {;}
"#".* {;}
"//".* {;}
"/*"(.|{newline})*"*/" {for(int i=0; i<strlen(yytext); i++){if(yytext[i] == '\n'){line++;}}}
int {insertIntoTable(line, yytext, "KEYWORD"); return INT;}
char {insertIntoTable(line, yytext, "KEYWORD"); return CHAR;}
float {insertIntoTable(line, yytext, "KEYWORD"); return FLOAT;}
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

{alp}({alp}|{digit})* {insertIntoTable(line, yytext, "IDENTIFIER"); return IDENTIFIER;}
"-"?{digit}+ {insertIntoTable(line, yytext, "INT_CONST"); return INT_CONST;}
"-"?{digit}+\.{digit}+ {insertIntoTable(line, yytext, "FLOAT_CONST"); return FLOAT_CONST;}
\'.\' {insertIntoTable(line, yytext, "CHAR_CONST"); return CHAR_CONST;}
\\n {return NEWLINE;}
("+"|"-"|"*"|"/"|">"|"<"|\"|";"|","|"="|"%") {insertIntoTable(line, yytext, "OPERATOR"); return *yytext;}
("("|")"|"{"|"}"|"["|"]") {insertIntoTable(line, yytext, "SYMBOL"); return *yytext;}
">=" {insertIntoTable(line, yytext, "SYMBOL"); return GTR_EQ;}
"<=" {insertIntoTable(line, yytext, "SYMBOL"); return LESS_EQ;}
"==" {insertIntoTable(line, yytext, "SYMBOL"); return EQ_EQ;}
"!=" {insertIntoTable(line, yytext, "SYMBOL"); return NOT_EQ;}
"&&" {insertIntoTable(line, yytext, "SYMBOL"); return AND;}
"\|\|" {insertIntoTable(line, yytext, "SYMBOL"); return OR;}
"!" {insertIntoTable(line, yytext, "SYMBOL"); return NOT;}
(.|"/*"|"*/") {insertIntoTable(line, yytext, "UNKNOWN"); return UNK;}

({digit})+({alp}|{digit})* {insertIntoTable(line, yytext, "UNKNOWN"); return UNK;}

{alp}({alp}|{digit})*\[({digit}*)\] {insertIntoTable(line,yytext,"ARR");return ARR;}
{alp}({alp}|{digit})*\(({alp}|{digit}|{space})*\) {insertIntoTable(line, yytext, "FUNCTION"); return FUNC;}

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