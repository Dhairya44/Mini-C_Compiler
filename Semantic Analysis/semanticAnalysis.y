%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include<ctype.h>
    #include<limits.h>
    #include "table.c"
    extern FILE *yyin;
    
    int decCounter = 0;
    int list_c = 0;
    char *listType[100];
%}
%union{
    struct{
        char *lexeme;
        float val;
    }t;
}
%left '+' '-'
%left '*' '/'
%token ARR ARR2 ARR_E STRING 
%token INT FLOAT CHAR VOID IF ELSE WHILE FOR SWITCH CONTINUE BREAK RETURN PRINTF DEFAULT CASE
%token <t> GTR_EQ LESS_EQ NOT_EQ AND OR NOT EQ_EQ LESS GTR
%token NEWLINE UNK END_OF_FILE
%token <t> ID INT_CONST FLOAT_CONST CHAR_CONST FUNC
%type <t> CONST TYPE DECL EXPR FACTOR TERM COMP_OP FUNC_DECL PARA_LIST
%%

S : BEGIN {print_Id_Table(); id_count = 0; printf("DONE!\n");}

BEGIN : FUNC_DECL BEGIN {}
      | FUNC_DECL {}

TYPE : INT {$$.lexeme = "INT";} 
     | FLOAT {$$.lexeme = "FLOAT";}
     | CHAR {$$.lexeme = "CHAR";}
     | VOID {$$.lexeme = "VOID";}

FUNC_DECL : TYPE FUNC '(' PARA_LIST {insertFunc($2.lexeme,$1.lexeme); updateFunc((int)$4.val, dec); decCounter = 0;} ')' '{' STMT_LIST '}' {print_Id_Table(); id_count = 0;}
          | TYPE FUNC '(' {insertFunc($2.lexeme,$1.lexeme);} ')' '{' STMT_LIST '}' 
          
PARA_LIST : PARA_LIST ',' TYPE ID {$$.val = $1.val + 1; insertID($4.lexeme, $3.lexeme); dec[decCounter].type = $3.lexeme; dec[decCounter].name = $4.lexeme; decCounter++;}
          | TYPE ID {$$.val = 1; insertID($2.lexeme, $1.lexeme); dec[decCounter].type = $1.lexeme; dec[decCounter].name = $2.lexeme; decCounter++;}

STMT_LIST : STMT STMT_LIST 
          | STMT
          | '{' STMT_LIST '}'
          | '{' STMT_LIST '}' STMT_LIST

STMT : PRINT | RTRN_STMT | FUNC_CALL | BRK_CNT | ARR_DECL | FOR_STMT | EXPR | WHILE_STMT | IF_STMT | ASSGN ';' 
        | DECL ';' 
        | ';'

BRK_CNT : CONTINUE ';' | BREAK ';'

FOR_STMT : FOR '(' ASSGN ';' EXPR ';' ASSGN ')' '{' STMT_LIST '}'
         | FOR '(' DECL ';' EXPR ';' ASSGN ')' '{' STMT_LIST '}'
         | FOR '(' ';' EXPR ';' ASSGN ')' '{' STMT_LIST '}'

WHILE_STMT : WHILE '(' EXPR ')' '{' STMT_LIST '}'

EXPR : EXPR COMP_OP TERM {if(strcmp($1.lexeme, $3.lexeme)!=0){
                                print_Id_Table();
                                printf("ERROR: Type mismatch for expression\n");
                                exit(0);
                            }
                            $$.lexeme = $1.lexeme;
                            $$.val = (float)comparator($1.val,$3.val,$2.lexeme);
                         }
     | TERM {$$.lexeme = $1.lexeme; $$.val = $1.val;}
