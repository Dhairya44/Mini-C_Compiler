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
#line 1 "semanticAnalysis.y"

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

#line 86 "y.tab.c"

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
    ARR = 258,                     /* ARR  */
    ARR2 = 259,                    /* ARR2  */
    ARR_E = 260,                   /* ARR_E  */
    STRING = 261,                  /* STRING  */
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
    LESS = 284,                    /* LESS  */
    GTR = 285,                     /* GTR  */
    NEWLINE = 286,                 /* NEWLINE  */
    UNK = 287,                     /* UNK  */
    END_OF_FILE = 288,             /* END_OF_FILE  */
    ID = 289,                      /* ID  */
    INT_CONST = 290,               /* INT_CONST  */
    FLOAT_CONST = 291,             /* FLOAT_CONST  */
    CHAR_CONST = 292,              /* CHAR_CONST  */
    FUNC = 293                     /* FUNC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ARR 258
#define ARR2 259
#define ARR_E 260
#define STRING 261
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
#define LESS 284
#define GTR 285
#define NEWLINE 286
#define UNK 287
#define END_OF_FILE 288
#define ID 289
#define INT_CONST 290
#define FLOAT_CONST 291
#define CHAR_CONST 292
#define FUNC 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "semanticAnalysis.y"

    struct{
        char *lexeme;
        float val;
    }t;

#line 222 "y.tab.c"

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
  YYSYMBOL_ARR = 7,                        /* ARR  */
  YYSYMBOL_ARR2 = 8,                       /* ARR2  */
  YYSYMBOL_ARR_E = 9,                      /* ARR_E  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_INT = 11,                       /* INT  */
  YYSYMBOL_FLOAT = 12,                     /* FLOAT  */
  YYSYMBOL_CHAR = 13,                      /* CHAR  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_SWITCH = 19,                    /* SWITCH  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 21,                     /* BREAK  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_PRINTF = 23,                    /* PRINTF  */
  YYSYMBOL_DEFAULT = 24,                   /* DEFAULT  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_GTR_EQ = 26,                    /* GTR_EQ  */
  YYSYMBOL_LESS_EQ = 27,                   /* LESS_EQ  */
  YYSYMBOL_NOT_EQ = 28,                    /* NOT_EQ  */
  YYSYMBOL_AND = 29,                       /* AND  */
  YYSYMBOL_OR = 30,                        /* OR  */
  YYSYMBOL_NOT = 31,                       /* NOT  */
  YYSYMBOL_EQ_EQ = 32,                     /* EQ_EQ  */
  YYSYMBOL_LESS = 33,                      /* LESS  */
  YYSYMBOL_GTR = 34,                       /* GTR  */
  YYSYMBOL_NEWLINE = 35,                   /* NEWLINE  */
  YYSYMBOL_UNK = 36,                       /* UNK  */
  YYSYMBOL_END_OF_FILE = 37,               /* END_OF_FILE  */
  YYSYMBOL_ID = 38,                        /* ID  */
  YYSYMBOL_INT_CONST = 39,                 /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 40,               /* FLOAT_CONST  */
  YYSYMBOL_CHAR_CONST = 41,                /* CHAR_CONST  */
  YYSYMBOL_FUNC = 42,                      /* FUNC  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* '='  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_S = 51,                         /* S  */
  YYSYMBOL_BEGIN = 52,                     /* BEGIN  */
  YYSYMBOL_TYPE = 53,                      /* TYPE  */
  YYSYMBOL_FUNC_DECL = 54,                 /* FUNC_DECL  */
  YYSYMBOL_55_1 = 55,                      /* $@1  */
  YYSYMBOL_56_2 = 56,                      /* $@2  */
  YYSYMBOL_PARA_LIST = 57,                 /* PARA_LIST  */
  YYSYMBOL_STMT_LIST = 58,                 /* STMT_LIST  */
  YYSYMBOL_STMT = 59,                      /* STMT  */
  YYSYMBOL_BRK_CNT = 60,                   /* BRK_CNT  */
  YYSYMBOL_FOR_STMT = 61,                  /* FOR_STMT  */
  YYSYMBOL_WHILE_STMT = 62,                /* WHILE_STMT  */
  YYSYMBOL_EXPR = 63,                      /* EXPR  */
  YYSYMBOL_COMP_OP = 64,                   /* COMP_OP  */
  YYSYMBOL_TERM = 65,                      /* TERM  */
  YYSYMBOL_FACTOR = 66,                    /* FACTOR  */
  YYSYMBOL_ASSGN = 67,                     /* ASSGN  */
  YYSYMBOL_ASSGN_TAIL = 68,                /* ASSGN_TAIL  */
  YYSYMBOL_DECL = 69,                      /* DECL  */
  YYSYMBOL_DECL_TAIL = 70,                 /* DECL_TAIL  */
  YYSYMBOL_IF_STMT = 71,                   /* IF_STMT  */
  YYSYMBOL_MAT = 72,                       /* MAT  */
  YYSYMBOL_UNMAT = 73,                     /* UNMAT  */
  YYSYMBOL_PRINT = 74,                     /* PRINT  */
  YYSYMBOL_VAR_LIST = 75,                  /* VAR_LIST  */
  YYSYMBOL_RTRN_STMT = 76,                 /* RTRN_STMT  */
  YYSYMBOL_CONST = 77,                     /* CONST  */
  YYSYMBOL_FUNC_CALL = 78,                 /* FUNC_CALL  */
  YYSYMBOL_ARR_DECL = 79,                  /* ARR_DECL  */
  YYSYMBOL_CONST_LIST = 80,                /* CONST_LIST  */
  YYSYMBOL_MIXED_LIST = 81,                /* MIXED_LIST  */
  YYSYMBOL_CONST_LIST2 = 82,               /* CONST_LIST2  */
  YYSYMBOL_INT_LIST = 83,                  /* INT_LIST  */
  YYSYMBOL_FLOAT_LIST = 84,                /* FLOAT_LIST  */
  YYSYMBOL_CHAR_LIST = 85                  /* CHAR_LIST  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   299

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  229

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
      43,    44,     5,     3,    47,     4,     2,     6,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,    49,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    33,    34,    36,    37,    38,    39,    41,
      41,    42,    42,    44,    45,    47,    48,    49,    50,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      54,    56,    56,    58,    59,    60,    62,    64,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    75,    76,
      77,    78,    80,    81,    99,   104,   105,   105,   108,   109,
     111,   112,   113,   115,   115,   117,   119,   121,   122,   124,
     125,   127,   128,   129,   131,   132,   133,   135,   155,   169,
     170,   189,   190,   191,   192,   193,   195,   195,   195,   197,
     198,   199,   200,   202,   203,   205,   205,   207,   207,   209,
     209
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
  "'/'", "ARR", "ARR2", "ARR_E", "STRING", "INT", "FLOAT", "CHAR", "VOID",
  "IF", "ELSE", "WHILE", "FOR", "SWITCH", "CONTINUE", "BREAK", "RETURN",
  "PRINTF", "DEFAULT", "CASE", "GTR_EQ", "LESS_EQ", "NOT_EQ", "AND", "OR",
  "NOT", "EQ_EQ", "LESS", "GTR", "NEWLINE", "UNK", "END_OF_FILE", "ID",
  "INT_CONST", "FLOAT_CONST", "CHAR_CONST", "FUNC", "'('", "')'", "'{'",
  "'}'", "','", "';'", "'='", "$accept", "S", "BEGIN", "TYPE", "FUNC_DECL",
  "$@1", "$@2", "PARA_LIST", "STMT_LIST", "STMT", "BRK_CNT", "FOR_STMT",
  "WHILE_STMT", "EXPR", "COMP_OP", "TERM", "FACTOR", "ASSGN", "ASSGN_TAIL",
  "DECL", "DECL_TAIL", "IF_STMT", "MAT", "UNMAT", "PRINT", "VAR_LIST",
  "RTRN_STMT", "CONST", "FUNC_CALL", "ARR_DECL", "CONST_LIST",
  "MIXED_LIST", "CONST_LIST2", "INT_LIST", "FLOAT_LIST", "CHAR_LIST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     205,  -141,  -141,  -141,  -141,     8,  -141,   -26,   205,  -141,
     -20,  -141,   205,   -10,     5,    15,  -141,    24,   205,    50,
      18,    61,    43,    64,    71,    74,    94,   100,    82,   109,
     118,  -141,  -141,  -141,   129,   172,    18,  -141,    12,   128,
      18,  -141,  -141,  -141,   168,   217,  -141,   125,   142,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,    18,   172,
     172,    -1,  -141,  -141,   151,  -141,   184,   204,   172,     4,
    -141,   127,   187,    86,   102,   185,    42,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,   172,   172,   172,
     172,   172,  -141,  -141,   189,   136,   159,   118,   172,   198,
     190,   191,  -141,  -141,    21,    99,   193,   194,   196,   197,
    -141,    18,  -141,   192,  -141,   199,   200,   208,   166,  -141,
     217,  -141,  -141,  -141,  -141,  -141,   202,   203,    44,    46,
     172,   172,   201,   212,   213,  -141,   186,  -141,   186,   206,
    -141,    14,   207,    14,    51,   210,   111,    18,    18,   218,
     172,    53,    76,  -141,   211,   215,   214,  -141,  -141,  -141,
     219,   220,   221,   209,  -141,  -141,  -141,    14,   216,   223,
     172,  -141,   138,  -141,   224,   225,   228,   218,   218,   212,
     226,   172,   222,   233,   234,   229,   230,   231,   232,   111,
     235,   237,   241,  -141,   239,   238,   242,  -141,  -141,    99,
    -141,  -141,  -141,  -141,   240,  -141,  -141,  -141,  -141,   243,
     244,    18,   245,   247,  -141,   207,  -141,    18,   248,    18,
      18,  -141,   249,  -141,   250,   251,  -141,  -141,  -141
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     6,     7,     8,     0,     2,     0,     4,     1,
       0,     3,    11,     0,     0,     9,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    74,    75,    76,     0,     0,     0,    30,     0,     0,
      16,    22,    24,    26,    25,    38,    51,     0,     0,    27,
      63,    64,    19,    20,    54,    21,    23,    13,     0,     0,
       0,     0,    31,    32,     0,    73,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,    62,    12,    15,    41,
      42,    43,    44,    45,    46,    39,    40,     0,     0,     0,
       0,     0,    28,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,     0,    57,    91,     0,    92,     0,
      52,    17,    81,     0,    84,     0,     0,     0,     0,    59,
      37,    47,    48,    49,    50,    10,     0,     0,     0,    62,
       0,     0,     0,     0,     0,    55,     0,    79,     0,     0,
      18,     0,     0,     0,    62,     0,    62,     0,     0,     0,
       0,     0,     0,    67,    69,     0,     0,    89,    90,    80,
      95,    97,    99,     0,    86,    87,    88,     0,     0,     0,
       0,    60,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,    65,    36,     0,     0,     0,    70,    68,    57,
      96,    98,   100,    82,    93,    85,    83,    61,    78,     0,
       0,     0,     0,     0,    56,     0,    77,     0,     0,     0,
       0,    94,     0,    35,     0,     0,    66,    33,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,   252,     6,  -141,  -141,  -141,  -141,   -36,  -141,
    -141,  -141,  -141,   -34,  -141,   177,   140,   -59,    66,   227,
    -137,  -141,  -141,  -141,  -141,   106,  -141,   -23,  -141,  -141,
    -140,  -121,    63,   116,   110,   115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    38,     8,    19,    14,    15,    39,    40,
      41,    42,    43,    44,    87,    45,    46,    47,   135,    48,
     119,    49,    50,    51,    52,   155,    53,    54,    55,    56,
     163,   109,   168,   164,   165,   166
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      72,    71,   100,   169,    78,    66,     7,   171,     9,   173,
       1,     2,     3,     4,     7,   157,    10,   158,    13,    73,
      74,    75,    94,    12,    21,    95,    96,   186,    16,     1,
       2,     3,     4,    23,   105,    24,    25,    97,    26,    27,
      28,    29,   106,    31,    32,    33,   108,    98,   107,    17,
      76,   191,   207,   160,   161,   162,    30,    31,    32,    33,
      34,    35,    18,    36,   128,   132,    37,    99,   133,    20,
      79,    80,    81,    82,    83,   140,    84,    85,    86,    79,
      80,    81,    82,    83,   146,    84,    85,    86,    58,   117,
     176,   118,   149,   117,    22,   150,   151,   152,   117,    57,
     170,   177,    79,    80,    81,    82,    83,    59,    84,    85,
      86,   174,   175,   108,    60,   108,   146,    61,   195,   196,
      64,    31,    32,    33,   178,    79,    80,    81,    82,    83,
      65,    84,    85,    86,   112,   113,   189,    79,    80,    81,
      82,    83,    62,    84,    85,    86,   134,   199,    63,   108,
     114,   115,    67,    79,    80,    81,    82,    83,   117,    84,
      85,    86,    79,    80,    81,    82,    83,    68,    84,    85,
      86,   110,    69,    92,    77,   218,   106,    31,    32,    33,
     126,   222,   190,   224,   225,    79,    80,    81,    82,    83,
      93,    84,    85,    86,    79,    80,    81,    82,    83,   102,
      84,    85,    86,   127,    70,    31,    32,    33,   145,    35,
      70,    31,    32,    33,   104,    35,     1,     2,     3,     4,
      88,    89,    90,    91,   106,    31,    32,    33,   121,   122,
     123,   124,   103,   111,   116,   125,   129,   141,   130,   131,
     136,   139,   137,   138,   142,   143,   144,   147,   148,   153,
     154,   156,   167,   172,   159,   185,    97,   210,   179,   180,
      11,   160,   187,   181,   120,   214,   182,   183,   184,   188,
     192,   193,   194,   161,   198,   162,   204,   203,   221,   205,
     206,   209,   212,   208,   211,   197,   213,   215,   101,   217,
     219,   216,   220,   201,   223,   226,   227,   228,   200,   202
};

static const yytype_uint8 yycheck[] =
{
      36,    35,    61,   143,    40,    28,     0,   144,     0,   146,
      11,    12,    13,    14,     8,   136,    42,   138,    12,     7,
       8,     9,    58,    43,    18,    59,    60,   167,    38,    11,
      12,    13,    14,    15,    68,    17,    18,    38,    20,    21,
      22,    23,    38,    39,    40,    41,    69,    48,    44,    44,
      38,   172,   189,    39,    40,    41,    38,    39,    40,    41,
      42,    43,    47,    45,    98,    44,    48,    61,    47,    45,
      26,    27,    28,    29,    30,   111,    32,    33,    34,    26,
      27,    28,    29,    30,   118,    32,    33,    34,    45,    47,
     149,    49,    48,    47,    44,    49,   130,   131,    47,    38,
      49,    48,    26,    27,    28,    29,    30,    43,    32,    33,
      34,   147,   148,   136,    43,   138,   150,    43,   177,   178,
      38,    39,    40,    41,    48,    26,    27,    28,    29,    30,
      48,    32,    33,    34,    48,    49,   170,    26,    27,    28,
      29,    30,    48,    32,    33,    34,    47,   181,    48,   172,
      48,    49,    43,    26,    27,    28,    29,    30,    47,    32,
      33,    34,    26,    27,    28,    29,    30,    49,    32,    33,
      34,    44,    43,    48,    46,   211,    38,    39,    40,    41,
      44,   217,    44,   219,   220,    26,    27,    28,    29,    30,
      48,    32,    33,    34,    26,    27,    28,    29,    30,    48,
      32,    33,    34,    44,    38,    39,    40,    41,    42,    43,
      38,    39,    40,    41,    10,    43,    11,    12,    13,    14,
       3,     4,     5,     6,    38,    39,    40,    41,    88,    89,
      90,    91,    48,    46,    49,    46,    38,    45,    48,    48,
      47,    44,    48,    47,    45,    45,    38,    45,    45,    48,
      38,    38,    45,    43,    48,    46,    38,    16,    47,    44,
       8,    39,    46,    49,    87,   199,    47,    47,    47,    46,
      46,    46,    44,    40,    48,    41,    46,    48,   215,    48,
      48,    44,    44,    48,    45,   179,    44,    47,    61,    45,
      45,    48,    45,   183,    46,    46,    46,    46,   182,   184
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    12,    13,    14,    51,    52,    53,    54,     0,
      42,    52,    43,    53,    56,    57,    38,    44,    47,    55,
      45,    53,    44,    15,    17,    18,    20,    21,    22,    23,
      38,    39,    40,    41,    42,    43,    45,    48,    53,    58,
      59,    60,    61,    62,    63,    65,    66,    67,    69,    71,
      72,    73,    74,    76,    77,    78,    79,    38,    45,    43,
      43,    43,    48,    48,    38,    48,    77,    43,    49,    43,
      38,    63,    58,     7,     8,     9,    38,    46,    58,    26,
      27,    28,    29,    30,    32,    33,    34,    64,     3,     4,
       5,     6,    48,    48,    58,    63,    63,    38,    48,    53,
      67,    69,    48,    48,    10,    63,    38,    44,    77,    81,
      44,    46,    48,    49,    48,    49,    49,    47,    49,    70,
      65,    66,    66,    66,    66,    46,    44,    44,    63,    38,
      48,    48,    44,    47,    47,    68,    47,    48,    47,    44,
      58,    45,    45,    45,    38,    42,    63,    45,    45,    48,
      49,    63,    63,    48,    38,    75,    38,    81,    81,    48,
      39,    40,    41,    80,    83,    84,    85,    45,    82,    80,
      49,    70,    43,    70,    58,    58,    67,    48,    48,    47,
      44,    49,    47,    47,    47,    46,    80,    46,    46,    63,
      44,    81,    46,    46,    44,    67,    67,    75,    48,    63,
      83,    84,    85,    48,    46,    48,    48,    70,    48,    44,
      16,    45,    44,    44,    68,    47,    48,    45,    58,    45,
      45,    82,    58,    46,    58,    58,    46,    46,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    55,
      54,    56,    54,    57,    57,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    61,    61,    61,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    65,
      65,    65,    66,    66,    66,    67,    68,    68,    69,    69,
      70,    70,    70,    71,    71,    72,    73,    74,    74,    75,
      75,    76,    76,    76,    77,    77,    77,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    80,    80,    80,    81,
      81,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     0,
       9,     0,     8,     4,     2,     2,     1,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     2,    11,    11,    10,     7,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     1,     3,     1,     1,     4,     5,     0,     5,     3,
       3,     5,     0,     1,     1,     7,    11,     5,     7,     1,
       3,     3,     3,     2,     1,     1,     1,     8,     7,     4,
       5,     3,     7,     7,     3,     7,     1,     1,     1,     3,
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
#line 31 "semanticAnalysis.y"
          {print_Id_Table(); id_count = 0; printf("DONE!\n");}
#line 1446 "y.tab.c"
    break;

  case 3: /* BEGIN: FUNC_DECL BEGIN  */
