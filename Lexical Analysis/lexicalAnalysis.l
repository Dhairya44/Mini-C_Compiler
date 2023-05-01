%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    int line = 1;
    enum tokens {KEYWORD=1, IDENTIFIER, INT_CONST, FLOAT_CONST, CHAR_CONST, OPERATOR, SYMBOL, ARR, FUNC};
    enum keywords {INT=100, FLOAT, CHAR, IF, ELSE, FOR, WHILE, SWITCH, CONTINUE, BREAK, RETURN, PRINTF, DEFAULT, CASE};
    enum operators {PLUS=200, MINUS, MUL, DIV, GTR, LESS, GTR_EQ, LESS_EQ, EQ, NOT_EQ, AND, OR, NOT, EQ_EQ};
    enum symbols {SEMICOLON=300, COMMA, LPAREN, RPAREN, LBRACE, RBRACE, LBRACKET, RBRACKET, SQT, DQT, PER, NEWLINE};
    enum unknown {UNK=400};
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
int {return INT;}
char {return CHAR;}
float {return FLOAT;}
if {return IF;}
else {return ELSE;}
for {return FOR;}
while {return WHILE;}
switch {return SWITCH;}
continue {return CONTINUE;}
break {return BREAK;}
return {return RETURN;}
printf {return PRINTF;}
default {return DEFAULT;}
case {return CASE;}

{alp}({alp}|{digit})* {return IDENTIFIER;}
"-"?{digit}+ {return INT_CONST;}
"-"?{digit}+\.{digit}+ {return FLOAT_CONST;}
\'.\' {return CHAR_CONST;}
\\n {return NEWLINE;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return MUL;}
"/" {return DIV;}
">" {return GTR;}
"<" {return LESS;}
">=" {return GTR_EQ;}
"<=" {return LESS_EQ;}
"==" {return EQ_EQ;}
"=" {return EQ;}
"!=" {return NOT_EQ;}
"&&" {return AND;}
"\|\|" {return OR;}
"!" {return NOT;}
";" {return SEMICOLON;}
"," {return COMMA;}
"\(" {return LPAREN;}
"\)" {return RPAREN;}
"\{" {return LBRACE;}
"\}" {return RBRACE;}
"\[" {return LBRACKET;}
"\]" {return RBRACKET;}
\" {return DQT;}
"\%" {return PER;}
. {return UNK;}
"/*" {return UNK;}
"*/" {return UNK;}
({digit})+({alp}|{digit})* return UNK;

{alp}({alp}|{digit})*\[({digit}*)\] {return ARR;}
{alp}({alp}|{digit})*\(({alp}|{digit}|{space})*\) return FUNC;

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
    printf("\nLine\tLexeme\tToken\n\n");
    for(int i=0; i<1000; i++){
        if(sym_table[i] != NULL){
            node *ptr = sym_table[i];
            while(ptr != NULL){
                printf("%d\t%s\t%s\n", i, ptr->lexeme, ptr->token);
                ptr = ptr->next;
            }
        }
    }
}

int main(){
    yyin = fopen("../input.txt", "r");
    int scan = yylex();
    while(scan){
        switch(scan){
            case IDENTIFIER: insertIntoTable(line, yytext, "IDENTIFIER"); break;
            case INT_CONST: insertIntoTable(line, yytext, "INT_CONST"); break;
            case FLOAT_CONST: insertIntoTable(line, yytext, "FLOAT_CONST"); break;
            case CHAR_CONST: insertIntoTable(line, yytext, "CHAR_CONST"); break;
            case ARR: insertIntoTable(line, yytext, "ARR"); break;
            case FUNC: insertIntoTable(line, yytext, "FUNC"); break;
            case 100 ... 199: insertIntoTable(line,yytext,"KEYWORDS"); break;
            case 200 ... 299: insertIntoTable(line,yytext,"OPERATORS"); break;
            case 300 ... 399: insertIntoTable(line,yytext,"SYMBOLS"); break;
            case UNK: insertIntoTable(line,yytext,"UNKNOWN"); break;
            default: break;
        }
        scan = yylex();
    }
    printTable();
}

int yywrap()
{
	return 1;
}