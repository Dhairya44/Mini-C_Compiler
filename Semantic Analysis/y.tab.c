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
    int scopeCounter = 0;
    int list_c = 0;
    char *listType[100];
    char *returnType_func  = "VOID";

#line 88 "y.tab.c"

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

#line 224 "y.tab.c"

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
  YYSYMBOL_ARR2 = 7,                       /* ARR2  */
  YYSYMBOL_ARR_E = 8,                      /* ARR_E  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_CHAR = 11,                      /* CHAR  */
  YYSYMBOL_VOID = 12,                      /* VOID  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_SWITCH = 17,                    /* SWITCH  */
  YYSYMBOL_CONTINUE = 18,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_PRINTF = 21,                    /* PRINTF  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_GTR_EQ = 24,                    /* GTR_EQ  */
  YYSYMBOL_LESS_EQ = 25,                   /* LESS_EQ  */
  YYSYMBOL_NOT_EQ = 26,                    /* NOT_EQ  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_NOT = 29,                       /* NOT  */
  YYSYMBOL_EQ_EQ = 30,                     /* EQ_EQ  */
  YYSYMBOL_LESS = 31,                      /* LESS  */
  YYSYMBOL_GTR = 32,                       /* GTR  */
  YYSYMBOL_NEWLINE = 33,                   /* NEWLINE  */
  YYSYMBOL_UNK = 34,                       /* UNK  */
  YYSYMBOL_END_OF_FILE = 35,               /* END_OF_FILE  */
  YYSYMBOL_ID = 36,                        /* ID  */
  YYSYMBOL_INT_CONST = 37,                 /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 38,               /* FLOAT_CONST  */
  YYSYMBOL_CHAR_CONST = 39,                /* CHAR_CONST  */
  YYSYMBOL_FUNC = 40,                      /* FUNC  */
  YYSYMBOL_STRING = 41,                    /* STRING  */
  YYSYMBOL_ARR = 42,                       /* ARR  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* ';'  */
  YYSYMBOL_49_ = 49,                       /* ':'  */
  YYSYMBOL_50_ = 50,                       /* '='  */
  YYSYMBOL_51_ = 51,                       /* '['  */
  YYSYMBOL_52_ = 52,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_S = 54,                         /* S  */
  YYSYMBOL_BEGIN = 55,                     /* BEGIN  */
  YYSYMBOL_TYPE = 56,                      /* TYPE  */
  YYSYMBOL_FUNC_DECL = 57,                 /* FUNC_DECL  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_59_2 = 59,                      /* $@2  */
  YYSYMBOL_PARA_LIST = 60,                 /* PARA_LIST  */
  YYSYMBOL_STMT_LIST = 61,                 /* STMT_LIST  */
  YYSYMBOL_STMT = 62,                      /* STMT  */
  YYSYMBOL_SWITCH_STMT = 63,               /* SWITCH_STMT  */
  YYSYMBOL_CASE_STMT = 64,                 /* CASE_STMT  */
  YYSYMBOL_BRK_CNT = 65,                   /* BRK_CNT  */
  YYSYMBOL_FOR_STMT = 66,                  /* FOR_STMT  */
  YYSYMBOL_WHILE_STMT = 67,                /* WHILE_STMT  */
  YYSYMBOL_EXPR = 68,                      /* EXPR  */
  YYSYMBOL_COMP_OP = 69,                   /* COMP_OP  */
  YYSYMBOL_TERM = 70,                      /* TERM  */
  YYSYMBOL_FACTOR = 71,                    /* FACTOR  */
  YYSYMBOL_ASSGN = 72,                     /* ASSGN  */
  YYSYMBOL_DECL = 73,                      /* DECL  */
  YYSYMBOL_DECL_TAIL = 74,                 /* DECL_TAIL  */
  YYSYMBOL_IF_STMT = 75,                   /* IF_STMT  */
  YYSYMBOL_PRINT = 76,                     /* PRINT  */
  YYSYMBOL_VAR_LIST = 77,                  /* VAR_LIST  */
  YYSYMBOL_RTRN_STMT = 78,                 /* RTRN_STMT  */
  YYSYMBOL_CONST = 79,                     /* CONST  */
  YYSYMBOL_FUNC_CALL = 80,                 /* FUNC_CALL  */
  YYSYMBOL_ARR_DECL = 81,                  /* ARR_DECL  */
  YYSYMBOL_MIXED_LIST = 82                 /* MIXED_LIST  */
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
#define YYLAST   361

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  240

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
       2,     2,     2,     2,     2,     2,     2,     2,    49,    48,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
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
static const yytype_int16 yyrline[] =
{
       0,    33,    33,    35,    36,    38,    39,    40,    41,    43,
      43,    44,    44,    46,    47,    49,    50,    51,    52,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    55,    56,
      57,    59,    61,    62,    64,    64,    66,    67,    68,    70,
      72,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    83,    84,    85,    86,    88,    89,   103,   108,   109,
     110,   111,   112,   113,   114,   115,   117,   118,   119,   120,
     121,   131,   132,   134,   135,   173,   174,   176,   177,   178,
     180,   181,   182,   183,   184,   186,   206,   220,   221,   237,
     250,   265,   268,   273,   274,   275,   276
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
  "'/'", "ARR2", "ARR_E", "INT", "FLOAT", "CHAR", "VOID", "IF", "ELSE",
  "WHILE", "FOR", "SWITCH", "CONTINUE", "BREAK", "RETURN", "PRINTF",
  "DEFAULT", "CASE", "GTR_EQ", "LESS_EQ", "NOT_EQ", "AND", "OR", "NOT",
  "EQ_EQ", "LESS", "GTR", "NEWLINE", "UNK", "END_OF_FILE", "ID",
  "INT_CONST", "FLOAT_CONST", "CHAR_CONST", "FUNC", "STRING", "ARR", "'('",
  "')'", "'{'", "'}'", "','", "';'", "':'", "'='", "'['", "']'", "$accept",
  "S", "BEGIN", "TYPE", "FUNC_DECL", "$@1", "$@2", "PARA_LIST",
  "STMT_LIST", "STMT", "SWITCH_STMT", "CASE_STMT", "BRK_CNT", "FOR_STMT",
  "WHILE_STMT", "EXPR", "COMP_OP", "TERM", "FACTOR", "ASSGN", "DECL",
  "DECL_TAIL", "IF_STMT", "PRINT", "VAR_LIST", "RTRN_STMT", "CONST",
  "FUNC_CALL", "ARR_DECL", "MIXED_LIST", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     128,  -135,  -135,  -135,  -135,    13,  -135,   -25,   128,  -135,
      -1,  -135,   128,   -13,    23,    22,  -135,    41,   128,    24,
      34,    48,    42,    50,    51,    55,    68,    70,    74,   -20,
      80,    77,  -135,  -135,  -135,    85,    91,   249,    34,  -135,
     -30,    87,    34,  -135,  -135,  -135,  -135,   133,   214,  -135,
     104,   106,  -135,  -135,  -135,  -135,  -135,  -135,  -135,    34,
     249,   249,    93,   120,  -135,  -135,   107,   115,  -135,   121,
     127,   231,    -5,   145,  -135,    82,   137,   -21,   135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
     257,   249,   249,   249,   249,   249,  -135,  -135,   157,   222,
     232,   177,   249,   171,   189,   203,   217,  -135,   228,  -135,
     -17,   229,   174,   235,   227,   242,   246,   245,  -135,    34,
     171,   241,   261,  -135,   214,  -135,  -135,  -135,  -135,  -135,
     260,   263,   249,   119,    28,   249,   249,   264,   254,   262,
     275,    21,   257,   265,  -135,   265,   266,   -10,  -135,  -135,
     269,   184,   267,    34,    34,   257,   249,   146,   165,    39,
     270,  -135,   268,   272,   274,   273,  -135,  -135,  -135,  -135,
     249,   276,    53,   171,    32,   277,   278,   281,   257,   257,
     271,   289,   282,   290,   275,   283,  -135,   284,   198,   285,
     286,   291,  -135,  -135,   292,   304,  -135,   288,   294,   295,
      34,   287,  -135,   293,  -135,  -135,  -135,   257,   280,  -135,
     296,   297,   298,    34,   301,   302,  -135,    34,  -135,  -135,
     249,  -135,   300,    34,   305,    34,    34,    39,   208,  -135,
     306,  -135,   307,   308,  -135,   257,  -135,  -135,  -135,  -135
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     5,     6,     7,     8,     0,     2,     0,     4,     1,
       0,     3,    11,     0,     0,     9,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    80,    81,    82,     0,     0,     0,     0,    30,
       0,     0,    16,    28,    22,    24,    25,    59,    41,    54,
       0,     0,    26,    19,    20,    57,    21,    23,    13,     0,
       0,     0,     0,     0,    34,    35,     0,     0,    79,     0,
       0,     0,     0,     0,    56,     0,     0,    69,     0,    66,
      12,    15,    44,    45,    46,    47,    48,    49,    42,    43,
       0,     0,     0,     0,     0,     0,    27,    29,     0,     0,
       0,    56,     0,     0,     0,     0,     0,    77,     0,    78,
       0,     0,    60,    95,     0,    96,     0,     0,    55,    17,
       0,     0,     0,    61,    40,    50,    51,    52,    53,    10,
       0,     0,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,    83,    18,    70,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    73,    75,     0,     0,     0,    58,    93,    94,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,     0,    63,     0,
       0,     0,    68,    91,     0,    71,    39,     0,     0,     0,
       0,     0,    31,     0,    76,    74,    90,     0,    84,    86,
       0,     0,     0,     0,     0,     0,    33,     0,    84,    62,
       0,    85,     0,     0,     0,     0,     0,     0,    65,    92,
       0,    38,     0,     0,    32,     0,    72,    36,    37,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,   332,     2,  -135,  -135,  -135,  -135,   -38,  -135,
    -135,   114,  -135,  -135,  -135,   -36,  -135,   251,   149,   -54,
     299,  -117,  -135,  -135,   166,  -135,   -24,  -135,  -135,  -134
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,    40,     8,    19,    14,    15,    41,    42,
      43,   182,    44,    45,    46,    47,    91,    48,    49,    50,
      51,    79,    52,    53,   163,    54,    55,    56,    57,   116
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      76,    75,     7,   149,    81,    69,    77,   165,   104,   167,
       7,   168,    78,     9,    13,    10,    66,    32,    33,    34,
      21,    98,    67,    16,    99,   100,   120,   139,    68,   121,
     140,   113,    32,    33,    34,   112,   123,    67,   191,   114,
     170,   171,    12,     1,     2,     3,     4,    23,   115,    24,
      25,    26,    27,    28,    29,    30,   192,   113,    32,    33,
      34,   180,   181,    67,   103,   164,   133,    17,    22,    18,
      31,    32,    33,    34,    35,   120,    36,    37,   156,    38,
     193,   148,    39,   194,    58,   151,    20,    59,   166,   113,
      32,    33,    34,    60,    61,    67,   112,   190,    62,   157,
     158,   177,     1,     2,     3,     4,    82,    83,    84,    85,
      86,    63,    87,    88,    89,   175,   176,   115,    64,   115,
     151,   115,    65,    70,   198,   199,   118,    71,    72,   101,
      32,    33,    34,    80,   188,    36,    37,     1,     2,     3,
       4,   102,    73,    82,    83,    84,    85,    86,   115,    87,
      88,    89,    96,   219,    97,   107,   106,    82,    83,    84,
      85,    86,   216,    87,    88,    89,   108,   155,   110,   109,
      82,    83,    84,    85,    86,   224,    87,    88,    89,   227,
      90,   239,   117,   119,   228,   230,   122,   232,   233,    82,
      83,    84,    85,    86,   178,    87,    88,    89,    82,    83,
      84,    85,    86,   129,    87,    88,    89,   134,    82,    83,
      84,    85,    86,   179,    87,    88,    89,    92,    93,    94,
      95,   142,    82,    83,    84,    85,    86,   132,    87,    88,
      89,   173,    82,    83,    84,    85,    86,   135,    87,    88,
      89,   125,   126,   127,   128,   207,    82,    83,    84,    85,
      86,   136,    87,    88,    89,   235,    82,    83,    84,    85,
      86,   137,    87,    88,    89,   138,   130,    74,    32,    33,
      34,   111,   141,    67,    37,   144,   131,    74,    32,    33,
      34,   150,   143,    67,    37,    74,    32,    33,    34,   145,
     146,    67,    37,   101,    32,    33,    34,   147,   152,    36,
      37,   113,    32,    33,    34,   153,   160,    67,   154,   159,
     161,   162,   172,   189,   169,   184,   185,   187,   212,   174,
     200,   183,   186,   195,   196,   197,   201,   203,   202,   211,
     220,   205,   206,   213,   209,   210,   217,   208,   214,   215,
      11,   234,   124,   223,   221,   218,   225,   226,   229,   222,
     204,   231,   236,   237,   238,     0,     0,     0,     0,     0,
       0,   105
};

