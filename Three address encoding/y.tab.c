/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "three.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>
    #include<string.h>
    #include<ctype.h>
    extern FILE *yyin;

    int label = 0;
    int tempVariable = 0;

    char* genTempVariable(int id){
        char* temp = (char*)malloc(10*sizeof(char));
        temp[0] = 'T';
        snprintf(temp, 10, "T%d", id);
        return temp;
    }

    int gencode(char* lhs, char* op, char* rhs){
        printf("\nT%d = %s %s %s \n", tempVariable, lhs, op, rhs);
        return tempVariable;
    }

    void assignment(char* lhs, char* rhs){
        printf("\n%s = %s \n", lhs, rhs);
    }

#line 99 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    END_OF_FILE = 291,             /* END_OF_FILE  */
    COMP_OP = 292                  /* COMP_OP  */
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
#define COMP_OP 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "three.y"

    char* lexeme;

#line 230 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '+'  */
  YYSYMBOL_4_ = 4,                         /* '-'  */
  YYSYMBOL_5_ = 5,                         /* '*'  */
  YYSYMBOL_6_ = 6,                         /* '/'  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_INT_CONST = 8,                  /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 9,                /* FLOAT_CONST  */
  YYSYMBOL_CHAR_CONST = 10,                /* CHAR_CONST  */
  YYSYMBOL_ARR = 11,                       /* ARR  */
  YYSYMBOL_ARR2 = 12,                      /* ARR2  */
  YYSYMBOL_ARR_E = 13,                     /* ARR_E  */
  YYSYMBOL_FUNC = 14,                      /* FUNC  */
  YYSYMBOL_STRING = 15,                    /* STRING  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_CHAR = 18,                      /* CHAR  */
  YYSYMBOL_VOID = 19,                      /* VOID  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_WHILE = 22,                     /* WHILE  */
  YYSYMBOL_FOR = 23,                       /* FOR  */
  YYSYMBOL_SWITCH = 24,                    /* SWITCH  */
  YYSYMBOL_CONTINUE = 25,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 26,                     /* BREAK  */
  YYSYMBOL_RETURN = 27,                    /* RETURN  */
  YYSYMBOL_PRINTF = 28,                    /* PRINTF  */
  YYSYMBOL_DEFAULT = 29,                   /* DEFAULT  */
  YYSYMBOL_CASE = 30,                      /* CASE  */
  YYSYMBOL_GTR_EQ = 31,                    /* GTR_EQ  */
  YYSYMBOL_LESS_EQ = 32,                   /* LESS_EQ  */
  YYSYMBOL_NOT_EQ = 33,                    /* NOT_EQ  */
  YYSYMBOL_AND = 34,                       /* AND  */
  YYSYMBOL_OR = 35,                        /* OR  */
  YYSYMBOL_NOT = 36,                       /* NOT  */
  YYSYMBOL_EQ_EQ = 37,                     /* EQ_EQ  */
  YYSYMBOL_NEWLINE = 38,                   /* NEWLINE  */
  YYSYMBOL_UNK = 39,                       /* UNK  */
  YYSYMBOL_END_OF_FILE = 40,               /* END_OF_FILE  */
  YYSYMBOL_COMP_OP = 41,                   /* COMP_OP  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* ':'  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* '='  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_S = 51,                         /* S  */
  YYSYMBOL_BEGIN = 52,                     /* BEGIN  */
  YYSYMBOL_TYPE = 53,                      /* TYPE  */
  YYSYMBOL_FUNC_DECL = 54,                 /* FUNC_DECL  */
  YYSYMBOL_PARA_LIST = 55,                 /* PARA_LIST  */
  YYSYMBOL_PARA = 56,                      /* PARA  */
  YYSYMBOL_SWITCH_STMT = 57,               /* SWITCH_STMT  */
  YYSYMBOL_CASE_STMT = 58,                 /* CASE_STMT  */
  YYSYMBOL_STMT_LIST = 59,                 /* STMT_LIST  */
  YYSYMBOL_STMT = 60,                      /* STMT  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_62_2 = 62,                      /* $@2  */
  YYSYMBOL_63_3 = 63,                      /* $@3  */
  YYSYMBOL_BRK_CNT = 64,                   /* BRK_CNT  */
  YYSYMBOL_FOR_STMT = 65,                  /* FOR_STMT  */
  YYSYMBOL_66_4 = 66,                      /* $@4  */
  YYSYMBOL_67_5 = 67,                      /* $@5  */
  YYSYMBOL_68_6 = 68,                      /* $@6  */
  YYSYMBOL_WHILE_STMT = 69,                /* WHILE_STMT  */
  YYSYMBOL_70_7 = 70,                      /* $@7  */
  YYSYMBOL_EXPR = 71,                      /* EXPR  */
  YYSYMBOL_TERM = 72,                      /* TERM  */
  YYSYMBOL_FACTOR = 73,                    /* FACTOR  */
  YYSYMBOL_ASSGN = 74,                     /* ASSGN  */
  YYSYMBOL_DECL = 75,                      /* DECL  */
  YYSYMBOL_DECL_TAIL = 76,                 /* DECL_TAIL  */
  YYSYMBOL_IF_STMT = 77,                   /* IF_STMT  */
  YYSYMBOL_78_8 = 78,                      /* $@8  */
  YYSYMBOL_79_9 = 79,                      /* $@9  */
  YYSYMBOL_PRINT = 80,                     /* PRINT  */
  YYSYMBOL_VAR_LIST = 81,                  /* VAR_LIST  */
  YYSYMBOL_RTRN_STMT = 82,                 /* RTRN_STMT  */
  YYSYMBOL_CONST = 83,                     /* CONST  */
  YYSYMBOL_FUNC_CALL = 84,                 /* FUNC_CALL  */
  YYSYMBOL_ARR_DECL = 85,                  /* ARR_DECL  */
  YYSYMBOL_CONST_LIST = 86,                /* CONST_LIST  */
  YYSYMBOL_MIXED_LIST = 87,                /* MIXED_LIST  */
  YYSYMBOL_CONST_LIST2 = 88,               /* CONST_LIST2  */
  YYSYMBOL_INT_LIST = 89,                  /* INT_LIST  */
  YYSYMBOL_FLOAT_LIST = 90,                /* FLOAT_LIST  */
  YYSYMBOL_CHAR_LIST = 91                  /* CHAR_LIST  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,     5,     3,    46,     4,     2,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    48,
       2,    49,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    44,    45,    47,    47,    47,    47,    49,
      50,    52,    53,    55,    57,    59,    60,    62,    63,    64,
      65,    67,    68,    69,    70,    70,    71,    71,    72,    72,
      73,    74,    74,    75,    76,    77,    79,    79,    81,    81,
      82,    82,    83,    83,    85,    85,    87,    91,    93,    99,
     105,   111,   117,   119,   120,   121,   122,   123,   125,   126,
     127,   128,   129,   130,   131,   132,   134,   135,   136,   137,
     138,   140,   141,   141,   141,   143,   144,   146,   147,   149,
     150,   151,   153,   154,   155,   157,   158,   159,   160,   161,
     162,   164,   165,   166,   167,   168,   170,   170,   170,   172,
     172,   172,   172,   174,   175,   177,   178,   180,   180,   182,
     182
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "'+'", "'-'", "'*'",
  "'/'", "ID", "INT_CONST", "FLOAT_CONST", "CHAR_CONST", "ARR", "ARR2",
  "ARR_E", "FUNC", "STRING", "INT", "FLOAT", "CHAR", "VOID", "IF", "ELSE",
  "WHILE", "FOR", "SWITCH", "CONTINUE", "BREAK", "RETURN", "PRINTF",
  "DEFAULT", "CASE", "GTR_EQ", "LESS_EQ", "NOT_EQ", "AND", "OR", "NOT",
  "EQ_EQ", "NEWLINE", "UNK", "END_OF_FILE", "COMP_OP", "'('", "')'", "'{'",
  "'}'", "','", "':'", "';'", "'='", "$accept", "S", "BEGIN", "TYPE",
  "FUNC_DECL", "PARA_LIST", "PARA", "SWITCH_STMT", "CASE_STMT",
  "STMT_LIST", "STMT", "$@1", "$@2", "$@3", "BRK_CNT", "FOR_STMT", "$@4",
  "$@5", "$@6", "WHILE_STMT", "$@7", "EXPR", "TERM", "FACTOR", "ASSGN",
  "DECL", "DECL_TAIL", "IF_STMT", "$@8", "$@9", "PRINT", "VAR_LIST",
  "RTRN_STMT", "CONST", "FUNC_CALL", "ARR_DECL", "CONST_LIST",
  "MIXED_LIST", "CONST_LIST2", "INT_LIST", "FLOAT_LIST", "CHAR_LIST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-109)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     138,  -109,  -109,  -109,  -109,    54,  -109,    16,   138,  -109,
      25,  -109,    -9,    91,    80,    87,  -109,   245,  -109,   101,
     138,    90,  -109,  -109,  -109,   109,   112,   128,   134,   137,
     139,     9,   146,   117,   245,  -109,    58,  -109,   144,   203,
     167,   171,   172,  -109,   -19,   169,  -109,   147,   148,  -109,
    -109,  -109,  -109,  -109,   245,  -109,    81,   117,   117,    43,
     187,  -109,  -109,   149,  -109,   150,   184,  -109,  -109,  -109,
      57,   155,    85,    27,    72,   153,  -109,  -109,  -109,   162,
    -109,   163,  -109,   164,  -109,   117,   141,   117,   117,   117,
     117,  -109,  -109,   158,   165,    33,    55,    56,   178,   168,
     186,   190,   191,  -109,  -109,    97,  -109,   203,   228,   100,
    -109,   192,  -109,   193,   194,    30,   117,   117,   169,   195,
    -109,   161,   161,  -109,  -109,  -109,    51,   141,   141,   141,
     170,  -109,   170,   198,   196,   200,   232,  -109,    95,  -109,
     199,    76,     4,   205,     4,   117,   228,   202,   210,    63,
     143,   117,   212,   223,  -109,  -109,  -109,  -109,  -109,  -109,
     152,  -109,   197,   225,   117,    73,   228,   229,   230,   231,
     233,  -109,  -109,  -109,     4,   234,   235,   -20,   117,   117,
     237,   238,  -109,   226,   236,   276,   240,   232,   242,   243,
     249,  -109,   278,   279,   284,   247,   251,   250,   252,   141,
      14,    15,   245,   245,  -109,   245,   254,  -109,  -109,  -109,
    -109,   255,  -109,  -109,  -109,  -109,   253,  -109,  -109,   259,
     141,   141,  -109,   260,  -109,   245,  -109,   205,   262,   261,
     264,   263,   221,   152,  -109,   245,   265,   266,  -109,   290,
    -109,  -109,   245,   245,   268,   269,  -109,  -109,  -109,  -109,
     270,   271,   245,  -109,  -109,   272,  -109
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     6,     7,     8,     0,     2,     0,     4,     1,
       0,     3,     0,     0,     0,     0,    12,    26,    13,     0,
       0,    54,    82,    83,    84,    56,    57,     0,     0,     0,
       0,     0,     0,     0,    26,    35,     0,    30,     0,    18,
       0,     0,     0,    24,    59,    47,    52,     0,     0,    21,
      22,    55,    23,    25,    26,    11,     0,     0,     0,     0,
       0,    36,    37,     0,    81,     0,     0,    54,    56,    57,
       0,     0,    69,     0,     0,     0,    66,    10,    17,     0,
      27,     0,    29,     0,    32,     0,     0,     0,     0,     0,
       0,    33,    34,     0,     0,    60,    63,    65,   101,     0,
     102,     0,     0,    79,    80,     0,    53,    19,     0,     0,
      91,     0,    94,     0,     0,     0,     0,     0,    46,    54,
      61,    48,    49,    50,    51,     9,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,    20,    69,    70,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,    62,    64,    99,   100,    88,
       0,    75,    77,     0,     0,     0,     0,   105,   107,   109,
       0,    96,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    26,    90,    26,     0,    14,    78,    76,
      86,     0,   106,   108,   110,    92,   103,    95,    93,     0,
       0,     0,    44,     0,    16,    26,    85,     0,     0,     0,
       0,     0,    71,     0,   104,    26,     0,     0,    45,     0,
      15,    42,    26,    26,     0,     0,    38,    40,    73,    43,
       0,     0,    26,    39,    41,     0,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,   289,     3,  -109,  -109,   293,  -109,    86,   -34,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,   -32,    75,  -109,   -84,   206,  -102,  -109,  -109,  -109,
    -109,   131,  -109,   -27,  -109,  -109,  -108,   -97,    93,   130,
     132,   129
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    36,     8,    15,    16,    37,   186,    38,
      39,    40,    41,    42,    43,    80,   250,   251,   245,    82,
     231,    44,    45,    46,    47,    48,    76,    84,   239,   252,
      49,   163,    50,    51,    52,    53,   170,   101,   175,   171,
     172,   173
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    70,   120,     7,    65,    78,   139,     1,     2,     3,
       4,     7,   167,   168,   169,    14,    63,    22,    23,    24,
      93,    85,    85,    14,    95,    96,    97,    86,   199,   153,
      10,   147,   100,   157,    13,   158,   176,   119,    22,    23,
      24,    25,    26,   154,   155,   156,     1,     2,     3,     4,
      98,    22,    23,    24,     9,    85,    85,    64,    98,    22,
      23,    24,   220,   221,   191,    72,   196,    12,   190,    73,
      74,    75,    33,   137,    85,   110,   111,   141,   145,   127,
      98,    22,    23,    24,   149,   150,    99,    18,    67,    22,
      23,    24,    68,    69,   152,    94,    85,    85,    85,   100,
     106,   128,   129,   100,    85,   100,   180,    67,    22,    23,
      24,    68,    69,   177,   140,   219,   189,    85,   146,    95,
     112,   113,   166,    33,    67,    22,    23,    24,    68,    69,
      19,   108,   141,    20,   109,    17,   229,   230,   100,    56,
     135,   108,    33,   136,   164,    54,   200,   201,   119,    22,
      23,    24,    25,    26,     1,     2,     3,     4,    57,    33,
     118,    58,   121,   122,   123,   124,    89,    90,   222,   223,
      59,   224,    87,    88,    89,    90,    60,    98,    22,    23,
      24,   184,   185,    33,    85,    61,   181,    62,    66,    77,
      79,   233,    83,    81,   102,    91,    92,   103,   104,   105,
     107,   241,   114,   125,   115,   116,   117,   126,   246,   247,
      21,    22,    23,    24,    25,    26,   131,    27,   255,     1,
       2,     3,     4,   -31,   130,   -28,   -26,    28,    29,    30,
      31,    32,   132,   133,   134,   138,   142,   143,   144,   162,
     160,   165,   -72,   187,   151,    33,   159,    34,   161,   174,
     178,    35,    21,    22,    23,    24,    25,    26,   179,    27,
     182,     1,     2,     3,     4,   -31,   183,   -28,   188,    28,
      29,    30,    31,    32,   204,   192,   193,   194,   195,   197,
     198,   202,   203,   205,   206,   207,   167,    33,   168,    34,
     209,   210,   211,    35,   169,   215,   216,    11,   217,   227,
     218,   225,   228,   226,   236,   232,   235,   237,   238,   242,
     243,   244,   248,    55,   249,   253,   254,   256,   208,   240,
     234,   148,   212,   214,     0,   213
};

static const yytype_int16 yycheck[] =
{
      34,    33,    86,     0,    31,    39,   108,    16,    17,    18,
      19,     8,     8,     9,    10,    12,     7,     8,     9,    10,
      54,    41,    41,    20,    56,    57,    58,    46,    48,   126,
      14,   115,    59,   130,    43,   132,   144,     7,     8,     9,
      10,    11,    12,   127,   128,   129,    16,    17,    18,    19,
       7,     8,     9,    10,     0,    41,    41,    48,     7,     8,
       9,    10,    48,    48,   166,     7,   174,    42,   165,    11,
      12,    13,    42,   107,    41,    48,    49,   109,    48,    46,
       7,     8,     9,    10,   116,   117,    43,     7,     7,     8,
       9,    10,    11,    12,    43,    14,    41,    41,    41,   126,
      43,    46,    46,   130,    41,   132,    43,     7,     8,     9,
      10,    11,    12,   145,    14,   199,    43,    41,   115,   151,
      48,    49,    46,    42,     7,     8,     9,    10,    11,    12,
      43,    46,   164,    46,    49,    44,   220,   221,   165,    49,
      43,    46,    42,    46,    49,    44,   178,   179,     7,     8,
       9,    10,    11,    12,    16,    17,    18,    19,    49,    42,
      85,    49,    87,    88,    89,    90,     5,     6,   202,   203,
      42,   205,     3,     4,     5,     6,    42,     7,     8,     9,
      10,    29,    30,    42,    41,    48,    43,    48,    42,    45,
      23,   225,    20,    22,     7,    48,    48,    48,    48,    15,
      45,   235,    49,    45,    42,    42,    42,    42,   242,   243,
       7,     8,     9,    10,    11,    12,    48,    14,   252,    16,
      17,    18,    19,    20,    46,    22,    23,    24,    25,    26,
      27,    28,    46,    43,    43,     7,    44,    44,    44,     7,
      44,    42,    21,    46,    49,    42,    48,    44,    48,    44,
      48,    48,     7,     8,     9,    10,    11,    12,    48,    14,
      48,    16,    17,    18,    19,    20,    43,    22,    43,    24,
      25,    26,    27,    28,    48,    46,    46,    46,    45,    45,
      45,    44,    44,    47,     8,    45,     8,    42,     9,    44,
      48,    48,    43,    48,    10,    48,    45,     8,    48,    46,
      48,    47,    43,    48,    43,    45,    44,    43,    45,    44,
      44,    21,    44,    20,    45,    45,    45,    45,   187,   233,
     227,   115,   192,   194,    -1,   193
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    16,    17,    18,    19,    51,    52,    53,    54,     0,
      14,    52,    42,    43,    53,    55,    56,    44,     7,    43,
      46,     7,     8,     9,    10,    11,    12,    14,    24,    25,
      26,    27,    28,    42,    44,    48,    53,    57,    59,    60,
      61,    62,    63,    64,    71,    72,    73,    74,    75,    80,
      82,    83,    84,    85,    44,    56,    49,    49,    49,    42,
      42,    48,    48,     7,    48,    83,    42,     7,    11,    12,
      71,    59,     7,    11,    12,    13,    76,    45,    59,    23,
      65,    22,    69,    20,    77,    41,    46,     3,     4,     5,
       6,    48,    48,    59,    14,    71,    71,    71,     7,    43,
      83,    87,     7,    48,    48,    15,    43,    45,    46,    49,
      48,    49,    48,    49,    49,    42,    42,    42,    72,     7,
      74,    72,    72,    72,    72,    45,    42,    46,    46,    46,
      46,    48,    46,    43,    43,    43,    46,    59,     7,    76,
      14,    71,    44,    44,    44,    48,    53,    74,    75,    71,
      71,    49,    43,    87,    74,    74,    74,    87,    87,    48,
      44,    48,     7,    81,    49,    42,    46,     8,     9,    10,
      86,    89,    90,    91,    44,    88,    86,    71,    48,    48,
      43,    43,    48,    43,    29,    30,    58,    46,    43,    43,
      87,    76,    46,    46,    46,    45,    86,    45,    45,    48,
      71,    71,    44,    44,    48,    47,     8,    45,    81,    48,
      48,    43,    89,    90,    91,    48,    45,    48,    48,    74,
      48,    48,    59,    59,    59,    47,    48,    46,    43,    74,
      74,    70,    45,    59,    88,    44,    43,    43,    45,    78,
      58,    59,    44,    44,    21,    68,    59,    59,    44,    45,
      66,    67,    79,    45,    45,    59,    45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    54,
      54,    55,    55,    56,    57,    58,    58,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    61,    60,    62,    60,
      60,    63,    60,    60,    60,    60,    64,    64,    66,    65,
      67,    65,    68,    65,    70,    69,    71,    71,    72,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    75,    76,    76,    76,
      76,    77,    78,    79,    77,    80,    80,    81,    81,    82,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    85,    85,    86,    86,    86,    87,
      87,    87,    87,    88,    88,    89,    89,    90,    90,    91,
      91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     8,
       7,     3,     1,     2,     7,     5,     3,     2,     1,     3,
       4,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       1,     0,     2,     2,     2,     1,     2,     2,     0,    12,
       0,    12,     0,    11,     0,     8,     3,     1,     3,     3,
       3,     3,     1,     3,     1,     1,     1,     1,     5,     1,
       3,     3,     5,     3,     5,     3,     2,     3,     5,     1,
       3,     7,     0,     0,    13,     5,     7,     1,     3,     3,
       3,     2,     1,     1,     1,     8,     7,     4,     5,     6,
       7,     3,     7,     7,     3,     7,     1,     1,     1,     3,
       3,     1,     1,     3,     5,     1,     3,     1,     3,     1,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* S: BEGIN  */
