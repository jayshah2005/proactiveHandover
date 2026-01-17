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


/* Substitute the variable and function names.  */
#define yyparse         expressionyyparse
#define yylex           expressionyylex
#define yyerror         expressionyyerror
#define yydebug         expressionyydebug
#define yynerrs         expressionyynerrs
#define yylval          expressionyylval
#define yychar          expressionyychar

/* First part of user prologue.  */
#line 17 "expression.y"


#include <cmath>
#include <cstdio>
#include <cstdlib>
#include "commonutil.h"
#include "expressionyydefs.h"

#define YYDEBUG 1           /* allow debugging */
#define YYDEBUGGING_ON 0    /* turn on/off debugging */

#if YYDEBUG != 0
#define YYERROR_VERBOSE     /* more detailed error messages */
#include <cstring>         /* YYVERBOSE needs it */
#endif

#include "expression.h"
#include "exception.h"
#include "stringutil.h"
#include "unitconversion.h"

using namespace omnetpp;
using namespace omnetpp::common;
using namespace omnetpp::common::expression;

typedef Expression::AstNode AstNode;
typedef Expression::AstNode::Type AstNodeType;

namespace omnetpp { class cObject; };


#line 110 "expression.tab.cc"

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

#include "expression.tab.hh"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TRUE_ = 3,                      /* TRUE_  */
  YYSYMBOL_FALSE_ = 4,                     /* FALSE_  */
  YYSYMBOL_NAN_ = 5,                       /* NAN_  */
  YYSYMBOL_INF_ = 6,                       /* INF_  */
  YYSYMBOL_UNDEFINED_ = 7,                 /* UNDEFINED_  */
  YYSYMBOL_NULLPTR_ = 8,                   /* NULLPTR_  */
  YYSYMBOL_NULL_ = 9,                      /* NULL_  */
  YYSYMBOL_NAME = 10,                      /* NAME  */
  YYSYMBOL_INTCONSTANT = 11,               /* INTCONSTANT  */
  YYSYMBOL_REALCONSTANT = 12,              /* REALCONSTANT  */
  YYSYMBOL_STRINGCONSTANT = 13,            /* STRINGCONSTANT  */
  YYSYMBOL_EQ = 14,                        /* EQ  */
  YYSYMBOL_NE = 15,                        /* NE  */
  YYSYMBOL_GE = 16,                        /* GE  */
  YYSYMBOL_LE = 17,                        /* LE  */
  YYSYMBOL_SPACESHIP = 18,                 /* SPACESHIP  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_XOR = 21,                       /* XOR  */
  YYSYMBOL_SHIFT_LEFT = 22,                /* SHIFT_LEFT  */
  YYSYMBOL_SHIFT_RIGHT = 23,               /* SHIFT_RIGHT  */
  YYSYMBOL_DOUBLECOLON = 24,               /* DOUBLECOLON  */
  YYSYMBOL_INVALID_CHAR = 25,              /* INVALID_CHAR  */
  YYSYMBOL_26_ = 26,                       /* '?'  */
  YYSYMBOL_27_ = 27,                       /* ':'  */
  YYSYMBOL_28_ = 28,                       /* '='  */
  YYSYMBOL_29_ = 29,                       /* '<'  */
  YYSYMBOL_30_ = 30,                       /* '>'  */
  YYSYMBOL_MATCH = 31,                     /* MATCH  */
  YYSYMBOL_32_ = 32,                       /* '|'  */
  YYSYMBOL_33_ = 33,                       /* '#'  */
  YYSYMBOL_34_ = 34,                       /* '&'  */
  YYSYMBOL_35_ = 35,                       /* '+'  */
  YYSYMBOL_36_ = 36,                       /* '-'  */
  YYSYMBOL_37_ = 37,                       /* '*'  */
  YYSYMBOL_38_ = 38,                       /* '/'  */
  YYSYMBOL_39_ = 39,                       /* '%'  */
  YYSYMBOL_40_ = 40,                       /* '^'  */
  YYSYMBOL_UMIN_ = 41,                     /* UMIN_  */
  YYSYMBOL_NEG_ = 42,                      /* NEG_  */
  YYSYMBOL_NOT_ = 43,                      /* NOT_  */
  YYSYMBOL_44_ = 44,                       /* '!'  */
  YYSYMBOL_45_ = 45,                       /* '.'  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* '~'  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_51_ = 51,                       /* ','  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_expr = 56,                      /* expr  */
  YYSYMBOL_operation = 57,                 /* operation  */
  YYSYMBOL_functioncall = 58,              /* functioncall  */
  YYSYMBOL_methodcall = 59,                /* methodcall  */
  YYSYMBOL_array = 60,                     /* array  */
  YYSYMBOL_object = 61,                    /* object  */
  YYSYMBOL_qname = 62,                     /* qname  */
  YYSYMBOL_opt_exprlist = 63,              /* opt_exprlist  */
  YYSYMBOL_exprlist = 64,                  /* exprlist  */
  YYSYMBOL_opt_keyvaluelist = 65,          /* opt_keyvaluelist  */
  YYSYMBOL_keyvaluelist = 66,              /* keyvaluelist  */
  YYSYMBOL_keyvalue = 67,                  /* keyvalue  */
  YYSYMBOL_key = 68,                       /* key  */
  YYSYMBOL_variable = 69,                  /* variable  */
  YYSYMBOL_member = 70,                    /* member  */
  YYSYMBOL_literal = 71,                   /* literal  */
  YYSYMBOL_stringliteral = 72,             /* stringliteral  */
  YYSYMBOL_boolliteral = 73,               /* boolliteral  */
  YYSYMBOL_numliteral = 74,                /* numliteral  */
  YYSYMBOL_otherliteral = 75,              /* otherliteral  */
  YYSYMBOL_quantity = 76,                  /* quantity  */
  YYSYMBOL_qnumber = 77                    /* qnumber  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 90 "expression.y"

#define yyin expressionyyin
#define yyout expressionyyout
#define yyrestart expressionyyrestart
#define yy_scan_string expressionyy_scan_string
#define yy_delete_buffer expressionyy_delete_buffer
extern FILE *yyin;
extern FILE *yyout;
struct yy_buffer_state;
struct yy_buffer_state *yy_scan_string(const char *str);
void yy_delete_buffer(struct yy_buffer_state *);
void yyrestart(FILE *);
int yylex();
void yyerror (AstNode *&dummy, const char *s);

LineColumn xpos, xprevpos;

static char *join(const char *s1, const char *s2, const char *s3=nullptr)
{
    char *d = new char[strlen(s1) + strlen(s2) + strlen(s3?s3:"") + 4];
    strcpy(d, s1);
    strcat(d, " ");
    strcat(d, s2);
    if (s3) {strcat(d, " "); strcat(d, s3);}
    return d;
}

static char *concat(const char *s1, const char *s2, const char *s3=nullptr, const char *s4=nullptr)
{
    char *d = new char[strlen(s1) + strlen(s2) + strlen(s3?s3:"") + strlen(s4?s4:"") + 1];
    strcpy(d, s1);
    strcat(d, s2);
    if (s3) strcat(d, s3);
    if (s4) strcat(d, s4);
    return d;
}

static AstNode *newConstant(const ExprValue& c)
{
    return new AstNode(c);
}

static AstNode *newOp(const char *name, AstNode *child1, AstNode *child2=nullptr, AstNode *child3=nullptr)
{
    AstNode *node = new AstNode(AstNode::OP, name);
    node->children.push_back(child1);
    if (child2)
        node->children.push_back(child2);
    if (child3)
        node->children.push_back(child3);
    return node;
}

static double parseQuantity(const char *text, std::string& unit)
{
    try {
        // evaluate quantities like "5s 230ms"
        return UnitConversion::parseQuantity(text, unit);
    }
    catch (std::exception& e) {
        AstNode *dummy;
        yyerror(dummy, e.what());
        return 0;
    }
}

static bool isIntegerValued(double d)
{
    if (std::isnan(d) || d < (double)INT64_MIN || d > (double)INT64_MAX)  // just to avoid UndefinedBehaviorSanitizer message "<value> is outside the range of representable values of type 'long'"
        return false;

    // check that when converted to integer and back to double, it stays the same
    intval_t l = (intval_t)d;
    return d == l;
}


#line 299 "expression.tab.cc"


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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
       2,     2,     2,    44,     2,    33,     2,    39,    34,     2,
      46,    47,    37,    35,    51,    36,    45,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,     2,
      29,    28,    30,    26,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,    32,    53,    48,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    31,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   171,   171,   176,   177,   178,   179,   180,   181,   183,
     184,   186,   191,   193,   195,   197,   199,   201,   204,   221,
     223,   225,   227,   229,   231,   233,   235,   237,   240,   242,
     244,   247,   251,   254,   256,   258,   261,   264,   266,   268,
     273,   278,   283,   285,   287,   292,   294,   299,   301,   306,
     307,   312,   314,   319,   320,   321,   326,   328,   333,   338,
     340,   341,   342,   343,   344,   346,   348,   350,   352,   354,
     356,   358,   360,   362,   367,   369,   374,   376,   381,   382,
     383,   384,   388,   393,   395,   400,   402,   404,   406,   408,
     421,   423,   425,   430,   432,   437,   438,   439,   441
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
  "\"end of file\"", "error", "\"invalid token\"", "TRUE_", "FALSE_",
  "NAN_", "INF_", "UNDEFINED_", "NULLPTR_", "NULL_", "NAME", "INTCONSTANT",
  "REALCONSTANT", "STRINGCONSTANT", "EQ", "NE", "GE", "LE", "SPACESHIP",
  "AND", "OR", "XOR", "SHIFT_LEFT", "SHIFT_RIGHT", "DOUBLECOLON",
  "INVALID_CHAR", "'?'", "':'", "'='", "'<'", "'>'", "MATCH", "'|'", "'#'",
  "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMIN_", "NEG_", "NOT_",
  "'!'", "'.'", "'('", "')'", "'~'", "'['", "']'", "','", "'{'", "'}'",
  "$accept", "expression", "expr", "operation", "functioncall",
  "methodcall", "array", "object", "qname", "opt_exprlist", "exprlist",
  "opt_keyvaluelist", "keyvaluelist", "keyvalue", "key", "variable",
  "member", "literal", "stringliteral", "boolliteral", "numliteral",
  "otherliteral", "quantity", "qnumber", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-46)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     155,   -46,   -46,    26,    43,   -46,   -46,   -46,    74,    44,
      47,   -46,   155,   155,   155,   155,    83,   166,    21,   300,
     -46,   -46,   -46,   -46,   -30,   -46,   -46,   -46,   -46,   -46,
     -46,    12,    49,    89,   155,   155,   -25,   -25,    11,   -25,
     -46,   300,   -45,   -46,   -46,    26,    43,   -46,   -46,   -46,
      44,    47,   -46,   131,    50,    53,   -46,    79,    12,   -46,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   -46,   111,   166,   -46,   -46,   -46,
     -46,   112,   -46,   100,   -46,    78,    77,   194,   -46,   -46,
     105,    43,    44,    47,    12,   -46,   166,   155,   421,   421,
     445,   445,   464,   396,   332,   364,   145,   145,   268,   421,
     445,   445,   483,   502,   521,   540,   -36,   -36,    57,    57,
      57,    57,   -39,   -46,   -46,    81,   -46,   -46,   155,   -46,
     -46,   300,   -46,   300,   155,   155,   155,   -46,   300,    92,
     231,   -46,   -46
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    83,    84,    87,    88,    90,    92,    91,    74,    85,
      86,    82,     0,     0,     0,     0,     0,    55,     0,     2,
       9,     5,     7,     6,     0,     4,     3,    78,    79,    80,
      81,    89,     0,     0,    50,     0,    18,    31,     0,    36,
      42,    52,     0,    70,    71,    67,    68,    73,    72,    60,
      61,    62,    59,     0,     0,    53,    57,     0,    63,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,    55,    97,    98,    95,
      96,     0,    94,    48,    47,     0,    49,     0,     8,    43,
       0,    69,    64,    65,    66,    45,    54,     0,    20,    21,
      23,    25,    26,    28,    29,    30,    37,    38,     0,    19,
      24,    22,    27,    34,    35,    33,    12,    13,    14,    15,
      16,    17,    76,    10,    11,     0,    93,    40,     0,    75,
      44,    51,    56,    58,     0,    50,     0,    46,    39,     0,
       0,    41,    77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,    97,    -5,
     129,    61,   -46,    42,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,    -1,   -20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    18,    41,    20,    21,   133,    22,    23,    24,    95,
      96,    54,    55,    56,    57,    25,   134,    26,    27,    28,
      29,    30,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,    80,    81,    82,    83,    99,   100,   145,    84,    85,
     146,    91,    36,    37,    38,    39,    58,    87,    88,    84,
      85,    59,    86,    89,    90,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    97,   -97,    70,    91,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   104,   -98,   -95,    84,    85,   -96,    98,    92,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,    91,    58,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    83,    33,    93,
     141,    84,    85,   105,   106,    58,   107,   143,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      34,   132,   136,    35,    33,   137,   -48,    13,   138,    14,
      94,    15,    16,    40,   147,    17,    87,   101,   141,   151,
     149,    12,   102,   103,   148,    42,   150,   135,   142,    13,
       0,    14,     0,    15,    16,   140,     0,    17,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    43,
      44,    45,    46,     0,    47,    48,    49,    50,    51,    52,
      78,    79,    80,    81,    82,    83,     0,     0,     0,    84,
      85,    12,     0,     0,     0,     0,     0,     0,     0,    13,
       0,    14,    53,    15,    16,     0,     0,    17,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,     0,     0,
      70,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     0,     0,     0,    84,    85,
       0,     0,     0,     0,   139,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,     0,     0,    70,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,     0,     0,     0,    84,    85,     0,     0,     0,
       0,   152,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,     0,     0,    70,   144,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,    84,    85,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,     0,     0,    70,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,    84,    85,    60,    61,    62,    63,
      64,    65,     0,    67,    68,    69,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,    84,    85,    60,    61,
      62,    63,    64,    65,     0,     0,    68,    69,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     0,     0,     0,    84,    85,
      60,    61,    62,    63,    64,     0,     0,     0,    68,    69,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    62,    63,    64,
      84,    85,     0,    68,    69,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,     0,    64,     0,    84,    85,    68,    69,     0,
       0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    68,    69,     0,    84,
      85,     0,     0,     0,     0,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    68,    69,     0,    84,    85,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    68,    69,     0,    84,    85,     0,
       0,     0,     0,     0,     0,    76,    77,    78,    79,    80,
      81,    82,    83,    68,    69,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,    77,    78,    79,    80,    81,
      82,    83,    68,    69,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,     0,     0,     0,    84,    85
};

static const yytype_int16 yycheck[] =
{
       0,    37,    38,    39,    40,    50,    51,    46,    44,    45,
      49,    31,    12,    13,    14,    15,    17,     5,     6,    44,
      45,     0,    52,    11,    12,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    35,    10,    26,    58,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    53,    10,    10,    44,    45,    10,    47,    10,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   104,    86,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    40,    24,    10,
     100,    44,    45,    53,    51,   106,    27,   107,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    36,
      46,    10,    10,    49,    24,    47,    52,    44,    51,    46,
      33,    48,    49,    50,    53,    52,     5,     6,   138,    47,
     145,    36,    11,    12,   144,    16,   146,    86,   106,    44,
      -1,    46,    -1,    48,    49,    50,    -1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,     3,
       4,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    44,
      45,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    46,    36,    48,    49,    -1,    -1,    52,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    50,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    50,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    -1,    44,    45,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    44,    45,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    44,    45,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    45,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    22,    23,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    16,    17,    18,
      44,    45,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    18,    -1,    44,    45,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    22,    23,    -1,    44,
      45,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    22,    23,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    22,    23,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    22,    23,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    22,    23,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    44,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    36,    44,    46,    48,    49,    52,    55,    56,
      57,    58,    60,    61,    62,    69,    71,    72,    73,    74,
      75,    76,    77,    24,    46,    49,    56,    56,    56,    56,
      50,    56,    64,     3,     4,     5,     6,     8,     9,    10,
      11,    12,    13,    36,    65,    66,    67,    68,    76,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      26,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    44,    45,    52,     5,     6,    11,
      12,    77,    10,    10,    62,    63,    64,    56,    47,    50,
      51,     6,    11,    12,    76,    53,    51,    27,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    10,    59,    70,    65,    10,    47,    51,    50,
      50,    56,    67,    56,    27,    46,    49,    53,    56,    63,
      56,    47,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      58,    59,    60,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    69,    69,    70,    70,    71,    71,
      71,    71,    72,    73,    73,    74,    74,    74,    74,    74,
      75,    75,    75,    76,    76,    77,    77,    77,    77
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     3,     2,     3,     3,     5,
       4,     4,     2,     3,     4,     3,     4,     3,     1,     1,
       0,     3,     1,     1,     2,     0,     3,     1,     3,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     4,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     1,     1
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
        yyerror (resultAstTree, YY_("syntax error: cannot back up")); \
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
                  Kind, Value, resultAstTree); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, AstNode *&resultAstTree)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (resultAstTree);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, AstNode *&resultAstTree)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, resultAstTree);
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
                 int yyrule, AstNode *&resultAstTree)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], resultAstTree);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, resultAstTree); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, AstNode *&resultAstTree)
{
  YY_USE (yyvaluep);
  YY_USE (resultAstTree);
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
yyparse (AstNode *&resultAstTree)
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
  case 2: /* expression: expr  */
