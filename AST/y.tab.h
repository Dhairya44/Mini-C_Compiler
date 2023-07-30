/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ARR2 = 258,                    /* ARR2  */
    ARR_E = 259,                   /* ARR_E  */
    NUL = 260,                     /* NUL  */
    FUNC_C = 261,                  /* FUNC_C  */
    INT = 262,                     /* INT  */
    FLOAT = 263,                   /* FLOAT  */
    CHAR = 264,                    /* CHAR  */
    VOID = 265,                    /* VOID  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    WHILE = 268,                   /* WHILE  */
    FOR = 269,                     /* FOR  */
    SWITCH = 270,                  /* SWITCH  */
    CONTINUE = 271,                /* CONTINUE  */
    BREAK = 272,                   /* BREAK  */
    RETURN = 273,                  /* RETURN  */
    PRINTF = 274,                  /* PRINTF  */
    DEFAULT = 275,                 /* DEFAULT  */
    CASE = 276,                    /* CASE  */
    GTR_EQ = 277,                  /* GTR_EQ  */
    LESS_EQ = 278,                 /* LESS_EQ  */
    NOT_EQ = 279,                  /* NOT_EQ  */
    AND = 280,                     /* AND  */
    OR = 281,                      /* OR  */
    NOT = 282,                     /* NOT  */
    EQ_EQ = 283,                   /* EQ_EQ  */
    NEWLINE = 284,                 /* NEWLINE  */
    UNK = 285,                     /* UNK  */
    END_OF_FILE = 286,             /* END_OF_FILE  */
    GLOBAL = 287,                  /* GLOBAL  */
    COMP_OP = 288,                 /* COMP_OP  */
    ARR = 289,                     /* ARR  */
    ARR_D = 290,                   /* ARR_D  */
    ID = 291,                      /* ID  */
    INT_CONST = 292,               /* INT_CONST  */
    FLOAT_CONST = 293,             /* FLOAT_CONST  */
    CHAR_CONST = 294,              /* CHAR_CONST  */
    FUNC = 295,                    /* FUNC  */
    STRING = 296                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ARR2 258
#define ARR_E 259
#define NUL 260
#define FUNC_C 261
#define INT 262
#define FLOAT 263
#define CHAR 264
#define VOID 265
#define IF 266
#define ELSE 267
#define WHILE 268
#define FOR 269
#define SWITCH 270
#define CONTINUE 271
#define BREAK 272
#define RETURN 273
#define PRINTF 274
#define DEFAULT 275
#define CASE 276
#define GTR_EQ 277
#define LESS_EQ 278
#define NOT_EQ 279
#define AND 280
#define OR 281
#define NOT 282
#define EQ_EQ 283
#define NEWLINE 284
#define UNK 285
#define END_OF_FILE 286
#define GLOBAL 287
#define COMP_OP 288
#define ARR 289
#define ARR_D 290
#define ID 291
#define INT_CONST 292
#define FLOAT_CONST 293
#define CHAR_CONST 294
#define FUNC 295
#define STRING 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "ast.y"

    int ival;
    nodeType *nPtr;
    char string[100];

#line 155 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