#line 42 "three.y"
          {printf("\nParse Successful!\n");}
#line 1481 "y.tab.c"
    break;

  case 3: /* BEGIN: FUNC_DECL BEGIN  */
#line 44 "three.y"
                        {}
#line 1487 "y.tab.c"
    break;

  case 4: /* BEGIN: FUNC_DECL  */
#line 45 "three.y"
                  {}
#line 1493 "y.tab.c"
    break;

  case 9: /* FUNC_DECL: TYPE FUNC '(' PARA_LIST ')' '{' STMT_LIST '}'  */
#line 49 "three.y"
                                                          {(yyval.lexeme)="";}
#line 1499 "y.tab.c"
    break;

  case 18: /* STMT_LIST: STMT  */
#line 63 "three.y"
                 {}
#line 1505 "y.tab.c"
    break;

  case 23: /* STMT: FUNC_CALL  */
#line 69 "three.y"
                 {}
#line 1511 "y.tab.c"
    break;

  case 26: /* $@1: %empty  */
#line 71 "three.y"
       {printf("\nL%d: \n", ++label);}
#line 1517 "y.tab.c"
    break;

  case 28: /* $@2: %empty  */
#line 72 "three.y"
       {printf("\nL%d: \n", ++label);}
#line 1523 "y.tab.c"
    break;

  case 31: /* $@3: %empty  */
