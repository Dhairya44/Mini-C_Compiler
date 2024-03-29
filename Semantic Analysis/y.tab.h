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
    INT = 260,                     /* INT  */
    FLOAT = 261,                   /* FLOAT  */
    CHAR = 262,                    /* CHAR  */
    VOID = 263,                    /* VOID  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    WHILE = 266,                   /* WHILE  */
    FOR = 267,                     /* FOR  */
    SWITCH = 268,                  /* SWITCH  */
    CONTINUE = 269,                /* CONTINUE  */
    BREAK = 270,                   /* BREAK  */
    RETURN = 271,                  /* RETURN  */
    PRINTF = 272,                  /* PRINTF  */
    DEFAULT = 273,                 /* DEFAULT  */
    CASE = 274,                    /* CASE  */
    GTR_EQ = 275,                  /* GTR_EQ  */
    LESS_EQ = 276,                 /* LESS_EQ  */
    NOT_EQ = 277,                  /* NOT_EQ  */
    AND = 278,                     /* AND  */
    OR = 279,                      /* OR  */
    NOT = 280,                     /* NOT  */
    EQ_EQ = 281,                   /* EQ_EQ  */
    LESS = 282,                    /* LESS  */
    GTR = 283,                     /* GTR  */
    NEWLINE = 284,                 /* NEWLINE  */
    UNK = 285,                     /* UNK  */
    END_OF_FILE = 286,             /* END_OF_FILE  */
    ID = 287,                      /* ID  */
    INT_CONST = 288,               /* INT_CONST  */
    FLOAT_CONST = 289,             /* FLOAT_CONST  */
    CHAR_CONST = 290,              /* CHAR_CONST  */
    FUNC = 291,                    /* FUNC  */
    STRING = 292,                  /* STRING  */
    ARR = 293                      /* ARR  */
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
#define INT 260
#define FLOAT 261
#define CHAR 262
#define VOID 263
#define IF 264
#define ELSE 265
#define WHILE 266
#define FOR 267
#define SWITCH 268
#define CONTINUE 269
#define BREAK 270
#define RETURN 271
#define PRINTF 272
#define DEFAULT 273
#define CASE 274
#define GTR_EQ 275
#define LESS_EQ 276
#define NOT_EQ 277
#define AND 278
#define OR 279
#define NOT 280
#define EQ_EQ 281
#define LESS 282
#define GTR 283
#define NEWLINE 284
#define UNK 285
#define END_OF_FILE 286
#define ID 287
#define INT_CONST 288
#define FLOAT_CONST 289
#define CHAR_CONST 290
#define FUNC 291
#define STRING 292
#define ARR 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "semanticAnalysis.y"

    struct{
        char *lexeme;
        float val;
    }t;

#line 150 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
