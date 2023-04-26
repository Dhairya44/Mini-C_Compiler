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
    ID = 258,                      /* ID  */
    INT_CONST = 259,               /* INT_CONST  */
    FLOAT_CONST = 260,             /* FLOAT_CONST  */
    CHAR_CONST = 261,              /* CHAR_CONST  */
    ARR = 262,                     /* ARR  */
    ARR2 = 263,                    /* ARR2  */
    ARR_E = 264,                   /* ARR_E  */
    FUNC = 265,                    /* FUNC  */
    STRING = 266,                  /* STRING  */
    INT = 267,                     /* INT  */
    FLOAT = 268,                   /* FLOAT  */
    CHAR = 269,                    /* CHAR  */
    VOID = 270,                    /* VOID  */
    IF = 271,                      /* IF  */
    ELSE = 272,                    /* ELSE  */
    WHILE = 273,                   /* WHILE  */
    FOR = 274,                     /* FOR  */
    SWITCH = 275,                  /* SWITCH  */
    CONTINUE = 276,                /* CONTINUE  */
    BREAK = 277,                   /* BREAK  */
    RETURN = 278,                  /* RETURN  */
    PRINTF = 279,                  /* PRINTF  */
    DEFAULT = 280,                 /* DEFAULT  */
    CASE = 281,                    /* CASE  */
    GTR_EQ = 282,                  /* GTR_EQ  */
    LESS_EQ = 283,                 /* LESS_EQ  */
    NOT_EQ = 284,                  /* NOT_EQ  */
    AND = 285,                     /* AND  */
    OR = 286,                      /* OR  */
    NOT = 287,                     /* NOT  */
    EQ_EQ = 288,                   /* EQ_EQ  */
    NEWLINE = 289,                 /* NEWLINE  */
    UNK = 290,                     /* UNK  */
    END_OF_FILE = 291              /* END_OF_FILE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define INT_CONST 259
#define FLOAT_CONST 260
#define CHAR_CONST 261
#define ARR 262
#define ARR2 263
#define ARR_E 264
#define FUNC 265
#define STRING 266
#define INT 267
#define FLOAT 268
#define CHAR 269
#define VOID 270
#define IF 271
#define ELSE 272
#define WHILE 273
#define FOR 274
#define SWITCH 275
#define CONTINUE 276
#define BREAK 277
#define RETURN 278
#define PRINTF 279
#define DEFAULT 280
#define CASE 281
#define GTR_EQ 282
#define LESS_EQ 283
#define NOT_EQ 284
#define AND 285
#define OR 286
#define NOT 287
#define EQ_EQ 288
#define NEWLINE 289
#define UNK 290
#define END_OF_FILE 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
