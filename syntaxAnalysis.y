%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include<ctype.h>
    extern FILE *yyin;
%}
%left '+' '-'
%left '*' '/'
%token ID INT_CONST FLOAT_CONST CHAR_CONST ARR ARR2 ARR_E FUNC STRING
%token INT FLOAT CHAR VOID IF ELSE WHILE FOR SWITCH CONTINUE BREAK RETURN PRINTF DEFAULT CASE
%token GTR_EQ LESS_EQ NOT_EQ AND OR NOT EQ_EQ
%token NEWLINE UNK END_OF_FILE
%%

S : BEGIN {printf("DONE!\n"); return;}

BEGIN : FUNC_DECL BEGIN 
      | FUNC_DECL 

TYPE : INT | FLOAT | CHAR | VOID

FUNC_DECL : TYPE ID '(' PARA_LIST ')' '{' STMT_LIST '}' 
          | TYPE ID '(' ')' '{' STMT_LIST '}'
          
PARA_LIST : PARA_LIST ',' PARA
          | PARA

PARA : TYPE ID

STMT_LIST : STMT STMT_LIST 
          | STMT
          | '{' STMT_LIST '}'

STMT : PRINT | RTRN_STMT | FUNC_CALL | ARR_DECL | IF_STMT | ';'

IF_STMT : MAT | UNMAT

MAT : IF '(' INT_CONST ')' '{' STMT_LIST '}'

UNMAT : IF '(' INT_CONST ')' '{' STMT_LIST '}' ELSE '{' STMT_LIST '}'

PRINT : PRINTF '(' STRING ')' ';'
      | PRINTF '(' STRING ',' VAR_LIST ')' ';'

VAR_LIST : ID 
         | ID ',' VAR_LIST

RTRN_STMT : RETURN ID ';'
       | RETURN CONST ';'
       | RETURN ';'

CONST : INT_CONST | FLOAT_CONST | CHAR_CONST

FUNC_CALL : TYPE ID '=' ID '(' VAR_LIST ')' ';'
          | TYPE ID '=' ID '(' ')' ';'
          | ID '(' ')' ';'
          | ID '(' VAR_LIST ')' ';'
          | ID '=' ID '(' ')' ';'
          | ID '=' ID '(' VAR_LIST ')' ';'

ARR_DECL : TYPE ARR ';'
         | TYPE ARR '=' '{' CONST_LIST '}' ';'
         | TYPE ARR_E '=' '{' CONST_LIST '}' ';'
         | TYPE ARR2 ';'
         | TYPE ARR2 '=' '{' CONST_LIST2 '}' ';'

CONST_LIST : INT_LIST | FLOAT_LIST | CHAR_LIST

CONST_LIST2 : '{' CONST_LIST '}'
            | '{' CONST_LIST '}' ',' CONST_LIST2

INT_LIST : INT_CONST | INT_CONST ',' INT_LIST

FLOAT_LIST : FLOAT_CONST | FLOAT_CONST ',' FLOAT_LIST

CHAR_LIST : CHAR_CONST | CHAR_CONST ',' CHAR_LIST

%%

void yyerror()
{
    printf("Syntax Error\n");
    exit(0);
}

int main()
{
    yyin = fopen("input.txt","r");
    yyparse();
    printTable();
    return 0;
}