#line 172 "expression.y"
                { resultAstTree = (yyvsp[0].node); }
#line 1447 "expression.tab.cc"
    break;

  case 8: /* expr: '(' expr ')'  */
#line 182 "expression.y"
                { (yyvsp[-1].node)->parenthesized = true; (yyval.node) = (yyvsp[-1].node); }
#line 1453 "expression.tab.cc"
    break;

  case 10: /* expr: expr '.' methodcall  */
#line 185 "expression.y"
                { (yyval.node) = (yyvsp[0].node); (yyval.node)->children.insert((yyval.node)->children.begin(), (yyvsp[-2].node)); }
#line 1459 "expression.tab.cc"
    break;

  case 11: /* expr: expr '.' member  */
#line 187 "expression.y"
                { (yyval.node) = (yyvsp[0].node); (yyval.node)->children.insert((yyval.node)->children.begin(), (yyvsp[-2].node)); }
#line 1465 "expression.tab.cc"
    break;

  case 12: /* operation: expr '+' expr  */
#line 192 "expression.y"
                { (yyval.node) = newOp("+", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1471 "expression.tab.cc"
    break;

  case 13: /* operation: expr '-' expr  */
#line 194 "expression.y"
                { (yyval.node) = newOp("-", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1477 "expression.tab.cc"
    break;

  case 14: /* operation: expr '*' expr  */
#line 196 "expression.y"
                { (yyval.node) = newOp("*", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1483 "expression.tab.cc"
    break;

  case 15: /* operation: expr '/' expr  */
#line 198 "expression.y"
                { (yyval.node) = newOp("/", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1489 "expression.tab.cc"
    break;

  case 16: /* operation: expr '%' expr  */
#line 200 "expression.y"
                { (yyval.node) = newOp("%", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1495 "expression.tab.cc"
    break;

  case 17: /* operation: expr '^' expr  */
#line 202 "expression.y"
                { (yyval.node) = newOp("^", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1501 "expression.tab.cc"
    break;

  case 18: /* operation: '-' expr  */
#line 206 "expression.y"
                {
                    AstNode *arg = (yyvsp[0].node);
                    if (arg->type == AstNode::CONSTANT && arg->constant.getType() == ExprValue::DOUBLE) {
                        arg->constant.setPreservingUnit(-arg->constant.doubleValue());
                        (yyval.node) = (yyvsp[0].node);
                    }
                    else if (arg->type == AstNode::CONSTANT && arg->constant.getType() == ExprValue::INT) {
                        arg->constant.setPreservingUnit(-arg->constant.intValue());
                        (yyval.node) = (yyvsp[0].node);
                    }
                    else {
                        (yyval.node) = newOp("-", arg);
                    }
                }
#line 1520 "expression.tab.cc"
    break;

  case 19: /* operation: expr '=' expr  */
#line 222 "expression.y"
                { (yyval.node) = newOp("=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1526 "expression.tab.cc"
    break;

  case 20: /* operation: expr EQ expr  */
#line 224 "expression.y"
                { (yyval.node) = newOp("==", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1532 "expression.tab.cc"
    break;

  case 21: /* operation: expr NE expr  */
#line 226 "expression.y"
                { (yyval.node) = newOp("!=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1538 "expression.tab.cc"
    break;

  case 22: /* operation: expr '>' expr  */
#line 228 "expression.y"
                { (yyval.node) = newOp(">", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1544 "expression.tab.cc"
    break;

  case 23: /* operation: expr GE expr  */
#line 230 "expression.y"
                { (yyval.node) = newOp(">=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1550 "expression.tab.cc"
    break;

  case 24: /* operation: expr '<' expr  */
#line 232 "expression.y"
                { (yyval.node) = newOp("<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1556 "expression.tab.cc"
    break;

  case 25: /* operation: expr LE expr  */
#line 234 "expression.y"
                { (yyval.node) = newOp("<=", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1562 "expression.tab.cc"
    break;

  case 26: /* operation: expr SPACESHIP expr  */
#line 236 "expression.y"
                { (yyval.node) = newOp("<=>", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1568 "expression.tab.cc"
    break;

  case 27: /* operation: expr MATCH expr  */
#line 238 "expression.y"
                { (yyval.node) = newOp("=~", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1574 "expression.tab.cc"
    break;

  case 28: /* operation: expr AND expr  */
#line 241 "expression.y"
                { (yyval.node) = newOp("&&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1580 "expression.tab.cc"
    break;

  case 29: /* operation: expr OR expr  */
#line 243 "expression.y"
                { (yyval.node) = newOp("||", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1586 "expression.tab.cc"
    break;

  case 30: /* operation: expr XOR expr  */
#line 245 "expression.y"
                { (yyval.node) = newOp("##", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1592 "expression.tab.cc"
    break;

  case 31: /* operation: '!' expr  */
#line 249 "expression.y"
                { (yyval.node) = newOp("!", (yyvsp[0].node)); }
#line 1598 "expression.tab.cc"
    break;

  case 32: /* operation: expr '!'  */
#line 252 "expression.y"
                { (yyval.node) = newOp("_!", (yyvsp[-1].node)); /*!!!*/ }
#line 1604 "expression.tab.cc"
    break;

  case 33: /* operation: expr '&' expr  */
#line 255 "expression.y"
                { (yyval.node) = newOp("&", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1610 "expression.tab.cc"
    break;

  case 34: /* operation: expr '|' expr  */
#line 257 "expression.y"
                { (yyval.node) = newOp("|", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1616 "expression.tab.cc"
    break;

  case 35: /* operation: expr '#' expr  */
#line 259 "expression.y"
                { (yyval.node) = newOp("#", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1622 "expression.tab.cc"
    break;

  case 36: /* operation: '~' expr  */
#line 263 "expression.y"
                { (yyval.node) = newOp("~", (yyvsp[0].node)); }
#line 1628 "expression.tab.cc"
    break;

  case 37: /* operation: expr SHIFT_LEFT expr  */
#line 265 "expression.y"
                { (yyval.node) = newOp("<<", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1634 "expression.tab.cc"
    break;

  case 38: /* operation: expr SHIFT_RIGHT expr  */
#line 267 "expression.y"
                { (yyval.node) = newOp(">>", (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1640 "expression.tab.cc"
    break;

  case 39: /* operation: expr '?' expr ':' expr  */
#line 269 "expression.y"
                { (yyval.node) = newOp("?:", (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1646 "expression.tab.cc"
    break;

  case 40: /* functioncall: NAME '(' opt_exprlist ')'  */
#line 274 "expression.y"
                { (yyvsp[-1].node)->type = AstNode::FUNCTION; (yyvsp[-1].node)->name = (yyvsp[-3].str); delete [] (yyvsp[-3].str); (yyval.node) = (yyvsp[-1].node); }
#line 1652 "expression.tab.cc"
    break;

  case 41: /* methodcall: NAME '(' opt_exprlist ')'  */
#line 279 "expression.y"
                { (yyvsp[-1].node)->type = AstNode::METHOD; (yyvsp[-1].node)->name = (yyvsp[-3].str); delete [] (yyvsp[-3].str); (yyval.node) = (yyvsp[-1].node); }
#line 1658 "expression.tab.cc"
    break;

  case 42: /* array: '[' ']'  */
#line 284 "expression.y"
                { (yyval.node) = new AstNode(AstNode::ARRAY, ""); }
#line 1664 "expression.tab.cc"
    break;

  case 43: /* array: '[' exprlist ']'  */
#line 286 "expression.y"
                { (yyvsp[-1].node)->type = AstNode::ARRAY; (yyval.node) = (yyvsp[-1].node); }
#line 1670 "expression.tab.cc"
    break;

  case 44: /* array: '[' exprlist ',' ']'  */
#line 288 "expression.y"
                { (yyvsp[-2].node)->type = AstNode::ARRAY; (yyval.node) = (yyvsp[-2].node); }
#line 1676 "expression.tab.cc"
    break;

  case 45: /* object: '{' opt_keyvaluelist '}'  */
#line 293 "expression.y"
                { (yyvsp[-1].node)->type = AstNode::OBJECT; (yyval.node) = (yyvsp[-1].node); }
#line 1682 "expression.tab.cc"
    break;

  case 46: /* object: qname '{' opt_keyvaluelist '}'  */
#line 295 "expression.y"
                { (yyvsp[-1].node)->type = AstNode::OBJECT; (yyvsp[-1].node)->name = (yyvsp[-3].str); delete [] (yyvsp[-3].str); (yyval.node) = (yyvsp[-1].node); }
#line 1688 "expression.tab.cc"
    break;

  case 47: /* qname: NAME DOUBLECOLON qname  */
#line 300 "expression.y"
                { (yyval.str) = concat((yyvsp[-2].str), "::", (yyvsp[0].str)); delete [] (yyvsp[-2].str); delete [] (yyvsp[0].str); }
#line 1694 "expression.tab.cc"
    break;

  case 48: /* qname: NAME  */
#line 302 "expression.y"
                { (yyval.str) = (yyvsp[0].str); }
#line 1700 "expression.tab.cc"
    break;

  case 50: /* opt_exprlist: %empty  */
#line 308 "expression.y"
                { (yyval.node) = new AstNode(); }
#line 1706 "expression.tab.cc"
    break;

  case 51: /* exprlist: exprlist ',' expr  */
#line 313 "expression.y"
                { (yyvsp[-2].node)->children.push_back((yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
#line 1712 "expression.tab.cc"
    break;

  case 52: /* exprlist: expr  */
#line 315 "expression.y"
                { (yyval.node) = new AstNode(); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 1718 "expression.tab.cc"
    break;

  case 55: /* opt_keyvaluelist: %empty  */
#line 322 "expression.y"
                { (yyval.node) = new AstNode(); }
#line 1724 "expression.tab.cc"
    break;

  case 56: /* keyvaluelist: keyvaluelist ',' keyvalue  */
#line 327 "expression.y"
                { (yyvsp[-2].node)->children.push_back((yyvsp[0].node)); (yyval.node) = (yyvsp[-2].node); }
#line 1730 "expression.tab.cc"
    break;

  case 57: /* keyvaluelist: keyvalue  */
#line 329 "expression.y"
                { (yyval.node) = new AstNode(); (yyval.node)->children.push_back((yyvsp[0].node)); }
#line 1736 "expression.tab.cc"
    break;

  case 58: /* keyvalue: key ':' expr  */
#line 334 "expression.y"
                { (yyval.node) = new AstNode(AstNode::KEYVALUE, (yyvsp[-2].str)); (yyval.node)->children.push_back((yyvsp[0].node)); delete [] (yyvsp[-2].str); }
#line 1742 "expression.tab.cc"
    break;

  case 59: /* key: STRINGCONSTANT  */
#line 339 "expression.y"
                { (yyval.str) = opp_strdup(opp_parsequotedstr((yyvsp[0].str),0).c_str()); delete [] (yyvsp[0].str); }
#line 1748 "expression.tab.cc"
    break;

  case 64: /* key: '-' INTCONSTANT  */
#line 345 "expression.y"
                { (yyval.str) = concat("-", (yyvsp[0].str)); delete [] (yyvsp[0].str); }
#line 1754 "expression.tab.cc"
    break;

  case 65: /* key: '-' REALCONSTANT  */
#line 347 "expression.y"
                { (yyval.str) = concat("-", (yyvsp[0].str)); delete [] (yyvsp[0].str); }
#line 1760 "expression.tab.cc"
    break;

  case 66: /* key: '-' quantity  */
#line 349 "expression.y"
                { (yyval.str) = concat("-", (yyvsp[0].str)); delete [] (yyvsp[0].str); }
#line 1766 "expression.tab.cc"
    break;

  case 67: /* key: NAN_  */
#line 351 "expression.y"
                { (yyval.str) = opp_strdup("nan"); }
#line 1772 "expression.tab.cc"
    break;

  case 68: /* key: INF_  */
#line 353 "expression.y"
                { (yyval.str) = opp_strdup("inf"); }
#line 1778 "expression.tab.cc"
    break;

  case 69: /* key: '-' INF_  */
#line 355 "expression.y"
                { (yyval.str) = opp_strdup("-inf"); }
#line 1784 "expression.tab.cc"
    break;

  case 70: /* key: TRUE_  */
#line 357 "expression.y"
                { (yyval.str) = opp_strdup("true"); }
#line 1790 "expression.tab.cc"
    break;

  case 71: /* key: FALSE_  */
#line 359 "expression.y"
                { (yyval.str) = opp_strdup("false"); }
#line 1796 "expression.tab.cc"
    break;

  case 72: /* key: NULL_  */
#line 361 "expression.y"
                { (yyval.str) = opp_strdup("null"); }
#line 1802 "expression.tab.cc"
    break;

  case 73: /* key: NULLPTR_  */
#line 363 "expression.y"
                { (yyval.str) = opp_strdup("nullptr"); }
#line 1808 "expression.tab.cc"
    break;

  case 74: /* variable: NAME  */
#line 368 "expression.y"
                { (yyval.node) = new AstNode(AstNode::IDENT, (yyvsp[0].str)); delete [] (yyvsp[0].str); }
#line 1814 "expression.tab.cc"
    break;

  case 75: /* variable: NAME '[' expr ']'  */
#line 370 "expression.y"
                { (yyval.node) = new AstNode(AstNode::IDENT_W_INDEX, (yyvsp[-3].str)); delete [] (yyvsp[-3].str); (yyval.node)->children.push_back((yyvsp[-1].node)); }
#line 1820 "expression.tab.cc"
    break;

  case 76: /* member: NAME  */
#line 375 "expression.y"
                { (yyval.node) = new AstNode(AstNode::MEMBER, (yyvsp[0].str)); delete [] (yyvsp[0].str); }
#line 1826 "expression.tab.cc"
    break;

  case 77: /* member: NAME '[' expr ']'  */
#line 377 "expression.y"
                { (yyval.node) = new AstNode(AstNode::MEMBER_W_INDEX, (yyvsp[-3].str)); delete [] (yyvsp[-3].str); (yyval.node)->children.push_back((yyvsp[-1].node)); }
#line 1832 "expression.tab.cc"
    break;

  case 82: /* stringliteral: STRINGCONSTANT  */
#line 389 "expression.y"
                { (yyval.node) = newConstant(opp_parsequotedstr((yyvsp[0].str),0)); delete [] (yyvsp[0].str); }
#line 1838 "expression.tab.cc"
    break;

  case 83: /* boolliteral: TRUE_  */
#line 394 "expression.y"
                { (yyval.node) = newConstant(true); }
#line 1844 "expression.tab.cc"
    break;

  case 84: /* boolliteral: FALSE_  */
#line 396 "expression.y"
                { (yyval.node) = newConstant(false); }
#line 1850 "expression.tab.cc"
    break;

  case 85: /* numliteral: INTCONSTANT  */
#line 401 "expression.y"
                { (yyval.node) = newConstant((intval_t)opp_atoll((yyvsp[0].str))); delete [] (yyvsp[0].str); }
#line 1856 "expression.tab.cc"
    break;

  case 86: /* numliteral: REALCONSTANT  */
#line 403 "expression.y"
                { (yyval.node) = newConstant(opp_atof((yyvsp[0].str))); delete [] (yyvsp[0].str); }
#line 1862 "expression.tab.cc"
    break;

  case 87: /* numliteral: NAN_  */
#line 405 "expression.y"
                { (yyval.node) = newConstant(std::nan("")); }
#line 1868 "expression.tab.cc"
    break;

  case 88: /* numliteral: INF_  */
#line 407 "expression.y"
                { (yyval.node) = newConstant(1/0.0); }
#line 1874 "expression.tab.cc"
    break;

  case 89: /* numliteral: quantity  */
#line 409 "expression.y"
                {
                  std::string unit;
                  double d = parseQuantity((yyvsp[0].str), unit);
                  if (isIntegerValued(d))
                      (yyval.node) = newConstant(ExprValue((intval_t)d, unit.c_str()));
                  else
                      (yyval.node) = newConstant(ExprValue(d, unit.c_str()));
                  delete [] (yyvsp[0].str);
                }
#line 1888 "expression.tab.cc"
    break;

  case 90: /* otherliteral: UNDEFINED_  */
#line 422 "expression.y"
                { (yyval.node) = newConstant(ExprValue()); }
#line 1894 "expression.tab.cc"
    break;

  case 91: /* otherliteral: NULL_  */
#line 424 "expression.y"
                { (yyval.node) = newConstant(any_ptr(nullptr)); }
#line 1900 "expression.tab.cc"
    break;

  case 92: /* otherliteral: NULLPTR_  */
#line 426 "expression.y"
                { (yyval.node) = newConstant(any_ptr(nullptr)); }
#line 1906 "expression.tab.cc"
    break;

  case 93: /* quantity: quantity qnumber NAME  */
#line 431 "expression.y"
                { (yyval.str) = join((yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)); delete [] (yyvsp[-2].str); delete [] (yyvsp[-1].str); delete [] (yyvsp[0].str); }
#line 1912 "expression.tab.cc"
    break;

  case 94: /* quantity: qnumber NAME  */
#line 433 "expression.y"
                { (yyval.str) = join((yyvsp[-1].str), (yyvsp[0].str)); delete [] (yyvsp[-1].str); delete [] (yyvsp[0].str); }
#line 1918 "expression.tab.cc"
    break;

  case 97: /* qnumber: NAN_  */
#line 440 "expression.y"
                { (yyval.str) = opp_strdup("nan"); }
#line 1924 "expression.tab.cc"
    break;

  case 98: /* qnumber: INF_  */
#line 442 "expression.y"
                { (yyval.str) = opp_strdup("inf"); }
#line 1930 "expression.tab.cc"
    break;


#line 1934 "expression.tab.cc"

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
      yyerror (resultAstTree, YY_("syntax error"));
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
                      yytoken, &yylval, resultAstTree);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, resultAstTree);
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
  yyerror (resultAstTree, YY_("memory exhausted"));
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
                  yytoken, &yylval, resultAstTree);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, resultAstTree);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 444 "expression.y"


//----------------------------------------------------------------------

AstNode *Expression::parseToAst(const char *text) const
{
    NONREENTRANT_PARSER();

    // reset the lexer
    xpos.co = 0;
    xpos.li = 1;
    xprevpos = xpos;

    yyin = nullptr;
    yyout = stderr; // not used anyway

    // alloc buffer
    struct yy_buffer_state *handle = yy_scan_string(text);
    if (!handle)
        throw std::runtime_error("Parser is unable to allocate work memory");

    // parse
    AstNode *result;
    try
    {
        yyparse(result);
    }
    catch (std::exception& e)
    {
        yy_delete_buffer(handle);
        throw;
    }
    yy_delete_buffer(handle);

    return result;
}

void yyerror(AstNode *&dummy, const char *s)
{
    // chop newline
    char buf[250];
    strcpy(buf, s);
    if (buf[strlen(buf)-1] == '\n')
        buf[strlen(buf)-1] = '\0';

    throw std::runtime_error(buf);
}