#line 33 "semanticAnalysis.y"
                        {}
#line 1452 "y.tab.c"
    break;

  case 4: /* BEGIN: FUNC_DECL  */
#line 34 "semanticAnalysis.y"
                  {}
#line 1458 "y.tab.c"
    break;

  case 5: /* TYPE: INT  */
#line 36 "semanticAnalysis.y"
           {(yyval.t).lexeme = "INT";}
#line 1464 "y.tab.c"
    break;

  case 6: /* TYPE: FLOAT  */
#line 37 "semanticAnalysis.y"
             {(yyval.t).lexeme = "FLOAT";}
#line 1470 "y.tab.c"
    break;

  case 7: /* TYPE: CHAR  */
#line 38 "semanticAnalysis.y"
            {(yyval.t).lexeme = "CHAR";}
#line 1476 "y.tab.c"
    break;

  case 8: /* TYPE: VOID  */
#line 39 "semanticAnalysis.y"
            {(yyval.t).lexeme = "VOID";}
#line 1482 "y.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 41 "semanticAnalysis.y"
                                    {insertFunc((yyvsp[-2].t).lexeme,(yyvsp[-3].t).lexeme); updateFunc((int)(yyvsp[0].t).val, dec); decCounter = 0;}
#line 1488 "y.tab.c"
    break;

  case 10: /* FUNC_DECL: TYPE FUNC '(' PARA_LIST $@1 ')' '{' STMT_LIST '}'  */
