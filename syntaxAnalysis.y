%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include<ctype.h>
%}
%token IDENTIFIER INT_CONST FLOAT_CONST CHAR_CONST ARR FUNC
%token INT FLOAT CHAR IF ELSE WHILE FOR SWITCH CONTINUE BREAK RETURN PRINTF DEFAULT CASE
%token GTR_EQ LESS_EQ NOT_EQ AND OR NOT EQ_EQ
%token NEWLINE UNK
%%

E: S {return;}
S: IDENTIFIER '=' INT_CONST '+' INT_CONST

%%

void yyerror()
{
    printf("Syntax Error\n");
    exit(0);
}

int main()
{
    yyparse();
    printTable();
    return 0;
}