#line 74 "three.y"
       {printf("\nL%d: \n", ++label);}
#line 1529 "y.tab.c"
    break;

  case 33: /* STMT: ASSGN ';'  */
#line 75 "three.y"
                 {}
#line 1535 "y.tab.c"
    break;

  case 34: /* STMT: DECL ';'  */
#line 76 "three.y"
                {}
#line 1541 "y.tab.c"
    break;

  case 38: /* $@4: %empty  */
#line 81 "three.y"
                                                              {printf("\niftrue %s goto L%d\n", (yyvsp[-5].lexeme), label);}
#line 1547 "y.tab.c"
    break;

  case 40: /* $@5: %empty  */
#line 82 "three.y"
                                                             {printf("\niftrue %s goto L%d\n", (yyvsp[-5].lexeme), label);}
#line 1553 "y.tab.c"
    break;

  case 42: /* $@6: %empty  */
#line 83 "three.y"
                                                        {printf("\niftrue %s goto L%d\n", (yyvsp[-5].lexeme), label);}
#line 1559 "y.tab.c"
    break;

  case 44: /* $@7: %empty  */
#line 85 "three.y"
                                              {printf("\niftrue %s goto L%d\n", (yyvsp[-3].lexeme), label);}
#line 1565 "y.tab.c"
    break;

  case 46: /* EXPR: EXPR COMP_OP TERM  */