#line 41 "semanticAnalysis.y"
                                                                                                                                           {print_Id_Table(); id_count = 0;}
#line 1494 "y.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 42 "semanticAnalysis.y"
                          {insertFunc((yyvsp[-1].t).lexeme,(yyvsp[-2].t).lexeme);}
#line 1500 "y.tab.c"
    break;

  case 13: /* PARA_LIST: PARA_LIST ',' TYPE ID  */
#line 44 "semanticAnalysis.y"
                                  {(yyval.t).val = (yyvsp[-3].t).val + 1; insertID((yyvsp[0].t).lexeme, (yyvsp[-1].t).lexeme); dec[decCounter].type = (yyvsp[-1].t).lexeme; dec[decCounter].name = (yyvsp[0].t).lexeme; decCounter++;}
#line 1506 "y.tab.c"
    break;

  case 14: /* PARA_LIST: TYPE ID  */
#line 45 "semanticAnalysis.y"
                    {(yyval.t).val = 1; insertID((yyvsp[0].t).lexeme, (yyvsp[-1].t).lexeme); dec[decCounter].type = (yyvsp[-1].t).lexeme; dec[decCounter].name = (yyvsp[0].t).lexeme; decCounter++;}
#line 1512 "y.tab.c"
    break;

  case 37: /* EXPR: EXPR COMP_OP TERM  */