static const yytype_int16 yycheck[] =
{
      38,    37,     0,   120,    42,    29,    36,   141,    62,   143,
       8,   145,    42,     0,    12,    40,    36,    37,    38,    39,
      18,    59,    42,    36,    60,    61,    47,    44,    48,    50,
      47,    36,    37,    38,    39,    71,    90,    42,   172,    44,
      50,    51,    43,     9,    10,    11,    12,    13,    72,    15,
      16,    17,    18,    19,    20,    21,   173,    36,    37,    38,
      39,    22,    23,    42,    62,    44,   102,    44,    44,    47,
      36,    37,    38,    39,    40,    47,    42,    43,    50,    45,
      48,   119,    48,    51,    36,   121,    45,    45,   142,    36,
      37,    38,    39,    43,    43,    42,   132,    44,    43,   135,
     136,   155,     9,    10,    11,    12,    24,    25,    26,    27,
      28,    43,    30,    31,    32,   153,   154,   141,    48,   143,
     156,   145,    48,    43,   178,   179,    44,    50,    43,    36,
      37,    38,    39,    46,   170,    42,    43,     9,    10,    11,
      12,    48,    51,    24,    25,    26,    27,    28,   172,    30,
      31,    32,    48,   207,    48,    48,    36,    24,    25,    26,
      27,    28,   200,    30,    31,    32,    51,    48,    41,    48,
      24,    25,    26,    27,    28,   213,    30,    31,    32,   217,
      47,   235,    37,    46,   220,   223,    51,   225,   226,    24,
      25,    26,    27,    28,    48,    30,    31,    32,    24,    25,
      26,    27,    28,    46,    30,    31,    32,    36,    24,    25,
      26,    27,    28,    48,    30,    31,    32,     3,     4,     5,
       6,    47,    24,    25,    26,    27,    28,    50,    30,    31,
      32,    47,    24,    25,    26,    27,    28,    48,    30,    31,
      32,    92,    93,    94,    95,    47,    24,    25,    26,    27,
      28,    48,    30,    31,    32,    47,    24,    25,    26,    27,
      28,    44,    30,    31,    32,    37,    44,    36,    37,    38,
      39,    40,    43,    42,    43,    48,    44,    36,    37,    38,
      39,    40,    47,    42,    43,    36,    37,    38,    39,    47,
      44,    42,    43,    36,    37,    38,    39,    52,    37,    42,
      43,    36,    37,    38,    39,    45,    52,    42,    45,    45,
      48,    36,    43,    37,    48,    47,    44,    44,    14,    52,
      49,    51,    48,    46,    46,    44,    37,    37,    46,    37,
      50,    48,    48,    45,    48,    44,    49,    52,    44,    44,
       8,   227,    91,    45,    48,    52,    45,    45,    48,    52,
     184,    46,    46,    46,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    62
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    10,    11,    12,    54,    55,    56,    57,     0,
      40,    55,    43,    56,    59,    60,    36,    44,    47,    58,
      45,    56,    44,    13,    15,    16,    17,    18,    19,    20,
      21,    36,    37,    38,    39,    40,    42,    43,    45,    48,
      56,    61,    62,    63,    65,    66,    67,    68,    70,    71,
      72,    73,    75,    76,    78,    79,    80,    81,    36,    45,
      43,    43,    43,    43,    48,    48,    36,    42,    48,    79,
      43,    50,    43,    51,    36,    68,    61,    36,    42,    74,
      46,    61,    24,    25,    26,    27,    28,    30,    31,    32,
      47,    69,     3,     4,     5,     6,    48,    48,    61,    68,
      68,    36,    48,    56,    72,    73,    36,    48,    51,    48,
      41,    40,    68,    36,    44,    79,    82,    37,    44,    46,
      47,    50,    51,    72,    70,    71,    71,    71,    71,    46,
      44,    44,    50,    68,    36,    48,    48,    44,    37,    44,
      47,    43,    47,    47,    48,    47,    44,    52,    61,    74,
      40,    68,    37,    45,    45,    48,    50,    68,    68,    45,
      52,    48,    36,    77,    44,    82,    72,    82,    82,    48,
      50,    51,    43,    47,    52,    61,    61,    72,    48,    48,
      22,    23,    64,    51,    47,    44,    48,    44,    68,    37,
      44,    82,    74,    48,    51,    46,    46,    44,    72,    72,
      49,    37,    46,    37,    77,    48,    48,    47,    52,    48,
      44,    37,    14,    45,    44,    44,    61,    49,    52,    72,
      50,    48,    52,    45,    61,    45,    45,    61,    68,    48,
      61,    46,    61,    61,    64,    47,    46,    46,    46,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    58,
      57,    59,    57,    60,    60,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    64,    64,    65,    65,    66,    66,    66,    67,
      68,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    74,    74,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    81,    81,    82,    82,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     0,
       9,     0,     8,     4,     2,     2,     1,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     7,     5,     3,     2,     2,    11,    11,    10,     7,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     3,     1,     1,     5,     1,
       3,     3,     8,     6,    11,     9,     2,     3,     5,     1,
       3,     7,    11,     5,     7,     1,     3,     3,     3,     2,
       1,     1,     1,     4,     7,     8,     7,     4,     5,     6,
       7,     6,     9,     3,     3,     1,     1
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
  case 3: /* BEGIN: FUNC_DECL BEGIN  */
#line 35 "semanticAnalysis.y"
                        {}
#line 1457 "y.tab.c"
    break;

  case 4: /* BEGIN: FUNC_DECL  */
#line 36 "semanticAnalysis.y"
                  {}
#line 1463 "y.tab.c"
    break;

  case 5: /* TYPE: INT  */
#line 38 "semanticAnalysis.y"
           {(yyval.t).lexeme = "INT";}
#line 1469 "y.tab.c"
    break;

  case 6: /* TYPE: FLOAT  */
#line 39 "semanticAnalysis.y"
             {(yyval.t).lexeme = "FLOAT";}
#line 1475 "y.tab.c"
    break;

  case 7: /* TYPE: CHAR  */
#line 40 "semanticAnalysis.y"
            {(yyval.t).lexeme = "CHAR";}
#line 1481 "y.tab.c"
    break;

  case 8: /* TYPE: VOID  */
#line 41 "semanticAnalysis.y"
            {(yyval.t).lexeme = "VOID";}
#line 1487 "y.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 43 "semanticAnalysis.y"
                                    {insertFunc((yyvsp[-2].t).lexeme,(yyvsp[-3].t).lexeme); updateFunc((int)(yyvsp[0].t).val, dec); decCounter = 0;}
#line 1493 "y.tab.c"
    break;

  case 10: /* FUNC_DECL: TYPE FUNC '(' PARA_LIST $@1 ')' '{' STMT_LIST '}'  */
#line 43 "semanticAnalysis.y"
                                                                                                                                           {if((strcmp((yyvsp[-8].t).lexeme,returnType_func)!=0)){printf("ERROR : Wrong Return Type");exit(0);}returnType_func = "VOID"; print_Id_Table(); print_Arr_Table(); id_count = 0; arr_count = 0;}
#line 1499 "y.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 44 "semanticAnalysis.y"
                          {insertFunc((yyvsp[-1].t).lexeme,(yyvsp[-2].t).lexeme);}
#line 1505 "y.tab.c"
    break;

  case 12: /* FUNC_DECL: TYPE FUNC '(' $@2 ')' '{' STMT_LIST '}'  */
#line 44 "semanticAnalysis.y"
                                                                                   {if((strcmp((yyvsp[-7].t).lexeme,returnType_func)!=0)){printf("ERROR : Wrong Return Type");exit(0);}returnType_func = "VOID"; print_Id_Table(); print_Arr_Table(); id_count = 0; arr_count = 0;}
#line 1511 "y.tab.c"
    break;

  case 13: /* PARA_LIST: PARA_LIST ',' TYPE ID  */
#line 46 "semanticAnalysis.y"
                                  {(yyval.t).val = (yyvsp[-3].t).val + 1; insertID((yyvsp[0].t).lexeme, (yyvsp[-1].t).lexeme); dec[decCounter].type = (yyvsp[-1].t).lexeme; dec[decCounter].name = (yyvsp[0].t).lexeme; decCounter++;}
#line 1517 "y.tab.c"
    break;

  case 14: /* PARA_LIST: TYPE ID  */
#line 47 "semanticAnalysis.y"
                    {(yyval.t).val = 1; insertID((yyvsp[0].t).lexeme, (yyvsp[-1].t).lexeme); dec[decCounter].type = (yyvsp[-1].t).lexeme; dec[decCounter].name = (yyvsp[0].t).lexeme; decCounter++;}
#line 1523 "y.tab.c"
    break;

  case 31: /* SWITCH_STMT: SWITCH '(' ID ')' '{' CASE_STMT '}'  */
#line 59 "semanticAnalysis.y"
                                                  {if(strcmp(findIdType((yyvsp[-4].t).lexeme),"INT")!=0){printf("ERORR: Wrong variable type passed in Switch\n"); exit(0);}}
#line 1529 "y.tab.c"
    break;

  case 40: /* EXPR: EXPR COMP_OP TERM  */
#line 72 "semanticAnalysis.y"
                         {if(strcmp((yyvsp[-2].t).lexeme, (yyvsp[0].t).lexeme)!=0){
                                print_Id_Table();
                                printf("ERROR: Type mismatch for expression\n");
                                exit(0);
                            }
                            (yyval.t).lexeme = (yyvsp[-2].t).lexeme;
                            (yyval.t).val = (float)comparator((yyvsp[-2].t).val,(yyvsp[0].t).val,(yyvsp[-1].t).lexeme);
                         }
#line 1542 "y.tab.c"
    break;

  case 41: /* EXPR: TERM  */
#line 80 "semanticAnalysis.y"
               {(yyval.t).lexeme = (yyvsp[0].t).lexeme; (yyval.t).val = (yyvsp[0].t).val;}
#line 1548 "y.tab.c"
    break;

  case 42: /* COMP_OP: LESS  */
#line 81 "semanticAnalysis.y"
               {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1554 "y.tab.c"
    break;

  case 43: /* COMP_OP: GTR  */
#line 81 "semanticAnalysis.y"
                                              {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1560 "y.tab.c"
    break;

  case 44: /* COMP_OP: GTR_EQ  */
#line 81 "semanticAnalysis.y"
                                                                                {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1566 "y.tab.c"
    break;

  case 45: /* COMP_OP: LESS_EQ  */
#line 81 "semanticAnalysis.y"
                                                                                                                   {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1572 "y.tab.c"
    break;

  case 46: /* COMP_OP: NOT_EQ  */
#line 81 "semanticAnalysis.y"
                                                                                                                                                     {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1578 "y.tab.c"
    break;

  case 47: /* COMP_OP: AND  */
#line 81 "semanticAnalysis.y"
                                                                                                                                                                                    {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1584 "y.tab.c"
    break;

  case 48: /* COMP_OP: OR  */
#line 81 "semanticAnalysis.y"
                                                                                                                                                                                                                  {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1590 "y.tab.c"
    break;

  case 49: /* COMP_OP: EQ_EQ  */
#line 81 "semanticAnalysis.y"
                                                                                                                                                                                                                                                   {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1596 "y.tab.c"
    break;

  case 50: /* TERM: TERM '+' FACTOR  */
#line 82 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val + (yyvsp[0].t).val;}
#line 1602 "y.tab.c"
    break;

  case 51: /* TERM: TERM '-' FACTOR  */
#line 83 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val - (yyvsp[0].t).val;}
#line 1608 "y.tab.c"
    break;

  case 52: /* TERM: TERM '*' FACTOR  */
#line 84 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val * (yyvsp[0].t).val;}
#line 1614 "y.tab.c"
    break;

  case 53: /* TERM: TERM '/' FACTOR  */
#line 85 "semanticAnalysis.y"
                       {if(strcmp((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme)!=0){print_Id_Table(); printf("ERROR: Type mismatch for expression\n");exit(0);} (yyval.t).lexeme = (yyvsp[-2].t).lexeme; (yyval.t).val = (yyvsp[-2].t).val / (yyvsp[0].t).val;}
#line 1620 "y.tab.c"
    break;

  case 54: /* TERM: FACTOR  */
#line 86 "semanticAnalysis.y"
              {(yyval.t).lexeme = (yyvsp[0].t).lexeme;}
#line 1626 "y.tab.c"
    break;

  case 55: /* FACTOR: '(' EXPR ')'  */
#line 88 "semanticAnalysis.y"
                      {(yyval.t).lexeme = (yyvsp[-1].t).lexeme; (yyval.t).val = (yyvsp[-1].t).val;}
#line 1632 "y.tab.c"
    break;

  case 56: /* FACTOR: ID  */
#line 89 "semanticAnalysis.y"
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
            }
#line 1651 "y.tab.c"
    break;

  case 57: /* FACTOR: CONST  */
#line 103 "semanticAnalysis.y"
               {(yyval.t).lexeme = (yyvsp[0].t).lexeme; (yyval.t).val = (yyvsp[0].t).val;}
#line 1657 "y.tab.c"
    break;

  case 58: /* ASSGN: ID '=' EXPR ',' ASSGN  */
#line 108 "semanticAnalysis.y"
                              {typeCheck((yyvsp[-4].t).lexeme,(yyvsp[-2].t).lexeme); updateID((yyvsp[-4].t).lexeme,(yyvsp[-2].t).val);}
#line 1663 "y.tab.c"
    break;

  case 59: /* ASSGN: EXPR  */
#line 109 "semanticAnalysis.y"
             {}
#line 1669 "y.tab.c"
    break;

  case 60: /* ASSGN: ID '=' EXPR  */
#line 110 "semanticAnalysis.y"
                    {typeCheck((yyvsp[-2].t).lexeme,(yyvsp[0].t).lexeme); updateID((yyvsp[-2].t).lexeme,(yyvsp[0].t).val);}
#line 1675 "y.tab.c"
    break;

  case 61: /* ASSGN: EXPR ',' ASSGN  */
#line 111 "semanticAnalysis.y"
                       {}
#line 1681 "y.tab.c"
    break;

  case 62: /* ASSGN: ARR '[' INT_CONST ']' '=' EXPR ',' ASSGN  */
#line 112 "semanticAnalysis.y"
                                                 {if(strcmp(findArrType((yyvsp[-7].t).lexeme),(yyvsp[-5].t).lexeme)!=0){printf("ERROR: Wrong variable type passed in Array\n"); exit(0);} if((yyvsp[-5].t).val<0 || !findArrSize((yyvsp[-7].t).lexeme, 0, (yyvsp[-5].t).val)){printf("ERROR: Array index out of bounds\n"); exit(0);}}
#line 1687 "y.tab.c"
    break;

  case 63: /* ASSGN: ARR '[' INT_CONST ']' '=' EXPR  */
#line 113 "semanticAnalysis.y"
                                       {if(strcmp(findArrType((yyvsp[-5].t).lexeme),(yyvsp[-3].t).lexeme)!=0){printf("ERROR: Wrong variable type passed in Array\n"); exit(0);} if((yyvsp[-3].t).val<0 || !findArrSize((yyvsp[-5].t).lexeme, 0, (yyvsp[-3].t).val)){printf("ERROR: Array index out of bounds\n"); exit(0);}}
#line 1693 "y.tab.c"
    break;

  case 64: /* ASSGN: ARR '[' INT_CONST ']' '[' INT_CONST ']' '=' EXPR ',' ASSGN  */
#line 114 "semanticAnalysis.y"
                                                                   {if(strcmp(findArrType((yyvsp[-10].t).lexeme),(yyvsp[-8].t).lexeme)!=0){printf("ERROR: Wrong variable type passed in Array\n"); exit(0);} if((yyvsp[-8].t).val<0 || (yyvsp[-5].t).val<0 || !findArrSize((yyvsp[-10].t).lexeme, (yyvsp[-8].t).val, (yyvsp[-5].t).val)){printf("ERROR: Array index out of bounds\n"); exit(0);}}
#line 1699 "y.tab.c"
    break;

  case 65: /* ASSGN: ARR '[' INT_CONST ']' '[' INT_CONST ']' '=' EXPR  */
#line 115 "semanticAnalysis.y"
                                                         {if(strcmp(findArrType((yyvsp[-8].t).lexeme),(yyvsp[-6].t).lexeme)!=0){printf("ERROR: Wrong variable type passed in Array\n"); exit(0);} if((yyvsp[-6].t).val<0 || (yyvsp[-3].t).val<0 || !findArrSize((yyvsp[-8].t).lexeme, (yyvsp[-6].t).val, (yyvsp[-3].t).val)){printf("ERROR: Array index out of bounds\n"); exit(0);}}
#line 1705 "y.tab.c"
    break;

  case 66: /* DECL: TYPE DECL_TAIL  */
#line 117 "semanticAnalysis.y"
                      {insertEntry((yyvsp[-1].t).lexeme);}
#line 1711 "y.tab.c"
    break;

  case 67: /* DECL_TAIL: ID '=' EXPR  */
#line 118 "semanticAnalysis.y"
                        {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-2].t).lexeme; dec[decCounter].val = (yyvsp[0].t).val;dec[decCounter].type = (yyvsp[0].t).lexeme; decCounter++;}
#line 1717 "y.tab.c"
    break;

  case 68: /* DECL_TAIL: ID '=' EXPR ',' DECL_TAIL  */
#line 119 "semanticAnalysis.y"
                                      {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-4].t).lexeme; dec[decCounter].val = (yyvsp[-2].t).val;dec[decCounter].type = (yyvsp[-2].t).lexeme; decCounter++;}
#line 1723 "y.tab.c"
    break;

  case 69: /* DECL_TAIL: ID  */
#line 120 "semanticAnalysis.y"
               {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[0].t).lexeme; dec[decCounter].val = INT_MIN; decCounter++;}
#line 1729 "y.tab.c"
    break;

  case 70: /* DECL_TAIL: ID ',' DECL_TAIL  */
#line 121 "semanticAnalysis.y"
                             {dec[decCounter] = *(struct dec*)malloc(sizeof(dec)); dec[decCounter].name = (yyvsp[-2].t).lexeme; dec[decCounter].val = INT_MIN; decCounter++;}
#line 1735 "y.tab.c"
    break;

  case 73: /* PRINT: PRINTF '(' STRING ')' ';'  */
#line 134 "semanticAnalysis.y"
                                  {}
#line 1741 "y.tab.c"
    break;

  case 74: /* PRINT: PRINTF '(' STRING ',' VAR_LIST ')' ';'  */
#line 135 "semanticAnalysis.y"
                                               {for(int i = 0;i<strlen((yyvsp[-4].t).lexeme);i++){
                                                    if((yyvsp[-4].t).lexeme[i] == '%'){
                                                        if(list_c<=0){
                                                            printf("ERROR: Too few arguments for printf\n");
                                                            exit(0);
                                                        }
                                                        if((yyvsp[-4].t).lexeme[i+1] == 'd'){
                                                            if(strcmp(listType[list_c-1],"INT")!=0){
                                                                printf("ERROR: Type mismatch for printf\n");
                                                                exit(0);
                                                            }
                                                            list_c--;
                                                        }
                                                        else if((yyvsp[-4].t).lexeme[i+1] == 'f'){
                                                            if(strcmp(listType[list_c-1],"FLOAT")!=0){
                                                                printf("ERROR: Type mismatch for printf\n");
                                                                exit(0);
                                                            }
                                                            list_c--;
                                                        }
                                                        else if((yyvsp[-4].t).lexeme[i+1] == 'c'){
                                                            if(strcmp(listType[list_c-1],"CHAR")!=0){
                                                                printf("ERROR: Type mismatch for printf\n");
                                                                exit(0);
                                                            }
                                                            list_c--;
                                                        }
                                                        
                                                    }
                                                }
                                                if(list_c > 0){
                                                    printf("ERROR: Too many arguments for printf\n");
                                                    exit(0);
                                                }
                                                list_c = 0;
                                                }
#line 1782 "y.tab.c"
    break;

  case 75: /* VAR_LIST: ID  */
#line 173 "semanticAnalysis.y"
              {listType[list_c] = findIdType((yyvsp[0].t).lexeme); list_c++;}
#line 1788 "y.tab.c"
    break;

  case 76: /* VAR_LIST: ID ',' VAR_LIST  */
#line 174 "semanticAnalysis.y"
                           {listType[list_c] = findIdType((yyvsp[-2].t).lexeme); list_c++;}
#line 1794 "y.tab.c"
    break;

  case 77: /* RTRN_STMT: RETURN ID ';'  */
#line 176 "semanticAnalysis.y"
                          {returnType_func = findIdType((yyvsp[-1].t).lexeme);printf("return type :%s\n",returnType_func);}
#line 1800 "y.tab.c"
    break;

  case 78: /* RTRN_STMT: RETURN CONST ';'  */
#line 177 "semanticAnalysis.y"
                          {returnType_func = (yyvsp[-1].t).lexeme; }
#line 1806 "y.tab.c"
    break;

  case 80: /* CONST: INT_CONST  */
#line 180 "semanticAnalysis.y"
                  {(yyval.t).val = (yyvsp[0].t).val;(yyval.t).lexeme = "INT";}
#line 1812 "y.tab.c"
    break;

  case 81: /* CONST: FLOAT_CONST  */
#line 181 "semanticAnalysis.y"
                    {(yyval.t).val = (yyvsp[0].t).val;(yyval.t).lexeme = "FLOAT";}
#line 1818 "y.tab.c"
    break;

  case 82: /* CONST: CHAR_CONST  */
#line 182 "semanticAnalysis.y"
                   {(yyval.t).val = (yyvsp[0].t).val;(yyval.t).lexeme = "CHAR";}
#line 1824 "y.tab.c"
    break;

  case 83: /* CONST: ARR '[' INT_CONST ']'  */
#line 183 "semanticAnalysis.y"
                              {if((yyvsp[-1].t).val < 0 || !findArrSize((yyvsp[-3].t).lexeme, 0, (yyvsp[-1].t).val)){printf("ERROR: Array %s out of bounds\n", (yyvsp[-3].t).lexeme); exit(0);} (yyval.t).lexeme = findArrType((yyvsp[-3].t).lexeme); (yyval.t).val = findArrVal((yyvsp[-3].t).lexeme, 0, (yyvsp[-1].t).val);}
#line 1830 "y.tab.c"
    break;

  case 84: /* CONST: ARR '[' INT_CONST ']' '[' INT_CONST ']'  */
#line 184 "semanticAnalysis.y"
                                                {if((yyvsp[-4].t).val < 0 || (yyvsp[-1].t).val < 0 || !findArrSize((yyvsp[-6].t).lexeme, (yyvsp[-4].t).val, (yyvsp[-1].t).val)){printf("ERROR: Array %s out of bounds\n", (yyvsp[-6].t).lexeme); exit(0);} (yyval.t).lexeme = findArrType((yyvsp[-6].t).lexeme); (yyval.t).val = findArrVal((yyvsp[-6].t).lexeme, (yyvsp[-4].t).val, (yyvsp[-1].t).val);}
#line 1836 "y.tab.c"
    break;

  case 85: /* FUNC_CALL: TYPE ID '=' FUNC '(' MIXED_LIST ')' ';'  */
#line 186 "semanticAnalysis.y"
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
                                                                for(int j = list_c-1; j>=0; j--){
                                                                    if(strcmp(func_table[i].paraType[list_c - j - 1],listType[j])!=0){
                                                                        printf("ERROR: Type mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                                        exit(0);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        list_c = 0;
                                                    }
#line 1861 "y.tab.c"
    break;

  case 86: /* FUNC_CALL: TYPE ID '=' FUNC '(' ')' ';'  */
#line 206 "semanticAnalysis.y"
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
#line 1880 "y.tab.c"
    break;

  case 87: /* FUNC_CALL: FUNC '(' ')' ';'  */
#line 220 "semanticAnalysis.y"
                                        {findFunc((yyvsp[-3].t).lexeme);}
#line 1886 "y.tab.c"
    break;

  case 88: /* FUNC_CALL: FUNC '(' MIXED_LIST ')' ';'  */
#line 221 "semanticAnalysis.y"
                                        {findFunc((yyvsp[-4].t).lexeme); 
                                        for(int i = 0; i<func_count; i++){
                                            if(strcmp(func_table[i].name,(yyvsp[-4].t).lexeme)==0){
                                                if(func_table[i].para != list_c){
                                                    printf("ERROR: Number of arguments mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                    exit(0);
                                                }
                                                for(int j = list_c-1; j>=0; j--){
                                                    if(strcmp(func_table[i].paraType[list_c - j -1],listType[j])!=0){
                                                        printf("ERROR: Type mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                        exit(0);
                                                    }
                                                }
                                            }
                                        }list_c = 0;}
#line 1906 "y.tab.c"
    break;

  case 89: /* FUNC_CALL: ID '=' FUNC '(' ')' ';'  */
#line 237 "semanticAnalysis.y"
                                    {if(strcmp(findIdType((yyvsp[-5].t).lexeme), findFunc((yyvsp[-3].t).lexeme))!=0){
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
                                        }
#line 1924 "y.tab.c"
    break;

  case 90: /* FUNC_CALL: ID '=' FUNC '(' MIXED_LIST ')' ';'  */
#line 250 "semanticAnalysis.y"
                                               {
                                        if(strcmp(findIdType((yyvsp[-6].t).lexeme), findFunc((yyvsp[-4].t).lexeme))!=0){
                                            printf("ERROR: Type mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                            exit(0);
                                        }
                                        for(int i = 0; i<func_count; i++){
                                            if(strcmp(func_table[i].name,(yyvsp[-4].t).lexeme)==0){
                                                if(func_table[i].para != list_c){
                                                    printf("ERROR: Number of arguments mismatch for function %s\n", (yyvsp[-4].t).lexeme);
                                                    exit(0);
                                                }
                                            }
                                        }list_c = 0;
          }
#line 1943 "y.tab.c"
    break;

  case 91: /* ARR_DECL: TYPE ARR '[' INT_CONST ']' ';'  */
#line 265 "semanticAnalysis.y"
                                          {insertArr((yyvsp[-4].t).lexeme, (yyvsp[-5].t).lexeme, 0, (yyvsp[-2].t).val);}
#line 1949 "y.tab.c"
    break;

  case 92: /* ARR_DECL: TYPE ARR '[' INT_CONST ']' '[' INT_CONST ']' ';'  */
#line 268 "semanticAnalysis.y"
                                                            {insertArr((yyvsp[-7].t).lexeme, (yyvsp[-8].t).lexeme, (yyvsp[-5].t).val, (yyvsp[-2].t).val);}
#line 1955 "y.tab.c"
    break;

  case 93: /* MIXED_LIST: ID ',' MIXED_LIST  */
#line 273 "semanticAnalysis.y"
                               {listType[list_c] = findIdType((yyvsp[-2].t).lexeme); list_c++;}
#line 1961 "y.tab.c"
    break;

  case 94: /* MIXED_LIST: CONST ',' MIXED_LIST  */
#line 274 "semanticAnalysis.y"
                                   {listType[list_c] = (yyvsp[-2].t).lexeme; list_c++;}
#line 1967 "y.tab.c"
    break;

  case 95: /* MIXED_LIST: ID  */
#line 275 "semanticAnalysis.y"
                 {listType[list_c] = findIdType((yyvsp[0].t).lexeme); list_c++;}
#line 1973 "y.tab.c"
    break;

  case 96: /* MIXED_LIST: CONST  */
#line 276 "semanticAnalysis.y"
                    {listType[list_c] = (yyvsp[0].t).lexeme; list_c++;}
#line 1979 "y.tab.c"
    break;


#line 1983 "y.tab.c"

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

#line 287 "semanticAnalysis.y"


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
    //printTable();
    printf("Syntax Error\n");
    exit(0);
}

int main()
{
    yyin = fopen("../input.txt","r");
    yyparse();
    //printTable();
    /* print_Id_Table(); */
    print_func_Table();
    printf("\nParse Successful!\n");
    /* print_Arr_Table(); */
    return 0;
}