#line 87 "three.y"
                         {int a = gencode((yyvsp[-2].lexeme), (yyvsp[-1].lexeme), (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;}
#line 1574 "y.tab.c"
    break;

  case 47: /* EXPR: TERM  */
#line 91 "three.y"
            {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1580 "y.tab.c"
    break;

  case 48: /* TERM: TERM '+' TERM  */
#line 93 "three.y"
                     {
                            int a = gencode((yyvsp[-2].lexeme), "+", (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;
                        }
#line 1591 "y.tab.c"
    break;

  case 49: /* TERM: TERM '-' TERM  */
#line 99 "three.y"
                     {
                            int a = gencode((yyvsp[-2].lexeme), "-", (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;
                        }
#line 1602 "y.tab.c"
    break;

  case 50: /* TERM: TERM '*' TERM  */
#line 105 "three.y"
                     {
                            int a = gencode((yyvsp[-2].lexeme), "*", (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;
                        }
#line 1613 "y.tab.c"
    break;

  case 51: /* TERM: TERM '/' TERM  */
#line 111 "three.y"
                     {
                            int a = gencode((yyvsp[-2].lexeme), "/", (yyvsp[0].lexeme));
                            char* tempVar = genTempVariable(a);
                            (yyval.lexeme) = tempVar;
                            tempVariable++;
                        }
#line 1624 "y.tab.c"
    break;

  case 52: /* TERM: FACTOR  */
#line 117 "three.y"
              {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1630 "y.tab.c"
    break;

  case 53: /* FACTOR: '(' EXPR ')'  */
#line 119 "three.y"
                      {(yyval.lexeme) = (yyvsp[-1].lexeme);}
#line 1636 "y.tab.c"
    break;

  case 54: /* FACTOR: ID  */
#line 120 "three.y"
             {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1642 "y.tab.c"
    break;

  case 55: /* FACTOR: CONST  */
#line 121 "three.y"
                {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1648 "y.tab.c"
    break;

  case 56: /* FACTOR: ARR  */
#line 122 "three.y"
              {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1654 "y.tab.c"
    break;

  case 57: /* FACTOR: ARR2  */
#line 123 "three.y"
               {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1660 "y.tab.c"
    break;

  case 58: /* ASSGN: ID '=' EXPR ',' ASSGN  */
#line 125 "three.y"
                              {assignment((yyvsp[-4].lexeme), (yyvsp[-2].lexeme));}
#line 1666 "y.tab.c"
    break;

  case 59: /* ASSGN: EXPR  */
#line 126 "three.y"
             {}
#line 1672 "y.tab.c"
    break;

  case 60: /* ASSGN: ID '=' EXPR  */
#line 127 "three.y"
                    {assignment((yyvsp[-2].lexeme), (yyvsp[0].lexeme));}
#line 1678 "y.tab.c"
    break;

  case 61: /* ASSGN: EXPR ',' ASSGN  */
#line 128 "three.y"
                       {}
#line 1684 "y.tab.c"
    break;

  case 62: /* ASSGN: ARR '=' EXPR ',' ASSGN  */
#line 129 "three.y"
                               {assignment((yyvsp[-4].lexeme), (yyvsp[-2].lexeme));}
#line 1690 "y.tab.c"
    break;

  case 63: /* ASSGN: ARR '=' EXPR  */
#line 130 "three.y"
                     {assignment((yyvsp[-2].lexeme), (yyvsp[0].lexeme));}
#line 1696 "y.tab.c"
    break;

  case 64: /* ASSGN: ARR2 '=' EXPR ',' ASSGN  */
#line 131 "three.y"
                                {assignment((yyvsp[-4].lexeme), (yyvsp[-2].lexeme));}
#line 1702 "y.tab.c"
    break;

  case 65: /* ASSGN: ARR2 '=' EXPR  */
#line 132 "three.y"
                      {assignment((yyvsp[-2].lexeme), (yyvsp[0].lexeme));}
#line 1708 "y.tab.c"
    break;

  case 66: /* DECL: TYPE DECL_TAIL  */
#line 134 "three.y"
                      {}
#line 1714 "y.tab.c"
    break;

  case 67: /* DECL_TAIL: ID '=' EXPR  */
#line 135 "three.y"
                        {assignment((yyvsp[-2].lexeme), (yyvsp[0].lexeme));}
#line 1720 "y.tab.c"
    break;

  case 68: /* DECL_TAIL: ID '=' EXPR ',' DECL_TAIL  */
#line 136 "three.y"
                                      {assignment((yyvsp[-4].lexeme), (yyvsp[-2].lexeme));}
#line 1726 "y.tab.c"
    break;

  case 69: /* DECL_TAIL: ID  */
#line 137 "three.y"
               {}
#line 1732 "y.tab.c"
    break;

  case 70: /* DECL_TAIL: ID ',' DECL_TAIL  */
#line 138 "three.y"
                             {}
#line 1738 "y.tab.c"
    break;

  case 71: /* IF_STMT: IF '(' EXPR ')' '{' STMT_LIST '}'  */
#line 140 "three.y"
                                            {printf("iftrue %s goto L%d\n", (yyvsp[-4].lexeme), label);}
#line 1744 "y.tab.c"
    break;

  case 72: /* $@8: %empty  */
#line 141 "three.y"
                                            {printf("iffalse %s goto L%d\n", (yyvsp[-4].lexeme), label+1);}
#line 1750 "y.tab.c"
    break;

  case 73: /* $@9: %empty  */
#line 141 "three.y"
                                                                                                     {printf("\nL%d: \n", ++label);}
#line 1756 "y.tab.c"
    break;

  case 82: /* CONST: INT_CONST  */
#line 153 "three.y"
                  {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1762 "y.tab.c"
    break;

  case 83: /* CONST: FLOAT_CONST  */
#line 154 "three.y"
                    {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1768 "y.tab.c"
    break;

  case 84: /* CONST: CHAR_CONST  */
#line 155 "three.y"
                   {(yyval.lexeme) = (yyvsp[0].lexeme);}
#line 1774 "y.tab.c"
    break;


#line 1778 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 184 "three.y"


void yyerror()
{
    /* printTable(); */
    printf("Syntax Error\n");
    exit(0);
}

int main()
{
    yyin = fopen("../input.txt","r");
    yyparse();
    /* printTable(); */
    return 0;
}