#line 64 "semanticAnalysis.y"
                         {if(strcmp((yyvsp[-2].t).lexeme, (yyvsp[0].t).lexeme)!=0){
                                print_Id_Table();
                                printf("ERROR: Type mismatch for expression\n");
                                exit(0);
                            }
                            (yyval.t).lexeme = (yyvsp[-2].t).lexeme;
                            (yyval.t).val = (float)comparator((yyvsp[-2].t).val,(yyvsp[0].t).val,(yyvsp[-1].t).lexeme);
                         }
#line 1525 "y.tab.c"
    break;

  case 38: /* EXPR: TERM  */
#line 72 "semanticAnalysis.y"
            {(yyval.t).lexeme = (yyvsp[0].t).lexeme; (yyval.t).val = (yyvsp[0].t).val;}
#line 1531 "y.tab.c"
    break;

  case 39: /* COMP_OP: LESS  */
#line 73 "semanticAnalysis.y"
               {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1537 "y.tab.c"
    break;

  case 40: /* COMP_OP: GTR  */
#line 73 "semanticAnalysis.y"
                                              {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1543 "y.tab.c"
    break;

  case 41: /* COMP_OP: GTR_EQ  */
#line 73 "semanticAnalysis.y"
                                                                                {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1549 "y.tab.c"
    break;

  case 42: /* COMP_OP: LESS_EQ  */
#line 73 "semanticAnalysis.y"
                                                                                                                   {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1555 "y.tab.c"
    break;

  case 43: /* COMP_OP: NOT_EQ  */
#line 73 "semanticAnalysis.y"
                                                                                                                                                     {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1561 "y.tab.c"
    break;

  case 44: /* COMP_OP: AND  */
#line 73 "semanticAnalysis.y"
                                                                                                                                                                                    {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1567 "y.tab.c"
    break;

  case 45: /* COMP_OP: OR  */
#line 73 "semanticAnalysis.y"
                                                                                                                                                                                                                  {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1573 "y.tab.c"
    break;

  case 46: /* COMP_OP: EQ_EQ  */
#line 73 "semanticAnalysis.y"
                                                                                                                                                                                                                                                   {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1579 "y.tab.c"
    break;

  case 47: /* TERM: TERM '+' FACTOR  */
#line 74 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val + (yyvsp[0].t).val;}
#line 1585 "y.tab.c"
    break;

  case 48: /* TERM: TERM '-' FACTOR  */
#line 75 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val - (yyvsp[0].t).val;}
#line 1591 "y.tab.c"
    break;

  case 49: /* TERM: TERM '*' FACTOR  */
#line 76 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val * (yyvsp[0].t).val;}
#line 1597 "y.tab.c"
    break;

  case 50: /* TERM: TERM '/' FACTOR  */
#line 77 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val / (yyvsp[0].t).val;}
#line 1603 "y.tab.c"
    break;

  case 51: /* TERM: FACTOR  */
#line 78 "semanticAnalysis.y"
              {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1609 "y.tab.c"
    break;

  case 52: /* FACTOR: '(' EXPR ')'  */
#line 80 "semanticAnalysis.y"
                      {(yyval.t).lexeme = (yyvsp[-1].t).lexeme; (yyval.t).val = (yyvsp[-1].t).val;}
#line 1615 "y.tab.c"
    break;

  case 53: /* FACTOR: ID  */
#line 81 "semanticAnalysis.y"
            {bool found = true;
             for(int i = 0; i<id_count; i++){
                if(strcmp(id_table[i].name,(yyvsp[0].t).lexeme)==0){
                    found = false;
                    (yyval.t).lexeme = id_table[i].type;
                    (yyval.t).val = id_table[i].val;
                    break;
                }
             }
                if(found){
                    printf("ERROR: Undeclared variable %s\n", (yyvsp[0].t).lexeme);
                    exit(0);
                }
             if(strcmp((yyval.t).lexeme, "CHAR") == 0){
                printf("ERROR: Arithmetic/Logical operation on character variable %s\n", (yyvsp[0].t).lexeme);
                exit(0);
             }
            }
#line 1638 "y.tab.c"
    break;

  case 54: /* FACTOR: CONST  */
#line 99 "semanticAnalysis.y"
               {if(!strcmp((yyvsp[0].t).lexeme,"CHAR")){
                    printf("ERROR: Arithmetic/Logical operation on character %c\n", (int)(yyvsp[0].t).val + 'a');
                    exit(0);
                }; (yyval.t).lexeme = (yyvsp[0].t).lexeme; (yyval.t).val = (yyvsp[0].t).val;}
#line 1647 "y.tab.c"
    break;

  case 55: /* ASSGN: ID '=' EXPR ASSGN_TAIL  */
#line 104 "semanticAnalysis.y"
                               {typeCheck((yyvsp[-3].t).lexeme,(yyvsp[-1].t).lexeme); updateID((yyvsp[-3].t).lexeme,(yyvsp[-1].t).val);}
#line 1653 "y.tab.c"
    break;

  case 56: /* ASSGN_TAIL: ',' ID '=' EXPR ASSGN_TAIL  */
#line 105 "semanticAnalysis.y"
                                        {typeCheck((yyvsp[-3].t).lexeme,(yyvsp[-1].t).lexeme); updateID((yyvsp[-3].t).lexeme,(yyvsp[-1].t).val);}
#line 1659 "y.tab.c"
    break;

  case 58: /* DECL: TYPE ID '=' EXPR DECL_TAIL  */
#line 108 "semanticAnalysis.y"
                                  {(yyval.t).lexeme = (yyvsp[-4].t).lexeme; dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-3].t).lexeme; dec[decCounter].val = (yyvsp[-1].t).val; dec[decCounter].type = (yyvsp[-1].t).lexeme; decCounter++;insertEntry((yyvsp[-4].t).lexeme);}
#line 1665 "y.tab.c"
    break;

  case 59: /* DECL: TYPE ID DECL_TAIL  */
#line 109 "semanticAnalysis.y"
                         {(yyval.t).lexeme = (yyvsp[-2].t).lexeme; dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-1].t).lexeme; dec[decCounter].val = INT_MIN; decCounter++;insertEntry((yyvsp[-2].t).lexeme);}
#line 1671 "y.tab.c"
    break;

  case 60: /* DECL_TAIL: ',' ID DECL_TAIL  */
#line 111 "semanticAnalysis.y"
                             {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-1].t).lexeme; dec[decCounter].val = INT_MIN; decCounter++;}
#line 1677 "y.tab.c"
    break;

  case 61: /* DECL_TAIL: ',' ID '=' EXPR DECL_TAIL  */
#line 112 "semanticAnalysis.y"
                                      {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-3].t).lexeme; dec[decCounter].val = (yyvsp[-1].t).val;dec[decCounter].type = (yyvsp[-1].t).lexeme; decCounter++;}
#line 1683 "y.tab.c"
    break;

  case 74: /* CONST: INT_CONST  */
#line 131 "semanticAnalysis.y"
                  {(yyval.t).val = (yyvsp[0].t).val;(yyval.t).lexeme = "INT";}
#line 1689 "y.tab.c"
    break;

  case 75: /* CONST: FLOAT_CONST  */
#line 132 "semanticAnalysis.y"
                    {(yyval.t).val = (yyvsp[0].t).val;(yyval.t).lexeme = "FLOAT";}
#line 1695 "y.tab.c"
    break;

  case 76: /* CONST: CHAR_CONST  */
#line 133 "semanticAnalysis.y"
                   {(yyval.t).val = (yyvsp[0].t).val;(yyval.t).lexeme = "CHAR";}
#line 1701 "y.tab.c"
    break;

  case 77: /* FUNC_CALL: TYPE ID '=' FUNC '(' MIXED_LIST ')' ';'  */
#line 135 "semanticAnalysis.y"
                                                    {if(strcmp((yyvsp[-7].t).lexeme, findFunc((yyvsp[-4].t).lexeme))!=0){
                                                            printf("ERROR: Type mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                            exit(0);
                                                        }
                                                        for(int i = 0; i<func_count; i++){
                                                            if(strcmp(func_table[i].name,(yyvsp[-4].t).lexeme)==0){
                                                                if(func_table[i].para != list_c){
                                                                    printf("ERROR: Number of arguments mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                                    exit(0);
                                                                }
                                                                for(int j = 0; j<list_c; j++){
                                                                    if(strcmp(func_table[i].paraType[j],listType[j])!=0){
                                                                        printf("ERROR: Type mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                                        exit(0);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        list_c = 0;
                                                    }
#line 1726 "y.tab.c"
    break;

  case 78: /* FUNC_CALL: TYPE ID '=' FUNC '(' ')' ';'  */
#line 155 "semanticAnalysis.y"
                                         {if(strcmp((yyvsp[-6].t).lexeme, findFunc((yyvsp[-3].t).lexeme))!=0){
                                                printf("ERROR: Type mismatch for function %s\n", (yyvsp[-3].t).lexeme);
                                                exit(0);
                                            }
                                            for(int i = 0; i<func_count; i++){
                                                if(strcmp(func_table[i].name,(yyvsp[-3].t).lexeme)==0){
                                                    if(func_table[i].para != list_c){
                                                        printf("ERROR: Number of arguments mismatch for function %s\n", (yyvsp[-3].t).lexeme);
                                                        exit(0);
                                                    }
                                                }
                                            }
                                            insertID((yyvsp[-5].t).lexeme, (yyvsp[-6].t).lexeme);
                                            }
#line 1745 "y.tab.c"
    break;

  case 79: /* FUNC_CALL: FUNC '(' ')' ';'  */
#line 169 "semanticAnalysis.y"
                                        {findFunc((yyvsp[-3].t).lexeme);}
#line 1751 "y.tab.c"
    break;

  case 80: /* FUNC_CALL: FUNC '(' MIXED_LIST ')' ';'  */
#line 170 "semanticAnalysis.y"
                                        {findFunc((yyvsp[-4].t).lexeme); 
                                        for(int i = 0; i<func_count; i++){
                                            if(strcmp(func_table[i].name,(yyvsp[-4].t).lexeme)==0){
                                                if(func_table[i].para != list_c){
                                                    printf("ERROR: Number of arguments mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                    exit(0);
                                                }
                                                for(int j = 0; j<list_c; j++){
                                                    if(strcmp(func_table[i].paraType[j],listType[j])!=0){
                                                        printf("ERROR: Type mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                        exit(0);
                                                    }
                                                }
                                            }
                                        }list_c = 0;}
#line 1771 "y.tab.c"
    break;

  case 89: /* MIXED_LIST: ID ',' MIXED_LIST  */
#line 197 "semanticAnalysis.y"
                               {listType[list_c] = findIdType((yyvsp[-2].t).lexeme); list_c++;}
#line 1777 "y.tab.c"
    break;

  case 90: /* MIXED_LIST: CONST ',' MIXED_LIST  */
#line 198 "semanticAnalysis.y"
                                   {listType[list_c] = (yyvsp[-2].t).lexeme; list_c++;}
#line 1783 "y.tab.c"
    break;

  case 91: /* MIXED_LIST: ID  */
#line 199 "semanticAnalysis.y"
                 {listType[list_c] = findIdType((yyvsp[0].t).lexeme); list_c++;}
#line 1789 "y.tab.c"
    break;

  case 92: /* MIXED_LIST: CONST  */
#line 200 "semanticAnalysis.y"
                    {listType[list_c] = (yyvsp[0].t).lexeme; list_c++;}
#line 1795 "y.tab.c"
    break;


#line 1799 "y.tab.c"

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

#line 211 "semanticAnalysis.y"


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