COMP_OP : LESS {$$.lexeme = $1.lexeme;} | GTR {$$.lexeme = $1.lexeme;} | GTR_EQ {$$.lexeme = $1.lexeme;} | LESS_EQ {$$.lexeme = $1.lexeme;} | NOT_EQ {$$.lexeme = $1.lexeme;} | AND {$$.lexeme = $1.lexeme;} | OR {$$.lexeme = $1.lexeme;} | EQ_EQ {$$.lexeme = $1.lexeme;}
TERM : TERM '+' FACTOR {if(strcmp($1.lexeme,$3.lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} $$.lexeme = $1.lexeme; $$.val = $1.val + $3.val;}
     | TERM '-' FACTOR {if(strcmp($1.lexeme,$3.lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} $$.lexeme = $1.lexeme; $$.val = $1.val - $3.val;}
     | TERM '*' FACTOR {if(strcmp($1.lexeme,$3.lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} $$.lexeme = $1.lexeme; $$.val = $1.val * $3.val;}
     | TERM '/' FACTOR {if(strcmp($1.lexeme,$3.lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} $$.lexeme = $1.lexeme; $$.val = $1.val / $3.val;}
     | FACTOR {$$.lexeme = $1.lexeme;}

FACTOR : '(' EXPR ')' {$$.lexeme = $2.lexeme; $$.val = $2.val;}
       | ID {bool found = true;
             for(int i = 0; i<id_count; i++){
                if(strcmp(id_table[i].name,$1.lexeme)==0){
                    found = false;
                    $$.lexeme = id_table[i].type;
                    $$.val = id_table[i].val;
                    break;
                }
             }
                if(found){
                    printf("ERROR: Undeclared variable %s\n", $1.lexeme);
                    exit(0);
                }
             if(strcmp($$.lexeme, "CHAR") == 0){
                printf("ERROR: Arithmetic/Logical operation on character variable %s\n", $1.lexeme);
                exit(0);
             }
            }
       | CONST {if(!strcmp($1.lexeme,"CHAR")){
                    printf("ERROR: Arithmetic/Logical operation on character %c\n", (int)$1.val + 'a');
                    exit(0);
                }; $$.lexeme = $1.lexeme; $$.val = $1.val;}

ASSGN : ID '=' EXPR ASSGN_TAIL {typeCheck($1.lexeme,$3.lexeme); updateID($1.lexeme,$3.val);}
ASSGN_TAIL : ',' ID '=' EXPR ASSGN_TAIL {typeCheck($2.lexeme,$4.lexeme); updateID($2.lexeme,$4.val);}|

/* DECL: TYPE ID '=' CONST {insertID($2.lexeme,$1.lexeme);updateID($2.lexeme,$4.val);}  */
DECL : TYPE ID '=' EXPR DECL_TAIL {$$.lexeme = $1.lexeme; dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = $2.lexeme; dec[decCounter].val = $4.val; dec[decCounter].type = $4.lexeme; decCounter++;insertEntry($1.lexeme);}
     | TYPE ID DECL_TAIL {$$.lexeme = $1.lexeme; dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = $2.lexeme; dec[decCounter].val = INT_MIN; decCounter++;insertEntry($1.lexeme);}
                         
DECL_TAIL : ',' ID DECL_TAIL {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = $2.lexeme; dec[decCounter].val = INT_MIN; decCounter++;}
          | ',' ID '=' EXPR DECL_TAIL {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = $2.lexeme; dec[decCounter].val = $4.val;dec[decCounter].type = $4.lexeme; decCounter++;}
          |

IF_STMT : MAT | UNMAT

MAT : IF '(' EXPR ')' '{' STMT_LIST '}'

UNMAT : IF '(' EXPR ')' '{' STMT_LIST '}' ELSE '{' STMT_LIST '}'

PRINT : PRINTF '(' STRING ')' ';'
      | PRINTF '(' STRING ',' VAR_LIST ')' ';'

VAR_LIST : ID 
         | ID ',' VAR_LIST

RTRN_STMT : RETURN ID ';'
       | RETURN CONST ';'
       | RETURN ';'

CONST : INT_CONST {$$.val = $1.val;$$.lexeme = "INT";} 
      | FLOAT_CONST {$$.val = $1.val;$$.lexeme = "FLOAT";}
      | CHAR_CONST {$$.val = $1.val;$$.lexeme = "CHAR";}

FUNC_CALL : TYPE ID '=' FUNC '(' MIXED_LIST ')' ';' {if(strcmp($1.lexeme, findFunc($4.lexeme))!=0){
                                                            printf("ERROR: Type mismatch for function %s\n", $4.lexeme);
                                                            exit(0);
                                                        }
                                                        for(int i = 0; i<func_count; i++){
                                                            if(strcmp(func_table[i].name,$4.lexeme)==0){
                                                                if(func_table[i].para != list_c){
                                                                    printf("ERROR: Number of arguments mismatch for function %s\n", $4.lexeme);
                                                                    exit(0);
                                                                }
                                                                for(int j = 0; j<list_c; j++){
                                                                    if(strcmp(func_table[i].paraType[j],listType[j])!=0){
                                                                        printf("ERROR: Type mismatch for function %s\n", $4.lexeme);
                                                                        exit(0);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        list_c = 0;
                                                    }
          | TYPE ID '=' FUNC '(' ')' ';' {if(strcmp($1.lexeme, findFunc($4.lexeme))!=0){
                                                printf("ERROR: Type mismatch for function %s\n", $4.lexeme);
                                                exit(0);
                                            }
                                            for(int i = 0; i<func_count; i++){
                                                if(strcmp(func_table[i].name,$4.lexeme)==0){
                                                    if(func_table[i].para != list_c){
                                                        printf("ERROR: Number of arguments mismatch for function %s\n", $4.lexeme);
                                                        exit(0);
                                                    }
                                                }
                                            }
                                            insertID($2.lexeme, $1.lexeme);
                                            }
          | FUNC '(' ')' ';'            {findFunc($1.lexeme);}
          | FUNC '(' MIXED_LIST ')' ';' {findFunc($1.lexeme); 
                                        for(int i = 0; i<func_count; i++){
                                            if(strcmp(func_table[i].name,$1.lexeme)==0){
                                                if(func_table[i].para != list_c){
                                                    printf("ERROR: Number of arguments mismatch for function %s\n", $1.lexeme);
                                                    exit(0);
                                                }
                                                for(int j = 0; j<list_c; j++){
                                                    if(strcmp(func_table[i].paraType[j],listType[j])!=0){
                                                        printf("ERROR: Type mismatch for function %s\n", $1.lexeme);
                                                        exit(0);
                                                    }
                                                }
                                            }
                                        }list_c = 0;}
          
          /* | ID '=' FUNC '(' ')' ';'
          | ID '=' FUNC '(' MIXED_LIST ')' ';' */

ARR_DECL : TYPE ARR ';'
         | TYPE ARR '=' '{' CONST_LIST '}' ';'
         | TYPE ARR_E '=' '{' CONST_LIST '}' ';'
         | TYPE ARR2 ';'
         | TYPE ARR2 '=' '{' CONST_LIST2 '}' ';'

CONST_LIST : INT_LIST | FLOAT_LIST | CHAR_LIST

MIXED_LIST : ID ',' MIXED_LIST {listType[list_c] = findIdType($1.lexeme); list_c++;}
            | CONST ',' MIXED_LIST {listType[list_c] = $1.lexeme; list_c++;}
            | ID {listType[list_c] = findIdType($1.lexeme); list_c++;}
            | CONST {listType[list_c] = $1.lexeme; list_c++;}

CONST_LIST2 : '{' CONST_LIST '}'
            | '{' CONST_LIST '}' ',' CONST_LIST2

INT_LIST : INT_CONST | INT_CONST ',' INT_LIST

FLOAT_LIST : FLOAT_CONST | FLOAT_CONST ',' FLOAT_LIST

CHAR_LIST : CHAR_CONST | CHAR_CONST ',' CHAR_LIST

%%

void insertEntry(char *t){
    for(int i = 0; i<decCounter; i++){
        insertID(dec[i].name, t);
        if(dec[i].val != INT_MIN){
            if(strcmp(dec[i].type, t)!=0){
                printf("ERROR: Type mismatch for variable %s\n", dec[i].name);
                exit(0);
            }
            updateID(dec[i].name,dec[i].val);
        }
    }
    decCounter = 0;                   
}

void yyerror()
{
    printTable();
    printf("Syntax Error\n");
    exit(0);
}

int main()
{
    yyin = fopen("../input.txt","r");
    yyparse();
    /* printTable(); */
    /* print_Id_Table(); */
    print_func_Table();
    return 0;
}