/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0




/* Substitute the variable and function names.  */
#define yyparse ned2yyparse
#define yylex   ned2yylex
#define yyerror ned2yyerror
#define yydebug ned2yydebug
#define yylval  ned2yylval
#define yychar  ned2yychar
#define yynerrs ned2yynerrs
#define yylloc  ned2yylloc

/* First part of user prologue.  */
#line 87 "ned2.y"


#include <cstdio>
#include <cstdlib>
#include <stack>
#include "common/commonutil.h"
#include "common/stringutil.h"
#include "yydefs.h"
#include "errorstore.h"
#include "sourcedocument.h"
#include "exception.h"
#include "nedelements.h"

#define YYDEBUG 1           /* allow debugging */
#define YYDEBUGGING_ON 0    /* turn on/off debugging */

#if YYDEBUG != 0
#define YYERROR_VERBOSE     /* more detailed error messages */
#include <cstring>         /* YYVERBOSE needs it */
#endif

/* increase GLR stack -- with the default 200 some NED files have reportedly caused a "memory exhausted" error */
#define YYINITDEPTH 500

#define yylloc ned2yylloc
#define yyin ned2yyin
#define yyout ned2yyout
#define yyrestart ned2yyrestart
#define yy_scan_string ned2yy_scan_string
#define yy_delete_buffer ned2yy_delete_buffer
extern FILE *yyin;
extern FILE *yyout;
struct yy_buffer_state;
struct yy_buffer_state *yy_scan_string(const char *str);
void yy_delete_buffer(struct yy_buffer_state *);
void yyrestart(FILE *);
int yylex();
void yyerror (omnetpp::nedxml::ParseContext *np, const char *s);

#include "nedutil.h"
#include "nedyyutil.h"

using namespace omnetpp;

using namespace omnetpp::common;
using namespace omnetpp::nedxml;
using namespace omnetpp::nedxml::nedyyutil;

static struct NedParserState
{
    bool inTypes;
    bool inConnGroup;
    std::stack<ASTNode *> propertyscope; // top(): where to insert properties as we parse them
    std::stack<ASTNode *> blockscope;    // top(): where to insert parameters, gates, etc
    std::stack<ASTNode *> typescope;     // top(): as blockscope, but ignore submodules and connection channels

    /* tmp flags, used with param, gate and conn */
    int paramType;
    int gateType;
    bool isVolatile;
    bool isDefault;
    YYLTYPE exprPos;
    int subgate;
    std::vector<ASTNode *> propvals; // temporarily collects property values

    /* tmp flags, used with msg fields */
    bool isAbstract;
    bool isReadonly;

    /* NED-II: modules, channels */
    NedFileElement *nedfile;
    CommentElement *comment;
    PackageElement *package;
    ImportElement *import;
    PropertyDeclElement *propertydecl;
    ExtendsElement *extends;
    InterfaceNameElement *interfacename;
    ASTNode *component;  // compound/simple module, module interface, channel or channel interface
    ParametersElement *parameters;
    ParamElement *param;
    PropertyElement *property;
    PropertyKeyElement *propkey;
    TypesElement *types;
    GatesElement *gates;
    GateElement *gate;
    SubmodulesElement *submods;
    SubmoduleElement *submod;
    ConnectionsElement *conns;
    ConnectionGroupElement *conngroup;
    ConnectionElement *conn;
    LoopElement *loop;
    ConditionElement *condition;
} ps;


static void resetParserState()
{
    static NedParserState cleanps;
    ps = cleanps;
}

static NedParserState globalps;  // for error recovery

static void restoreGlobalParserState()  // for error recovery
{
    ps = globalps;
}

static void assertNonEmpty(std::stack<ASTNode *>& somescope)
{
    // for error recovery: STL stack::top() crashes if stack is empty
    if (somescope.empty())
    {
        INTERNAL_ERROR0(nullptr, "error during parsing: scope stack empty");
        somescope.push(nullptr);
    }
}


#line 186 "ned2.tab.cc"

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

#include "ned2.tab.hh"

/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IMPORT = 3,                     /* IMPORT  */
  YYSYMBOL_PACKAGE = 4,                    /* PACKAGE  */
  YYSYMBOL_PROPERTY = 5,                   /* PROPERTY  */
  YYSYMBOL_MODULE = 6,                     /* MODULE  */
  YYSYMBOL_SIMPLE = 7,                     /* SIMPLE  */
  YYSYMBOL_NETWORK = 8,                    /* NETWORK  */
  YYSYMBOL_CHANNEL = 9,                    /* CHANNEL  */
  YYSYMBOL_MODULEINTERFACE = 10,           /* MODULEINTERFACE  */
  YYSYMBOL_CHANNELINTERFACE = 11,          /* CHANNELINTERFACE  */
  YYSYMBOL_EXTENDS = 12,                   /* EXTENDS  */
  YYSYMBOL_LIKE = 13,                      /* LIKE  */
  YYSYMBOL_TYPES = 14,                     /* TYPES  */
  YYSYMBOL_PARAMETERS = 15,                /* PARAMETERS  */
  YYSYMBOL_GATES = 16,                     /* GATES  */
  YYSYMBOL_SUBMODULES = 17,                /* SUBMODULES  */
  YYSYMBOL_CONNECTIONS = 18,               /* CONNECTIONS  */
  YYSYMBOL_ALLOWUNCONNECTED = 19,          /* ALLOWUNCONNECTED  */
  YYSYMBOL_DOUBLE_ = 20,                   /* DOUBLE_  */
  YYSYMBOL_INT_ = 21,                      /* INT_  */
  YYSYMBOL_STRING_ = 22,                   /* STRING_  */
  YYSYMBOL_BOOL_ = 23,                     /* BOOL_  */
  YYSYMBOL_OBJECT_ = 24,                   /* OBJECT_  */
  YYSYMBOL_XML_ = 25,                      /* XML_  */
  YYSYMBOL_VOLATILE_ = 26,                 /* VOLATILE_  */
  YYSYMBOL_INPUT_ = 27,                    /* INPUT_  */
  YYSYMBOL_OUTPUT_ = 28,                   /* OUTPUT_  */
  YYSYMBOL_INOUT_ = 29,                    /* INOUT_  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_FOR = 31,                       /* FOR  */
  YYSYMBOL_RIGHTARROW = 32,                /* RIGHTARROW  */
  YYSYMBOL_LEFTARROW = 33,                 /* LEFTARROW  */
  YYSYMBOL_DBLARROW = 34,                  /* DBLARROW  */
  YYSYMBOL_TO = 35,                        /* TO  */
  YYSYMBOL_THIS_ = 36,                     /* THIS_  */
  YYSYMBOL_PARENT = 37,                    /* PARENT  */
  YYSYMBOL_DEFAULT = 38,                   /* DEFAULT  */
  YYSYMBOL_ASK = 39,                       /* ASK  */
  YYSYMBOL_CONST_ = 40,                    /* CONST_  */
  YYSYMBOL_SIZEOF = 41,                    /* SIZEOF  */
  YYSYMBOL_INDEX_ = 42,                    /* INDEX_  */
  YYSYMBOL_EXISTS = 43,                    /* EXISTS  */
  YYSYMBOL_TYPENAME = 44,                  /* TYPENAME  */
  YYSYMBOL_XMLDOC = 45,                    /* XMLDOC  */
  YYSYMBOL_TRUE_ = 46,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 47,                    /* FALSE_  */
  YYSYMBOL_NAN_ = 48,                      /* NAN_  */
  YYSYMBOL_INF_ = 49,                      /* INF_  */
  YYSYMBOL_UNDEFINED_ = 50,                /* UNDEFINED_  */
  YYSYMBOL_NULLPTR_ = 51,                  /* NULLPTR_  */
  YYSYMBOL_NULL_ = 52,                     /* NULL_  */
  YYSYMBOL_NAME = 53,                      /* NAME  */
  YYSYMBOL_PROPNAME = 54,                  /* PROPNAME  */
  YYSYMBOL_INTCONSTANT = 55,               /* INTCONSTANT  */
  YYSYMBOL_REALCONSTANT = 56,              /* REALCONSTANT  */
  YYSYMBOL_STRINGCONSTANT = 57,            /* STRINGCONSTANT  */
  YYSYMBOL_CHARCONSTANT = 58,              /* CHARCONSTANT  */
  YYSYMBOL_PLUSPLUS = 59,                  /* PLUSPLUS  */
  YYSYMBOL_DOUBLEASTERISK = 60,            /* DOUBLEASTERISK  */
  YYSYMBOL_EQ = 61,                        /* EQ  */
  YYSYMBOL_NE = 62,                        /* NE  */
  YYSYMBOL_GE = 63,                        /* GE  */
  YYSYMBOL_LE = 64,                        /* LE  */
  YYSYMBOL_SPACESHIP = 65,                 /* SPACESHIP  */
  YYSYMBOL_AND = 66,                       /* AND  */
  YYSYMBOL_OR = 67,                        /* OR  */
  YYSYMBOL_XOR = 68,                       /* XOR  */
  YYSYMBOL_SHIFT_LEFT = 69,                /* SHIFT_LEFT  */
  YYSYMBOL_SHIFT_RIGHT = 70,               /* SHIFT_RIGHT  */
  YYSYMBOL_DOUBLECOLON = 71,               /* DOUBLECOLON  */
  YYSYMBOL_EXPRESSION_SELECTOR = 72,       /* EXPRESSION_SELECTOR  */
  YYSYMBOL_COMMONCHAR = 73,                /* COMMONCHAR  */
  YYSYMBOL_INVALID_CHAR = 74,              /* INVALID_CHAR  */
  YYSYMBOL_75_ = 75,                       /* '?'  */
  YYSYMBOL_76_ = 76,                       /* ':'  */
  YYSYMBOL_77_ = 77,                       /* '<'  */
  YYSYMBOL_78_ = 78,                       /* '>'  */
  YYSYMBOL_MATCH = 79,                     /* MATCH  */
  YYSYMBOL_80_ = 80,                       /* '|'  */
  YYSYMBOL_81_ = 81,                       /* '#'  */
  YYSYMBOL_82_ = 82,                       /* '&'  */
  YYSYMBOL_83_ = 83,                       /* '+'  */
  YYSYMBOL_84_ = 84,                       /* '-'  */
  YYSYMBOL_85_ = 85,                       /* '*'  */
  YYSYMBOL_86_ = 86,                       /* '/'  */
  YYSYMBOL_87_ = 87,                       /* '%'  */
  YYSYMBOL_88_ = 88,                       /* '^'  */
  YYSYMBOL_UMIN_ = 89,                     /* UMIN_  */
  YYSYMBOL_NEG_ = 90,                      /* NEG_  */
  YYSYMBOL_NOT_ = 91,                      /* NOT_  */
  YYSYMBOL_92_ = 92,                       /* '.'  */
  YYSYMBOL_93_ = 93,                       /* ';'  */
  YYSYMBOL_94_ = 94,                       /* '}'  */
  YYSYMBOL_95_ = 95,                       /* '('  */
  YYSYMBOL_96_ = 96,                       /* ')'  */
  YYSYMBOL_97_ = 97,                       /* '@'  */
  YYSYMBOL_98_ = 98,                       /* '['  */
  YYSYMBOL_99_ = 99,                       /* ']'  */
  YYSYMBOL_100_ = 100,                     /* '{'  */
  YYSYMBOL_101_ = 101,                     /* ','  */
  YYSYMBOL_102_ = 102,                     /* '='  */
  YYSYMBOL_103_ = 103,                     /* '$'  */
  YYSYMBOL_104_ = 104,                     /* '!'  */
  YYSYMBOL_105_ = 105,                     /* '~'  */
  YYSYMBOL_YYACCEPT = 106,                 /* $accept  */
  YYSYMBOL_startsymbol = 107,              /* startsymbol  */
  YYSYMBOL_nedfile = 108,                  /* nedfile  */
  YYSYMBOL_definitions = 109,              /* definitions  */
  YYSYMBOL_definition = 110,               /* definition  */
  YYSYMBOL_packagedeclaration = 111,       /* packagedeclaration  */
  YYSYMBOL_dottedname = 112,               /* dottedname  */
  YYSYMBOL_import = 113,                   /* import  */
  YYSYMBOL_importspec = 114,               /* importspec  */
  YYSYMBOL_importname = 115,               /* importname  */
  YYSYMBOL_propertydecl = 116,             /* propertydecl  */
  YYSYMBOL_propertydecl_header = 117,      /* propertydecl_header  */
  YYSYMBOL_opt_propertydecl_keys = 118,    /* opt_propertydecl_keys  */
  YYSYMBOL_propertydecl_keys = 119,        /* propertydecl_keys  */
  YYSYMBOL_propertydecl_key = 120,         /* propertydecl_key  */
  YYSYMBOL_fileproperty = 121,             /* fileproperty  */
  YYSYMBOL_channeldefinition = 122,        /* channeldefinition  */
  YYSYMBOL_123_1 = 123,                    /* $@1  */
  YYSYMBOL_channelheader = 124,            /* channelheader  */
  YYSYMBOL_125_2 = 125,                    /* $@2  */
  YYSYMBOL_opt_inheritance = 126,          /* opt_inheritance  */
  YYSYMBOL_extendsname = 127,              /* extendsname  */
  YYSYMBOL_likenames = 128,                /* likenames  */
  YYSYMBOL_likename = 129,                 /* likename  */
  YYSYMBOL_channelinterfacedefinition = 130, /* channelinterfacedefinition  */
  YYSYMBOL_131_3 = 131,                    /* $@3  */
  YYSYMBOL_channelinterfaceheader = 132,   /* channelinterfaceheader  */
  YYSYMBOL_133_4 = 133,                    /* $@4  */
  YYSYMBOL_opt_interfaceinheritance = 134, /* opt_interfaceinheritance  */
  YYSYMBOL_extendsnames = 135,             /* extendsnames  */
  YYSYMBOL_simplemoduledefinition = 136,   /* simplemoduledefinition  */
  YYSYMBOL_137_5 = 137,                    /* $@5  */
  YYSYMBOL_simplemoduleheader = 138,       /* simplemoduleheader  */
  YYSYMBOL_139_6 = 139,                    /* $@6  */
  YYSYMBOL_compoundmoduledefinition = 140, /* compoundmoduledefinition  */
  YYSYMBOL_141_7 = 141,                    /* $@7  */
  YYSYMBOL_compoundmoduleheader = 142,     /* compoundmoduleheader  */
  YYSYMBOL_143_8 = 143,                    /* $@8  */
  YYSYMBOL_networkdefinition = 144,        /* networkdefinition  */
  YYSYMBOL_145_9 = 145,                    /* $@9  */
  YYSYMBOL_networkheader = 146,            /* networkheader  */
  YYSYMBOL_147_10 = 147,                   /* $@10  */
  YYSYMBOL_moduleinterfacedefinition = 148, /* moduleinterfacedefinition  */
  YYSYMBOL_149_11 = 149,                   /* $@11  */
  YYSYMBOL_moduleinterfaceheader = 150,    /* moduleinterfaceheader  */
  YYSYMBOL_151_12 = 151,                   /* $@12  */
  YYSYMBOL_opt_paramblock = 152,           /* opt_paramblock  */
  YYSYMBOL_153_13 = 153,                   /* $@13  */
  YYSYMBOL_opt_params = 154,               /* opt_params  */
  YYSYMBOL_params = 155,                   /* params  */
  YYSYMBOL_paramsitem = 156,               /* paramsitem  */
  YYSYMBOL_param = 157,                    /* param  */
  YYSYMBOL_param_typenamevalue = 158,      /* param_typenamevalue  */
  YYSYMBOL_param_typename = 159,           /* param_typename  */
  YYSYMBOL_pattern_value = 160,            /* pattern_value  */
  YYSYMBOL_paramtype = 161,                /* paramtype  */
  YYSYMBOL_opt_volatile = 162,             /* opt_volatile  */
  YYSYMBOL_paramvalue = 163,               /* paramvalue  */
  YYSYMBOL_opt_inline_properties = 164,    /* opt_inline_properties  */
  YYSYMBOL_inline_properties = 165,        /* inline_properties  */
  YYSYMBOL_pattern = 166,                  /* pattern  */
  YYSYMBOL_pattern2 = 167,                 /* pattern2  */
  YYSYMBOL_pattern_elem = 168,             /* pattern_elem  */
  YYSYMBOL_pattern_name = 169,             /* pattern_name  */
  YYSYMBOL_pattern_index = 170,            /* pattern_index  */
  YYSYMBOL_property = 171,                 /* property  */
  YYSYMBOL_property_namevalue = 172,       /* property_namevalue  */
  YYSYMBOL_property_name = 173,            /* property_name  */
  YYSYMBOL_opt_property_keys = 174,        /* opt_property_keys  */
  YYSYMBOL_property_keys = 175,            /* property_keys  */
  YYSYMBOL_property_key = 176,             /* property_key  */
  YYSYMBOL_property_values = 177,          /* property_values  */
  YYSYMBOL_property_value = 178,           /* property_value  */
  YYSYMBOL_property_literal = 179,         /* property_literal  */
  YYSYMBOL_opt_gateblock = 180,            /* opt_gateblock  */
  YYSYMBOL_gateblock = 181,                /* gateblock  */
  YYSYMBOL_182_14 = 182,                   /* $@14  */
  YYSYMBOL_opt_gates = 183,                /* opt_gates  */
  YYSYMBOL_gates = 184,                    /* gates  */
  YYSYMBOL_gate = 185,                     /* gate  */
  YYSYMBOL_186_15 = 186,                   /* $@15  */
  YYSYMBOL_gate_typenamesize = 187,        /* gate_typenamesize  */
  YYSYMBOL_gatetype = 188,                 /* gatetype  */
  YYSYMBOL_opt_typeblock = 189,            /* opt_typeblock  */
  YYSYMBOL_typeblock = 190,                /* typeblock  */
  YYSYMBOL_191_16 = 191,                   /* $@16  */
  YYSYMBOL_opt_localtypes = 192,           /* opt_localtypes  */
  YYSYMBOL_localtypes = 193,               /* localtypes  */
  YYSYMBOL_localtype = 194,                /* localtype  */
  YYSYMBOL_opt_submodblock = 195,          /* opt_submodblock  */
  YYSYMBOL_submodblock = 196,              /* submodblock  */
  YYSYMBOL_197_17 = 197,                   /* $@17  */
  YYSYMBOL_opt_submodules = 198,           /* opt_submodules  */
  YYSYMBOL_submodules = 199,               /* submodules  */
  YYSYMBOL_submodule = 200,                /* submodule  */
  YYSYMBOL_201_18 = 201,                   /* $@18  */
  YYSYMBOL_submoduleheader = 202,          /* submoduleheader  */
  YYSYMBOL_submodulename = 203,            /* submodulename  */
  YYSYMBOL_likeexpr = 204,                 /* likeexpr  */
  YYSYMBOL_opt_condition = 205,            /* opt_condition  */
  YYSYMBOL_opt_connblock = 206,            /* opt_connblock  */
  YYSYMBOL_connblock = 207,                /* connblock  */
  YYSYMBOL_208_19 = 208,                   /* $@19  */
  YYSYMBOL_209_20 = 209,                   /* $@20  */
  YYSYMBOL_opt_connections = 210,          /* opt_connections  */
  YYSYMBOL_connections = 211,              /* connections  */
  YYSYMBOL_connectionsitem = 212,          /* connectionsitem  */
  YYSYMBOL_connectiongroup = 213,          /* connectiongroup  */
  YYSYMBOL_214_21 = 214,                   /* $@21  */
  YYSYMBOL_opt_loops_and_conditions = 215, /* opt_loops_and_conditions  */
  YYSYMBOL_loops_and_conditions = 216,     /* loops_and_conditions  */
  YYSYMBOL_loop_or_condition = 217,        /* loop_or_condition  */
  YYSYMBOL_loop = 218,                     /* loop  */
  YYSYMBOL_connection = 219,               /* connection  */
  YYSYMBOL_leftgatespec = 220,             /* leftgatespec  */
  YYSYMBOL_leftmod = 221,                  /* leftmod  */
  YYSYMBOL_leftgate = 222,                 /* leftgate  */
  YYSYMBOL_parentleftgate = 223,           /* parentleftgate  */
  YYSYMBOL_rightgatespec = 224,            /* rightgatespec  */
  YYSYMBOL_rightmod = 225,                 /* rightmod  */
  YYSYMBOL_rightgate = 226,                /* rightgate  */
  YYSYMBOL_parentrightgate = 227,          /* parentrightgate  */
  YYSYMBOL_opt_subgate = 228,              /* opt_subgate  */
  YYSYMBOL_channelspec = 229,              /* channelspec  */
  YYSYMBOL_230_22 = 230,                   /* $@22  */
  YYSYMBOL_channelspec_header = 231,       /* channelspec_header  */
  YYSYMBOL_opt_channelname = 232,          /* opt_channelname  */
  YYSYMBOL_condition = 233,                /* condition  */
  YYSYMBOL_vector = 234,                   /* vector  */
  YYSYMBOL_expression = 235,               /* expression  */
  YYSYMBOL_expr = 236,                     /* expr  */
  YYSYMBOL_functioncall = 237,             /* functioncall  */
  YYSYMBOL_array = 238,                    /* array  */
  YYSYMBOL_object = 239,                   /* object  */
  YYSYMBOL_opt_exprlist = 240,             /* opt_exprlist  */
  YYSYMBOL_exprlist = 241,                 /* exprlist  */
  YYSYMBOL_opt_keyvaluelist = 242,         /* opt_keyvaluelist  */
  YYSYMBOL_keyvaluelist = 243,             /* keyvaluelist  */
  YYSYMBOL_keyvalue = 244,                 /* keyvalue  */
  YYSYMBOL_key = 245,                      /* key  */
  YYSYMBOL_simple_expr = 246,              /* simple_expr  */
  YYSYMBOL_funcname = 247,                 /* funcname  */
  YYSYMBOL_qname_elem = 248,               /* qname_elem  */
  YYSYMBOL_qname = 249,                    /* qname  */
  YYSYMBOL_operator = 250,                 /* operator  */
  YYSYMBOL_literal = 251,                  /* literal  */
  YYSYMBOL_stringliteral = 252,            /* stringliteral  */
  YYSYMBOL_boolliteral = 253,              /* boolliteral  */
  YYSYMBOL_numliteral = 254,               /* numliteral  */
  YYSYMBOL_otherliteral = 255,             /* otherliteral  */
  YYSYMBOL_quantity = 256,                 /* quantity  */
  YYSYMBOL_realconstant_ext = 257,         /* realconstant_ext  */
  YYSYMBOL_opt_semicolon = 258             /* opt_semicolon  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;



#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
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

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (4 < __GNUC__ + (7 <= __GNUC_MINOR__) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif (2 < __GNUC__ + (8 <= __GNUC_MINOR__) || defined __clang__ \
        || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  104
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1219

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  384
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  625
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333

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
       2,     2,     2,   104,     2,    81,   103,    87,    82,     2,
      95,    96,    85,    83,   101,    84,    92,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    76,    93,
      77,   102,    78,    75,    97,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    98,     2,    99,    88,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,    80,    94,   105,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      79,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   213,   213,   214,   221,   222,   226,   227,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   243,
     245,   247,   249,   251,   253,   255,   257,   259,   261,   263,
     265,   270,   280,   281,   288,   298,   299,   303,   304,   305,
     306,   307,   308,   315,   320,   328,   333,   342,   343,   347,
     348,   352,   364,   376,   375,   399,   398,   408,   409,   410,
     411,   415,   424,   425,   429,   442,   441,   465,   464,   474,
     475,   479,   480,   488,   487,   512,   511,   525,   524,   552,
     551,   565,   564,   592,   591,   608,   607,   632,   631,   644,
     653,   652,   662,   663,   667,   668,   672,   673,   677,   678,
     685,   691,   709,   716,   724,   746,   748,   750,   752,   754,
     756,   761,   763,   768,   770,   772,   776,   784,   785,   789,
     790,   794,   795,   799,   800,   804,   805,   806,   807,   811,
     812,   813,   814,   815,   816,   817,   818,   822,   823,   824,
     825,   832,   840,   841,   845,   851,   861,   865,   866,   870,
     879,   891,   893,   898,   902,   911,   912,   913,   914,   921,
     922,   927,   926,   939,   940,   944,   948,   959,   958,   970,
     975,   981,   988,   992,   997,  1006,  1008,  1010,  1018,  1019,
    1024,  1023,  1040,  1041,  1045,  1046,  1050,  1051,  1052,  1053,
    1054,  1055,  1056,  1057,  1064,  1065,  1070,  1069,  1082,  1083,
    1087,  1088,  1092,  1098,  1097,  1117,  1122,  1132,  1137,  1146,
    1148,  1150,  1155,  1157,  1165,  1166,  1171,  1170,  1182,  1181,
    1194,  1195,  1199,  1200,  1204,  1205,  1218,  1217,  1239,  1241,
    1246,  1251,  1259,  1260,  1264,  1279,  1284,  1289,  1295,  1301,
    1305,  1312,  1313,  1317,  1323,  1331,  1336,  1342,  1351,  1358,
    1366,  1377,  1378,  1382,  1386,  1394,  1399,  1405,  1414,  1419,
    1425,  1434,  1444,  1449,  1451,  1450,  1465,  1466,  1470,  1479,
    1480,  1488,  1501,  1506,  1513,  1514,  1515,  1516,  1517,  1518,
    1520,  1521,  1522,  1523,  1524,  1525,  1526,  1529,  1530,  1531,
    1532,  1533,  1534,  1535,  1536,  1538,  1539,  1540,  1542,  1545,
    1546,  1547,  1549,  1551,  1552,  1553,  1557,  1561,  1562,  1563,
    1567,  1568,  1569,  1570,  1571,  1575,  1576,  1580,  1581,  1585,
    1586,  1587,  1591,  1592,  1596,  1600,  1601,  1602,  1603,  1604,
    1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,  1613,  1614,
    1618,  1619,  1620,  1624,  1625,  1626,  1627,  1628,  1629,  1630,
    1631,  1635,  1636,  1637,  1638,  1642,  1643,  1647,  1648,  1649,
    1650,  1651,  1652,  1656,  1657,  1658,  1659,  1663,  1667,  1668,
    1672,  1673,  1674,  1678,  1679,  1680,  1684,  1685,  1686,  1687,
    1691,  1692,  1693,  1697,  1698
};
#endif

#define YYPACT_NINF (-502)
#define YYTABLE_NINF (-383)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      94,   175,   -30,   -56,    19,    34,    38,    41,    54,    56,
     847,  -502,    30,   115,  -502,    58,  -502,  -502,  -502,  -502,
     147,  -502,  -502,    42,  -502,    44,  -502,    45,  -502,    46,
    -502,    47,  -502,    49,   146,   157,  -502,  -502,  -502,   310,
     187,  -502,   322,   211,   193,  -502,   224,  -502,   246,  -502,
     248,  -502,   250,  -502,   252,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,   271,  -502,   273,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,   263,   319,  -502,  -502,
     847,   847,   587,   268,   847,   847,  -502,   999,  -502,  -502,
    -502,  -502,   289,  -502,   282,  -502,  -502,  -502,  -502,  -502,
    -502,   364,   334,   291,  -502,  -502,   -24,   311,   355,  -502,
     327,  -502,   377,  -502,   391,  -502,   395,  -502,   408,  -502,
     409,  -502,  -502,   -24,   175,  -502,  -502,  -502,  -502,   427,
    -502,   406,  -502,   284,  -502,   284,  -502,   284,  -502,   284,
    -502,   494,  -502,   494,   123,   123,   455,   847,   268,  -502,
     415,   931,  -502,  1031,   201,  -502,  -502,   457,   458,  -502,
    -502,  -502,   319,   459,  -502,   417,   419,   414,  -502,   446,
     364,   334,   415,   415,   847,   847,   847,   847,   847,   847,
     847,   847,   847,   847,   847,   847,   847,   847,   847,   847,
     847,   847,   847,   847,   847,   847,   847,   306,   847,   333,
     470,   471,  -502,   473,  -502,  -502,   429,   435,  -502,   180,
    -502,  -502,  -502,   181,  -502,   181,  -502,   279,  -502,   183,
    -502,   183,  -502,   279,   433,   437,  -502,   430,  -502,   -13,
     187,  -502,   436,   -30,   -30,  -502,  -502,  -502,  -502,   -30,
    -502,  -502,   438,   207,   245,   154,   892,   460,  -502,  -502,
     652,   458,   319,   459,   364,  -502,   268,   847,   842,   842,
     375,   375,   413,  1127,  1063,  1095,   313,   313,   967,   375,
     375,   533,   576,   641,   706,   361,   361,    26,    26,    26,
      26,  -502,  -502,   461,   462,  -502,  -502,  -502,  -502,  -502,
     456,   355,   -24,  -502,  -502,  -502,   482,  -502,   288,  -502,
    -502,   300,   465,  -502,   204,  -502,  -502,  -502,   355,  -502,
     454,   463,   468,  -502,   131,  -502,   469,   467,   548,   548,
     548,   548,  -502,   -24,   -24,   -24,  -502,   474,   554,   474,
     472,  -502,  -502,   475,   123,  -502,  -502,   515,   268,  -502,
    -502,  -502,  1031,  -502,  1031,   847,  -502,   847,  -502,   476,
    -502,  -502,   519,   520,   542,   484,  -502,  -502,    69,  -502,
    -502,  -502,  -502,  -502,  -502,   526,   386,   173,  -502,  -502,
     118,   300,  -502,  -502,   505,   488,  -502,   569,   569,   490,
    -502,  -502,   180,   430,   -30,   -30,   -30,   156,   491,  1031,
    -502,   253,  -502,  -502,   531,  -502,  -502,   386,  -502,   492,
    -502,   495,  -502,  -502,   486,   500,   498,   499,   501,  -502,
    -502,   517,   582,  -502,   582,  -502,   472,  -502,  -502,   551,
     268,  -502,  -502,  -502,   355,   847,  -502,  -502,  -502,  -502,
     280,  -502,   529,   604,  -502,   604,   527,   532,   555,   545,
    -502,  -502,  -502,   549,  -502,   280,  -502,  -502,   596,    71,
    -502,    32,   556,  -502,   557,   268,  -502,  -502,  -502,   717,
    -502,  -502,   355,   558,   599,   600,   601,   602,   612,   613,
    -502,  -502,  -502,   567,  -502,   570,  -502,   578,  -502,   579,
    -502,   580,  -502,   581,  -502,    71,  -502,   616,   607,  -502,
    -502,  -502,   590,  -502,   591,   619,   782,  -502,  -502,   608,
    -502,   616,  -502,    75,   637,  -502,     6,  -502,  -502,  -502,
    -502,   847,  -502,  -502,  -502,  -502,   259,     6,   847,   661,
     262,  -502,     6,  -502,  -502,   615,   617,  -502,  -502,   387,
     360,   624,  -502,  -502,   279,   496,     4,   704,  -502,  -502,
     618,   666,   -28,  -502,  -502,  -502,   387,   628,   669,   677,
     678,   679,   548,   639,  -502,   657,  -502,  -502,   -30,   847,
    -502,  -502,  -502,   318,  -502,  -502,    82,  -502,   651,  -502,
     712,   645,   259,  -502,   713,  -502,   714,   646,  -502,   683,
     847,  -502,     4,   720,    22,  -502,    91,  -502,   718,   725,
    -502,   474,   766,   725,   725,   106,   687,   685,  -502,   847,
     687,  -502,  -502,   646,  -502,   264,  -502,   181,   -30,  -502,
    -502,  -502,  -502,  -502,  -502,   705,  -502,  -502,   108,   688,
     474,  -502,  -502,  -502,  -502
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     3,     4,     7,     8,     9,    10,
     118,    11,    12,     0,    13,     0,    14,     0,    15,     0,
      16,     0,    17,     0,     0,   142,    40,    42,    41,     0,
      36,    33,     0,     0,     0,    79,     0,    75,     0,    83,
       0,    55,     0,    87,     0,    67,   346,   345,   347,   344,
     348,   349,   353,   354,     0,   357,     0,   358,   350,   368,
     369,   382,   381,   373,   374,   375,   351,   370,   380,   367,
       0,     0,     0,   321,     0,     0,     2,   273,   275,   278,
     277,   274,     0,   356,   340,   341,   342,   363,   364,   365,
     366,   372,   371,   144,     1,     6,    48,     0,   117,   120,
       0,    53,     0,    65,     0,    73,     0,    77,     0,    81,
       0,    85,    52,   154,     0,    34,    37,    39,    38,     0,
      31,    45,    24,    57,    22,    57,    26,    57,    30,    57,
      28,    70,    20,    70,     0,     0,     0,     0,   321,   378,
     286,     0,   307,   318,     0,   336,   337,   333,   334,   339,
     338,   326,   327,   328,   325,     0,     0,   319,   323,     0,
     329,     0,   298,   302,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   316,     0,
       0,     0,   379,     0,   158,   157,     0,    47,    50,    51,
      43,   119,    29,   112,    19,   112,    21,   112,    23,   112,
      25,   112,    27,   112,     0,   146,   148,   150,   152,   153,
      35,    32,     0,     0,     0,    80,    76,    84,    56,     0,
      88,    68,   351,     0,     0,     0,     0,     0,   279,   308,
       0,   335,   330,   331,   332,   310,   320,     0,   287,   288,
     290,   292,   293,   295,   296,   297,   303,   304,     0,   291,
     289,   294,   300,   301,   299,   280,   281,   282,   283,   284,
     285,   343,   276,     0,   315,   359,   360,   355,   376,   377,
       0,   118,     0,   156,   155,   131,     0,   111,   129,   128,
     133,     0,     0,    89,   112,    95,    96,    98,   118,    99,
       0,     0,     0,   124,   125,    97,     0,     0,   160,   160,
     160,   160,   143,   154,   154,   154,    46,    61,    58,    64,
      59,    63,    72,    69,     0,   362,   361,     0,   321,   352,
     311,   309,   317,   322,   324,     0,   306,     0,   145,     0,
      49,    90,     0,     0,   137,     0,    54,    94,     0,   105,
     106,   107,   108,   109,   110,     0,     0,     0,   134,   136,
       0,     0,   141,    66,     0,     0,   159,   179,   179,     0,
     147,   151,   153,   149,     0,     0,     0,     0,     0,   305,
      44,   112,   130,   139,   140,   132,   100,     0,   102,   115,
     116,     0,   113,   122,   129,   121,     0,     0,     0,   161,
      74,     0,   195,   178,   195,    86,    60,    62,    71,     0,
     321,   312,    91,   138,   118,     0,   104,   127,   126,   135,
     164,   180,     0,   215,   194,   215,     0,     0,     0,     0,
     175,   176,   177,   172,   162,   163,   166,   167,     0,   183,
     196,     0,     0,   214,     0,   321,   313,   101,   114,     0,
     174,   165,   118,   169,     0,     0,     0,     0,     0,     0,
     193,   186,   187,     0,   188,     0,   189,     0,   190,     0,
     191,     0,   192,     0,   181,   182,   185,   199,     0,   218,
      78,    82,     0,   173,     0,     0,     0,   171,   184,   207,
     197,   198,   201,     0,     0,   216,   221,   314,   272,   168,
     170,     0,   208,   200,   202,   203,     0,   221,     0,     0,
     262,   219,   220,   223,   224,     0,   228,   231,   232,   229,
       0,     0,   242,   233,   112,     0,   213,     0,   217,   271,
       0,     0,   248,   243,   222,   226,     0,     0,   269,   269,
     269,     0,   160,     0,   209,     0,   205,   212,     0,     0,
     261,   250,   249,   229,   230,   225,   262,   235,     0,   252,
       0,   263,   266,   237,     0,   239,     0,   262,   241,     0,
       0,   210,   213,     0,   229,   270,   258,   254,     0,     0,
     264,   267,     0,     0,     0,   245,   384,     0,   206,     0,
     384,   260,   259,   262,   251,   262,   236,   112,     0,   238,
     240,   247,   246,   383,   204,     0,   234,   227,   255,     0,
     268,   211,   257,   256,   265
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -502,  -502,  -502,  -502,   769,  -502,    -2,  -502,  -502,   662,
    -280,  -502,  -502,  -502,   493,  -502,  -277,  -502,  -271,  -502,
     -81,  -223,   403,   410,  -266,  -502,  -261,  -502,   653,  -502,
    -234,  -502,  -226,  -502,  -211,  -502,  -203,  -502,  -201,  -502,
    -200,  -502,  -199,  -502,  -194,  -502,  -212,  -502,   397,  -502,
     504,  -502,  -502,  -502,  -502,  -502,  -502,   400,  -276,  -502,
    -502,  -502,   432,  -502,    80,  -502,     2,  -502,  -502,  -502,
     477,   485,   487,  -113,  -307,  -502,  -502,  -502,  -502,   368,
    -502,  -502,  -502,   431,  -502,  -502,  -502,  -502,   329,   422,
    -502,  -502,  -502,  -502,   339,  -502,  -502,  -502,   269,   238,
     407,  -502,  -502,  -502,   326,   281,  -501,  -502,  -502,   316,
    -502,   301,  -502,  -502,  -502,  -502,  -502,  -502,  -437,  -502,
    -502,  -502,  -492,   -62,  -502,  -502,  -502,  -496,  -425,    -9,
     -55,   649,  -502,  -502,  -502,   650,  -144,  -502,   593,  -502,
    -502,  -502,  -180,   324,  -502,  -502,  -502,  -502,  -502,  -502,
     -75,   -77,   251
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    13,    14,    15,    16,    17,   327,    18,    39,    40,
      19,    20,   206,   207,   208,    21,    22,   213,    23,   139,
     235,   328,   330,   331,    24,   215,    25,   143,   240,   333,
      26,   217,    27,   135,    28,   219,    29,   133,    30,   221,
      31,   137,    32,   223,    33,   141,   302,   391,   303,   304,
     305,   306,   307,   308,   309,   365,   310,   401,   107,   108,
     311,   312,   313,   314,   355,   315,   316,    35,   224,   225,
     226,   227,   228,   209,   375,   376,   430,   444,   445,   446,
     462,   447,   448,   412,   413,   449,   484,   485,   486,   433,
     434,   487,   500,   501,   502,   534,   503,   504,   537,   556,
     452,   453,   517,   506,   521,   522,   523,   524,   563,   525,
     526,   527,   528,   529,   530,   531,   578,   532,   567,   568,
     604,   569,   586,   570,   607,   571,   572,   533,   587,   494,
      87,    88,    89,    90,   283,   154,   166,   167,   168,   169,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   614
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    86,    34,   317,   247,   318,   171,   319,   170,   320,
     229,   321,   377,   378,   379,   349,   332,    34,   460,   287,
      44,   544,   109,    41,   201,   150,   151,   153,   542,   172,
     173,   561,   358,   204,   518,    46,   518,   519,   497,    48,
     557,    43,    50,   110,   293,   112,   114,   116,   118,   205,
     120,   488,   518,   519,   236,    52,   237,    54,   238,   520,
     294,     1,     2,     3,     4,     5,     6,     7,     8,     9,
     511,   171,    45,   170,   512,   520,     3,   464,   465,   466,
     467,   468,   469,   544,   103,   595,   557,    47,   171,   325,
     254,    49,   246,   201,    51,   543,   129,     1,     2,     3,
       4,     5,     6,     7,     8,     9,  -229,    53,   489,    55,
     211,   618,   573,   575,   196,   104,   600,   562,   197,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   111,   153,   113,   115,   117,   119,   438,   121,
     601,    11,   606,   353,   287,    12,   609,   610,   585,    62,
      63,   602,   396,   418,   470,   611,    10,   622,   514,   471,
     612,   397,   472,   354,  -253,   515,   242,   201,   473,   171,
     511,   170,   295,   474,   368,   541,   495,    11,   475,   511,
     295,    12,   295,   623,   388,   342,   296,   -93,   296,   -93,
     -93,   -93,   344,   406,   511,   471,   511,   297,   472,   297,
     229,   382,   382,   295,   473,   476,   369,   403,   -92,   474,
     -92,   -92,   -92,   477,   475,   337,   404,   419,    36,   370,
     297,   371,   329,   299,   298,    37,   298,   293,   478,   122,
     126,   299,   106,   299,    12,   579,   479,   127,   480,   481,
     482,   476,   123,   294,   338,   483,   420,   298,   300,   477,
      38,   171,   295,   170,   299,   131,   300,   -93,   300,   -93,
     -93,   -93,   128,   301,   478,   -93,   437,   -93,    12,   297,
      12,   301,   479,   301,   480,   481,   482,   132,   295,   300,
     389,   483,   342,   109,   296,   -93,   233,   234,   -92,   334,
     249,    12,   250,   335,   301,   297,   298,   440,   441,   442,
     109,   492,    41,   299,   155,   156,   157,   158,   134,   159,
     160,   161,   552,   162,   163,   164,    56,    57,    58,    59,
      60,    61,   298,   443,   146,   353,   535,   334,   300,   299,
     136,   336,   138,   171,   140,   170,   142,   -93,   518,   519,
      12,    68,   165,   301,  -244,   354,  -253,   402,  -343,   281,
     511,   147,   511,   148,   300,   541,   144,   541,   145,    62,
      63,   520,   149,   -93,   199,   285,    12,   286,   171,   301,
     170,  -103,   329,   329,   198,  -103,   242,   202,   402,   203,
    -103,   352,   548,   549,   550,   619,   191,   192,   193,   194,
     195,   196,   124,   125,   210,   197,    56,    57,    58,    59,
      60,    61,    71,    72,   129,   130,   439,   518,   519,   200,
      78,   212,    62,    63,   399,   400,   109,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     178,    77,    78,    79,   182,   183,   193,   194,   195,   196,
     407,   408,    12,   197,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   109,    71,   251,   197,   243,   244,
      80,   214,   252,   253,   359,   360,   361,   362,   363,   364,
     231,    81,   182,   183,    82,   216,    83,   574,   576,   218,
      84,    85,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   220,   222,   232,   197,   239,   197,   245,   539,
    -382,  -381,  -380,   255,   536,   256,    56,    57,    58,    59,
      60,    61,   257,   288,   289,   291,   555,   290,   292,   322,
     323,   324,    62,    63,   553,   326,   147,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     583,    77,    78,    79,   340,   348,   582,   346,   351,   356,
     367,   373,   372,   347,   374,   366,   129,   384,   387,   390,
     591,   597,   392,   385,   554,   393,   386,   394,   395,   398,
      80,   409,   410,   411,   415,   421,   423,   425,   426,   352,
     616,    81,  -123,   431,    82,   429,    83,   427,   428,   432,
      84,    85,   182,   183,   436,   450,   620,    56,    57,    58,
      59,    60,    61,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   451,    62,    63,   197,   456,   455,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,   458,    77,    78,    79,   182,   183,   459,   457,   463,
     490,   491,    45,    47,    49,    51,   496,   189,   190,   191,
     192,   193,   194,   195,   196,    53,    55,   111,   197,   499,
     113,    80,    56,    57,    58,    59,    60,    61,   115,   117,
     119,   121,    81,   505,   507,    82,   152,    83,    62,    63,
     508,    84,    85,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,   511,    77,    78,    79,
     182,   183,   509,   516,   540,   545,   551,   558,   546,   560,
     559,   565,   566,   190,   191,   192,   193,   194,   195,   196,
     566,   566,   577,   197,   580,   581,    80,    56,    57,    58,
      59,    60,    61,   588,   589,   590,   593,    81,   594,   541,
      82,   341,    83,    62,    63,   599,    84,    85,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,   603,    77,    78,    79,   182,   183,   596,   605,   608,
     613,   615,   624,   621,   105,   350,   230,   416,   422,   191,
     192,   193,   194,   195,   196,   417,   241,   424,   197,   405,
     380,    80,    56,    57,    58,    59,    60,    61,   357,   414,
     383,   381,    81,   461,   498,    82,   493,    83,    62,    63,
     598,    84,    85,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,   435,    77,    78,    79,
     513,   592,   454,   538,   584,   547,   282,   564,   284,   343,
       0,   617,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    56,    57,    58,
      59,    60,    61,     0,     0,     0,     0,    81,     0,     0,
      82,   510,    83,    62,    63,     0,    84,    85,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,     0,    77,    78,    79,   176,   177,   178,     0,     0,
       0,   182,   183,     0,     0,     0,     0,     0,     0,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,    80,     0,     0,   197,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,    82,     0,    83,     0,     0,
       0,    84,    85,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,     0,     0,     0,     0,   184,     0,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,     0,     0,     0,   197,     0,     0,     0,     0,     0,
       0,   339,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,     0,     0,     0,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
       0,     0,     0,   197,     0,     0,     0,   248,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,     0,     0,
       0,     0,   184,   345,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,     0,     0,     0,   197,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
       0,     0,     0,     0,   184,     0,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,     0,
       0,   197,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,     0,     0,     0,     0,   184,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
       0,     0,     0,   197,   174,   175,   176,   177,   178,   179,
       0,   181,   182,   183,     0,     0,     0,     0,     0,     0,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,     0,     0,   197,   174,   175,   176,   177,
     178,   179,     0,     0,   182,   183,     0,     0,     0,     0,
       0,     0,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,     0,     0,   197,   174,   175,
     176,   177,   178,     0,     0,     0,   182,   183,     0,     0,
       0,     0,     0,     0,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,     0,     0,     0,   197
};

static const yytype_int16 yycheck[] =
{
       2,    10,     0,   215,   148,   217,    83,   219,    83,   221,
     123,   223,   319,   320,   321,   291,   239,    15,   443,   199,
       1,   522,    20,    53,   101,    80,    81,    82,   520,    84,
      85,    59,   308,    57,    30,     1,    30,    31,   463,     1,
     536,    97,     1,     1,    57,     1,     1,     1,     1,    73,
       1,    19,    30,    31,   135,     1,   137,     1,   139,    53,
      73,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      98,   148,    53,   148,   499,    53,     5,     6,     7,     8,
       9,    10,    11,   584,    54,   577,   582,    53,   165,   102,
     165,    53,   147,   170,    53,   520,    92,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   100,    53,    76,    53,
     108,   603,   549,   550,    88,     0,    94,   542,    92,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   100,   198,   100,   100,   100,   100,   424,   100,
      59,    93,   589,    35,   334,    97,   593,   594,    76,    36,
      37,   586,    93,   386,    93,    59,    72,    59,    93,   449,
     595,   102,   449,    55,    92,   100,    53,   254,   449,   256,
      98,   256,     9,   449,    53,   103,   462,    93,   449,    98,
       9,    97,     9,   618,   338,   250,    15,    14,    15,    16,
      17,    18,   257,    85,    98,   485,    98,    26,   485,    26,
     323,   324,   325,     9,   485,   449,    85,    44,    14,   485,
      16,    17,    18,   449,   485,    71,    53,    71,    53,    98,
      26,   100,   234,    60,    53,    60,    53,    57,   449,    93,
      53,    60,    95,    60,    97,   552,   449,    60,   449,   449,
     449,   485,    95,    73,   100,   449,   100,    53,    85,   485,
      85,   338,     9,   338,    60,    54,    85,    14,    85,    16,
      17,    18,    85,   100,   485,    94,   420,    94,    97,    26,
      97,   100,   485,   100,   485,   485,   485,    94,     9,    85,
     345,   485,   347,   291,    15,    16,    12,    13,    94,    92,
      99,    97,   101,    96,   100,    26,    53,    27,    28,    29,
     308,   455,    53,    60,    46,    47,    48,    49,    94,    51,
      52,    53,   534,    55,    56,    57,    20,    21,    22,    23,
      24,    25,    53,    53,    71,    35,    77,    92,    85,    60,
      94,    96,    94,   420,    94,   420,    94,    94,    30,    31,
      97,    45,    84,   100,    92,    55,    92,   366,    95,    53,
      98,    98,    98,   100,    85,   103,    95,   103,    95,    36,
      37,    53,    53,    94,    92,    42,    97,    44,   455,   100,
     455,    93,   384,   385,    95,    97,    53,    53,   397,    98,
     102,   103,    32,    33,    34,   607,    83,    84,    85,    86,
      87,    88,    92,    93,    93,    92,    20,    21,    22,    23,
      24,    25,    48,    49,    92,    93,   425,    30,    31,    55,
      56,    94,    36,    37,    38,    39,   424,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      65,    55,    56,    57,    69,    70,    85,    86,    87,    88,
     370,   371,    97,    92,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,   462,    48,    49,    92,   144,   145,
      84,    94,    55,    56,    20,    21,    22,    23,    24,    25,
      53,    95,    69,    70,    98,    94,   100,   549,   550,    94,
     104,   105,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    94,    94,    98,    92,    12,    92,    53,   518,
      53,    53,    53,    94,   516,   101,    20,    21,    22,    23,
      24,    25,    76,    53,    53,    96,   535,    54,    93,    96,
      93,   101,    36,    37,    38,    99,    98,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     559,    55,    56,    57,    94,    99,   558,    96,    76,    94,
      92,    94,    93,   101,    16,   102,    92,    13,    53,    93,
     572,   580,    53,   101,    78,    55,   101,    35,    94,    53,
      84,    76,    94,    14,    94,    94,    55,    95,    93,   103,
     599,    95,    92,    76,    98,    94,   100,    99,    99,    17,
     104,   105,    69,    70,    53,    76,   608,    20,    21,    22,
      23,    24,    25,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    18,    36,    37,    92,    94,   100,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    96,    55,    56,    57,    69,    70,    98,    93,    53,
      94,    94,    53,    53,    53,    53,    98,    81,    82,    83,
      84,    85,    86,    87,    88,    53,    53,   100,    92,    53,
     100,    84,    20,    21,    22,    23,    24,    25,   100,   100,
     100,   100,    95,    76,    94,    98,    99,   100,    36,    37,
      99,   104,   105,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    98,    55,    56,    57,
      69,    70,    93,    76,    53,   100,    92,    13,   101,    53,
     102,    93,    53,    82,    83,    84,    85,    86,    87,    88,
      53,    53,    53,    92,    95,    78,    84,    20,    21,    22,
      23,    24,    25,    92,    32,   100,    33,    95,    34,   103,
      98,    99,   100,    36,    37,    35,   104,   105,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    53,    55,    56,    57,    69,    70,    94,    53,    13,
      93,    96,    94,    78,    15,   292,   124,   384,   391,    83,
      84,    85,    86,    87,    88,   385,   143,   397,    92,   367,
     323,    84,    20,    21,    22,    23,    24,    25,   304,   378,
     325,   324,    95,   445,   485,    98,    99,   100,    36,    37,
     582,   104,   105,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   414,    55,    56,    57,
     501,   572,   435,   517,   563,   529,   197,   546,   198,   256,
      -1,   600,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    95,    -1,    -1,
      98,    99,   100,    36,    37,    -1,   104,   105,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    84,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    98,    -1,   100,    -1,    -1,
      -1,   104,   105,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    96,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    92,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    -1,
      -1,    92,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    -1,    -1,    92,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    -1,    -1,    92,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    92,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    -1,    -1,    92
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      72,    93,    97,   107,   108,   109,   110,   111,   113,   116,
     117,   121,   122,   124,   130,   132,   136,   138,   140,   142,
     144,   146,   148,   150,   172,   173,    53,    60,    85,   114,
     115,    53,   112,    97,     1,    53,     1,    53,     1,    53,
       1,    53,     1,    53,     1,    53,    20,    21,    22,    23,
      24,    25,    36,    37,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    55,    56,    57,
      84,    95,    98,   100,   104,   105,   235,   236,   237,   238,
     239,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,    54,     0,   110,    95,   164,   165,   172,
       1,   100,     1,   100,     1,   100,     1,   100,     1,   100,
       1,   100,    93,    95,    92,    93,    53,    60,    85,    92,
      93,    54,    94,   143,    94,   139,    94,   147,    94,   125,
      94,   151,    94,   133,    95,    95,    71,    98,   100,    53,
     236,   236,    99,   236,   241,    46,    47,    48,    49,    51,
      52,    53,    55,    56,    57,    84,   242,   243,   244,   245,
     256,   257,   236,   236,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    75,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    92,    95,    92,
      55,   257,    53,    98,    57,    73,   118,   119,   120,   179,
      93,   172,    94,   123,    94,   131,    94,   137,    94,   141,
      94,   145,    94,   149,   174,   175,   176,   177,   178,   179,
     115,    53,    98,    12,    13,   126,   126,   126,   126,    12,
     134,   134,    53,   249,   249,    53,   236,   242,    96,    99,
     101,    49,    55,    56,   256,    94,   101,    76,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,    53,   237,   240,   241,    42,    44,   248,    53,    53,
      54,    96,    93,    57,    73,     9,    15,    26,    53,    60,
      85,   100,   152,   154,   155,   156,   157,   158,   159,   160,
     162,   166,   167,   168,   169,   171,   172,   152,   152,   152,
     152,   152,    96,    93,   101,   102,    99,   112,   127,   112,
     128,   129,   127,   135,    92,    96,    96,    71,   100,    99,
      94,    99,   236,   244,   236,    76,    96,   101,    99,   164,
     120,    76,   103,    35,    55,   170,    94,   156,   164,    20,
      21,    22,    23,    24,    25,   161,   102,    92,    53,    85,
      98,   100,    93,    94,    16,   180,   181,   180,   180,   180,
     176,   178,   179,   177,    13,   101,   101,    53,   242,   236,
      93,   153,    53,    55,    35,    94,    93,   102,    53,    38,
      39,   163,   235,    44,    53,   168,    85,   170,   170,    76,
      94,    14,   189,   190,   189,    94,   128,   129,   127,    71,
     100,    94,   154,    55,   163,    95,    93,    99,    99,    94,
     182,    76,    17,   195,   196,   195,    53,   242,   164,   235,
      27,    28,    29,    53,   183,   184,   185,   187,   188,   191,
      76,    18,   206,   207,   206,   100,    94,    93,    96,    98,
     234,   185,   186,    53,     6,     7,     8,     9,    10,    11,
      93,   116,   122,   124,   130,   132,   136,   138,   140,   142,
     144,   146,   148,   150,   192,   193,   194,   197,    19,    76,
      94,    94,   242,    99,   235,   164,    98,   234,   194,    53,
     198,   199,   200,   202,   203,    76,   209,    94,    99,    93,
      99,    98,   234,   200,    93,   100,    76,   208,    30,    31,
      53,   210,   211,   212,   213,   215,   216,   217,   218,   219,
     220,   221,   223,   233,   201,    77,   112,   204,   210,   235,
      53,   103,   228,   234,   212,   100,   101,   215,    32,    33,
      34,    92,   152,    38,    78,   235,   205,   233,    13,   102,
      53,    59,   234,   214,   217,    93,    53,   224,   225,   227,
     229,   231,   232,   224,   229,   224,   229,    53,   222,   180,
      95,    78,   112,   235,   211,    76,   228,   234,    92,    32,
     100,   112,   204,    33,    34,   228,    94,   235,   205,    35,
      94,    59,   234,    53,   226,    53,   224,   230,    13,   224,
     224,    59,   234,    93,   258,    96,   235,   258,   228,   152,
     112,    78,    59,   234,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   111,   112,   112,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     119,   120,   121,   123,   122,   125,   124,   126,   126,   126,
     126,   127,   128,   128,   129,   131,   130,   133,   132,   134,
     134,   135,   135,   137,   136,   139,   138,   141,   140,   143,
     142,   145,   144,   147,   146,   149,   148,   151,   150,   152,
     153,   152,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   161,   161,   161,   161,   161,
     161,   162,   162,   163,   163,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   168,   168,   168,   168,   169,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   170,
     170,   171,   172,   172,   173,   173,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   179,   179,   180,
     180,   182,   181,   183,   183,   184,   184,   186,   185,   187,
     187,   187,   187,   187,   187,   188,   188,   188,   189,   189,
     191,   190,   192,   192,   193,   193,   194,   194,   194,   194,
     194,   194,   194,   194,   195,   195,   197,   196,   198,   198,
     199,   199,   200,   201,   200,   202,   202,   203,   203,   204,
     204,   204,   205,   205,   206,   206,   208,   207,   209,   207,
     210,   210,   211,   211,   212,   212,   214,   213,   215,   215,
     216,   216,   217,   217,   218,   219,   219,   219,   219,   219,
     219,   220,   220,   221,   221,   222,   222,   222,   223,   223,
     223,   224,   224,   225,   225,   226,   226,   226,   227,   227,
     227,   228,   228,   229,   230,   229,   231,   231,   231,   232,
     232,   233,   234,   235,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   237,   238,   238,   238,
     239,   239,   239,   239,   239,   240,   240,   241,   241,   242,
     242,   242,   243,   243,   244,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     246,   246,   246,   247,   247,   247,   247,   247,   247,   247,
     247,   248,   248,   248,   248,   249,   249,   250,   250,   250,
     250,   250,   250,   251,   251,   251,   251,   252,   253,   253,
     254,   254,   254,   255,   255,   255,   256,   256,   256,   256,
     257,   257,   257,   258,   258
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       1,     1,     1,     3,     6,     3,     5,     1,     0,     3,
       1,     1,     2,     0,     5,     0,     4,     0,     2,     2,
       4,     1,     3,     1,     1,     0,     5,     0,     4,     2,
       0,     3,     1,     0,     6,     0,     4,     0,     9,     0,
       4,     0,     9,     0,     4,     0,     6,     0,     4,     1,
       0,     4,     1,     0,     2,     1,     1,     1,     1,     1,
       3,     6,     3,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     4,     1,     1,     1,     0,     2,
       1,     3,     3,     3,     1,     1,     4,     4,     1,     1,
       3,     1,     3,     1,     2,     4,     2,     1,     3,     2,
       2,     2,     1,     4,     2,     5,     1,     3,     1,     3,
       1,     3,     1,     1,     0,     2,     2,     1,     1,     1,
       0,     0,     4,     1,     0,     2,     1,     0,     4,     2,
       4,     3,     1,     3,     2,     1,     1,     1,     1,     0,
       0,     4,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     4,     1,     0,
       2,     1,     2,     0,     7,     4,     6,     1,     2,     2,
       3,     6,     1,     0,     1,     0,     0,     5,     0,     4,
       1,     0,     2,     1,     1,     3,     0,     6,     1,     0,
       3,     1,     1,     1,     6,     3,     5,     3,     5,     3,
       5,     3,     1,     2,     1,     2,     3,     3,     2,     3,
       3,     3,     1,     1,     2,     2,     3,     3,     2,     3,
       3,     2,     0,     1,     0,     5,     1,     2,     4,     0,
       2,     2,     3,     1,     1,     1,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     2,     3,     3,     5,     4,     2,     3,     4,
       3,     4,     6,     8,    10,     1,     0,     3,     1,     1,
       2,     0,     3,     1,     3,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     3,     1,     1,     1,     3,
       3,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     2,
       1,     1,     1,     1,     0
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_int8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,    17,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
      11,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,   351,     0,   273,     0,   340,     0,   262,     0,   269,
       0,   269,     0,   269,     0,   262,     0,   262,     0
};


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

# define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)


YYSTYPE yylval;
YYLTYPE yylloc;

int yynerrs;
int yychar;

enum { YYENOMEM = -2 };

typedef enum { yyok, yyaccept, yyabort, yyerr, yynomem } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif

/** State numbers. */
typedef int yy_state_t;

/** Rule numbers. */
typedef int yyRuleNum;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState
{
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yyval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yy_state_t yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  YYPTRDIFF_T yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yyval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet
{
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  YYPTRDIFF_T yysize;
  YYPTRDIFF_T yycapacity;
};

struct yySemanticOption
{
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  YYPTRDIFF_T yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (np, yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

/** Accessing symbol of state YYSTATE.  */
static inline yysymbol_kind_t
yy_accessing_symbol (yy_state_t yystate)
{
  return YY_CAST (yysymbol_kind_t, yystos[yystate]);
}

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IMPORT", "PACKAGE",
  "PROPERTY", "MODULE", "SIMPLE", "NETWORK", "CHANNEL", "MODULEINTERFACE",
  "CHANNELINTERFACE", "EXTENDS", "LIKE", "TYPES", "PARAMETERS", "GATES",
  "SUBMODULES", "CONNECTIONS", "ALLOWUNCONNECTED", "DOUBLE_", "INT_",
  "STRING_", "BOOL_", "OBJECT_", "XML_", "VOLATILE_", "INPUT_", "OUTPUT_",
  "INOUT_", "IF", "FOR", "RIGHTARROW", "LEFTARROW", "DBLARROW", "TO",
  "THIS_", "PARENT", "DEFAULT", "ASK", "CONST_", "SIZEOF", "INDEX_",
  "EXISTS", "TYPENAME", "XMLDOC", "TRUE_", "FALSE_", "NAN_", "INF_",
  "UNDEFINED_", "NULLPTR_", "NULL_", "NAME", "PROPNAME", "INTCONSTANT",
  "REALCONSTANT", "STRINGCONSTANT", "CHARCONSTANT", "PLUSPLUS",
  "DOUBLEASTERISK", "EQ", "NE", "GE", "LE", "SPACESHIP", "AND", "OR",
  "XOR", "SHIFT_LEFT", "SHIFT_RIGHT", "DOUBLECOLON", "EXPRESSION_SELECTOR",
  "COMMONCHAR", "INVALID_CHAR", "'?'", "':'", "'<'", "'>'", "MATCH", "'|'",
  "'#'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMIN_", "NEG_",
  "NOT_", "'.'", "';'", "'}'", "'('", "')'", "'@'", "'['", "']'", "'{'",
  "','", "'='", "'$'", "'!'", "'~'", "$accept", "startsymbol", "nedfile",
  "definitions", "definition", "packagedeclaration", "dottedname",
  "import", "importspec", "importname", "propertydecl",
  "propertydecl_header", "opt_propertydecl_keys", "propertydecl_keys",
  "propertydecl_key", "fileproperty", "channeldefinition", "$@1",
  "channelheader", "$@2", "opt_inheritance", "extendsname", "likenames",
  "likename", "channelinterfacedefinition", "$@3",
  "channelinterfaceheader", "$@4", "opt_interfaceinheritance",
  "extendsnames", "simplemoduledefinition", "$@5", "simplemoduleheader",
  "$@6", "compoundmoduledefinition", "$@7", "compoundmoduleheader", "$@8",
  "networkdefinition", "$@9", "networkheader", "$@10",
  "moduleinterfacedefinition", "$@11", "moduleinterfaceheader", "$@12",
  "opt_paramblock", "$@13", "opt_params", "params", "paramsitem", "param",
  "param_typenamevalue", "param_typename", "pattern_value", "paramtype",
  "opt_volatile", "paramvalue", "opt_inline_properties",
  "inline_properties", "pattern", "pattern2", "pattern_elem",
  "pattern_name", "pattern_index", "property", "property_namevalue",
  "property_name", "opt_property_keys", "property_keys", "property_key",
  "property_values", "property_value", "property_literal", "opt_gateblock",
  "gateblock", "$@14", "opt_gates", "gates", "gate", "$@15",
  "gate_typenamesize", "gatetype", "opt_typeblock", "typeblock", "$@16",
  "opt_localtypes", "localtypes", "localtype", "opt_submodblock",
  "submodblock", "$@17", "opt_submodules", "submodules", "submodule",
  "$@18", "submoduleheader", "submodulename", "likeexpr", "opt_condition",
  "opt_connblock", "connblock", "$@19", "$@20", "opt_connections",
  "connections", "connectionsitem", "connectiongroup", "$@21",
  "opt_loops_and_conditions", "loops_and_conditions", "loop_or_condition",
  "loop", "connection", "leftgatespec", "leftmod", "leftgate",
  "parentleftgate", "rightgatespec", "rightmod", "rightgate",
  "parentrightgate", "opt_subgate", "channelspec", "$@22",
  "channelspec_header", "opt_channelname", "condition", "vector",
  "expression", "expr", "functioncall", "array", "object", "opt_exprlist",
  "exprlist", "opt_keyvaluelist", "keyvaluelist", "keyvalue", "key",
  "simple_expr", "funcname", "qname_elem", "qname", "operator", "literal",
  "stringliteral", "boolliteral", "numliteral", "otherliteral", "quantity",
  "realconstant_ext", "opt_semicolon", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yysymbol_kind_t
yylhsNonterm (yyRuleNum yyrule)
{
  return YY_CAST (yysymbol_kind_t, yyr1[yyrule]);
}

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */



/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, omnetpp::nedxml::ParseContext *np)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (np);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, omnetpp::nedxml::ParseContext *np)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, np);
  YYFPRINTF (yyo, ")");
}

# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Kind, Value, Location, np);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule, omnetpp::nedxml::ParseContext *np);

# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

static void yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_REDUCE_PRINT(Args)

#endif /* !YYDEBUG */



/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yyval = s->yysemantics.yyval;
      else
        /* The effect of using yyval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yysymbol_kind_t
yygetToken (int *yycharp, omnetpp::nedxml::ParseContext *np)
{
  yysymbol_kind_t yytoken;
  YY_USE (np);
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token\n"));
      *yycharp = yylex ();
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT, yynomem for YYNOMEM.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyrule, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp, YYPTRDIFF_T yyk,
              YYSTYPE* yyvalp, YYLTYPE *yylocp, omnetpp::nedxml::ParseContext *np)
{
  const yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow = 1;
  YY_USE (yyvalp);
  YY_USE (yylocp);
  YY_USE (np);
  YY_USE (yyk);
  YY_USE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYNOMEM
# define YYNOMEM return yynomem
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (np, YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yyval;
  /* Default location. */
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;
  /* If yyk == -1, we are running a deferred action on a temporary
     stack.  In that case, YY_REDUCE_PRINT must not play with YYFILL,
     so pretend the stack is "normal". */
  YY_REDUCE_PRINT ((yynormal || yyk == -1, yyvsp, yyk, yyrule, np));
  switch (yyrule)
    {
  case 19: /* definition: channelinterfaceheader error '}'  */
#line 244 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2282 "ned2.tab.cc"
    break;

  case 20: /* definition: CHANNELINTERFACE error '}'  */
#line 246 "ned2.y"
                { restoreGlobalParserState(); }
#line 2288 "ned2.tab.cc"
    break;

  case 21: /* definition: simplemoduleheader error '}'  */
#line 248 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2294 "ned2.tab.cc"
    break;

  case 22: /* definition: SIMPLE error '}'  */
#line 250 "ned2.y"
                { restoreGlobalParserState(); }
#line 2300 "ned2.tab.cc"
    break;

  case 23: /* definition: compoundmoduleheader error '}'  */
#line 252 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2306 "ned2.tab.cc"
    break;

  case 24: /* definition: MODULE error '}'  */
#line 254 "ned2.y"
                { restoreGlobalParserState(); }
#line 2312 "ned2.tab.cc"
    break;

  case 25: /* definition: networkheader error '}'  */
#line 256 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2318 "ned2.tab.cc"
    break;

  case 26: /* definition: NETWORK error '}'  */
#line 258 "ned2.y"
                { restoreGlobalParserState(); }
#line 2324 "ned2.tab.cc"
    break;

  case 27: /* definition: moduleinterfaceheader error '}'  */
#line 260 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2330 "ned2.tab.cc"
    break;

  case 28: /* definition: MODULEINTERFACE error '}'  */
#line 262 "ned2.y"
                { restoreGlobalParserState(); }
#line 2336 "ned2.tab.cc"
    break;

  case 29: /* definition: channelheader error '}'  */
#line 264 "ned2.y"
                { storePos(np,  ps.component, (*yylocp)); restoreGlobalParserState(); }
#line 2342 "ned2.tab.cc"
    break;

  case 30: /* definition: CHANNEL error '}'  */
#line 266 "ned2.y"
                { restoreGlobalParserState(); }
#line 2348 "ned2.tab.cc"
    break;

  case 31: /* packagedeclaration: PACKAGE dottedname ';'  */
#line 271 "ned2.y"
                {
                  ps.package = (PackageElement *)createNedElementWithTag(np, NED_PACKAGE, ps.nedfile);
                  ps.package->setName(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  storePos(np,  ps.package,(*yylocp));
                  storeBannerAndRightComments(np, ps.package,(*yylocp));
                }
#line 2359 "ned2.tab.cc"
    break;

  case 34: /* import: IMPORT importspec ';'  */
#line 289 "ned2.y"
                {
                  ps.import = (ImportElement *)createNedElementWithTag(np, NED_IMPORT, ps.nedfile);
                  ps.import->setImportSpec(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  storePos(np,  ps.import,(*yylocp));
                  storeBannerAndRightComments(np, ps.import,(*yylocp));
                }
#line 2370 "ned2.tab.cc"
    break;

  case 43: /* propertydecl: propertydecl_header opt_inline_properties ';'  */
#line 316 "ned2.y"
                {
                    storePos(np,  ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(np, ps.propertydecl,(*yylocp));
                }
#line 2379 "ned2.tab.cc"
    break;

  case 44: /* propertydecl: propertydecl_header '(' opt_propertydecl_keys ')' opt_inline_properties ';'  */
#line 321 "ned2.y"
                {
                    storePos(np,  ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(np, ps.propertydecl,(*yylocp));
                }
#line 2388 "ned2.tab.cc"
    break;

  case 45: /* propertydecl_header: PROPERTY '@' PROPNAME  */
#line 329 "ned2.y"
                {
                  ps.propertydecl = (PropertyDeclElement *)createNedElementWithTag(np, NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2397 "ned2.tab.cc"
    break;

  case 46: /* propertydecl_header: PROPERTY '@' PROPNAME '[' ']'  */
#line 334 "ned2.y"
                {
                  ps.propertydecl = (PropertyDeclElement *)createNedElementWithTag(np, NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  ps.propertydecl->setIsArray(true);
                }
#line 2407 "ned2.tab.cc"
    break;

  case 51: /* propertydecl_key: property_literal  */
#line 353 "ned2.y"
                {
                  ps.propkey = (PropertyKeyElement *)createNedElementWithTag(np, NED_PROPERTY_KEY, ps.propertydecl);
                  ps.propkey->setName(opp_trim(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc))).c_str());
                  storePos(np,  ps.propkey, (*yylocp));
                }
#line 2417 "ned2.tab.cc"
    break;

  case 52: /* fileproperty: property_namevalue ';'  */
#line 365 "ned2.y"
                {
                  storePos(np,  ps.property, (*yylocp));
                  storeBannerAndRightComments(np, ps.property,(*yylocp));
                }
#line 2426 "ned2.tab.cc"
    break;

  case 53: /* $@1: %empty  */
#line 376 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2438 "ned2.tab.cc"
    break;

  case 54: /* channeldefinition: channelheader '{' $@1 opt_paramblock '}'  */
#line 385 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np,  ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2453 "ned2.tab.cc"
    break;

  case 55: /* $@2: %empty  */
#line 399 "ned2.y"
                {
                  ps.component = (ChannelElement *)createNedElementWithTag(np, NED_CHANNEL, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile);
                  ((ChannelElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2462 "ned2.tab.cc"
    break;

  case 56: /* channelheader: CHANNEL NAME $@2 opt_inheritance  */
#line 404 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2468 "ned2.tab.cc"
    break;

  case 61: /* extendsname: dottedname  */
#line 416 "ned2.y"
                {
                  ps.extends = (ExtendsElement *)createNedElementWithTag(np, NED_EXTENDS, ps.component);
                  ps.extends->setName(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                  storePos(np,  ps.extends, (*yylocp));
                }
#line 2478 "ned2.tab.cc"
    break;

  case 64: /* likename: dottedname  */
#line 430 "ned2.y"
                {
                  ps.interfacename = (InterfaceNameElement *)createNedElementWithTag(np, NED_INTERFACE_NAME, ps.component);
                  ps.interfacename->setName(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                  storePos(np, ps.interfacename, (*yylocp));
                }
#line 2488 "ned2.tab.cc"
    break;

  case 65: /* $@3: %empty  */
#line 442 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2500 "ned2.tab.cc"
    break;

  case 66: /* channelinterfacedefinition: channelinterfaceheader '{' $@3 opt_paramblock '}'  */
#line 451 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2515 "ned2.tab.cc"
    break;

  case 67: /* $@4: %empty  */
#line 465 "ned2.y"
                {
                  ps.component = (ChannelInterfaceElement *)createNedElementWithTag(np, NED_CHANNEL_INTERFACE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile);
                  ((ChannelInterfaceElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2524 "ned2.tab.cc"
    break;

  case 68: /* channelinterfaceheader: CHANNELINTERFACE NAME $@4 opt_interfaceinheritance  */
#line 470 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2530 "ned2.tab.cc"
    break;

  case 73: /* $@5: %empty  */
#line 488 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2542 "ned2.tab.cc"
    break;

  case 74: /* simplemoduledefinition: simplemoduleheader '{' $@5 opt_paramblock opt_gateblock '}'  */
#line 498 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2557 "ned2.tab.cc"
    break;

  case 75: /* $@6: %empty  */
#line 512 "ned2.y"
                {
                  ps.component = (SimpleModuleElement *)createNedElementWithTag(np, NED_SIMPLE_MODULE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile );
                  ((SimpleModuleElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2566 "ned2.tab.cc"
    break;

  case 76: /* simplemoduleheader: SIMPLE NAME $@6 opt_inheritance  */
#line 517 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2572 "ned2.tab.cc"
    break;

  case 77: /* $@7: %empty  */
#line 525 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2584 "ned2.tab.cc"
    break;

  case 78: /* compoundmoduledefinition: compoundmoduleheader '{' $@7 opt_paramblock opt_gateblock opt_typeblock opt_submodblock opt_connblock '}'  */
#line 538 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2599 "ned2.tab.cc"
    break;

  case 79: /* $@8: %empty  */
#line 552 "ned2.y"
                {
                  ps.component = (CompoundModuleElement *)createNedElementWithTag(np, NED_COMPOUND_MODULE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2608 "ned2.tab.cc"
    break;

  case 80: /* compoundmoduleheader: MODULE NAME $@8 opt_inheritance  */
#line 557 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2614 "ned2.tab.cc"
    break;

  case 81: /* $@9: %empty  */
#line 565 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)ps.component->getFirstChildWithTag(NED_PARAMETERS); // networkheader already created it for @isNetwork
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2626 "ned2.tab.cc"
    break;

  case 82: /* networkdefinition: networkheader '{' $@9 opt_paramblock opt_gateblock opt_typeblock opt_submodblock opt_connblock '}'  */
#line 578 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2641 "ned2.tab.cc"
    break;

  case 83: /* $@10: %empty  */
#line 592 "ned2.y"
                {
                  ps.component = (CompoundModuleElement *)createNedElementWithTag(np, NED_COMPOUND_MODULE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2650 "ned2.tab.cc"
    break;

  case 84: /* networkheader: NETWORK NAME $@10 opt_inheritance  */
#line 597 "ned2.y"
                {
                  setIsNetworkProperty(np, ps.component);
                  storeBannerAndRightComments(np, ps.component,(*yylocp));
                }
#line 2659 "ned2.tab.cc"
    break;

  case 85: /* $@11: %empty  */
#line 608 "ned2.y"
                {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 2671 "ned2.tab.cc"
    break;

  case 86: /* moduleinterfacedefinition: moduleinterfaceheader '{' $@11 opt_paramblock opt_gateblock '}'  */
#line 618 "ned2.y"
                {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(np, ps.component, (*yylocp));
                  storePos(np, ps.component, (*yylocp));
                  storeTrailingComment(np, ps.component,(*yylocp));
                }
#line 2686 "ned2.tab.cc"
    break;

  case 87: /* $@12: %empty  */
#line 632 "ned2.y"
                {
                  ps.component = (ModuleInterfaceElement *)createNedElementWithTag(np, NED_MODULE_INTERFACE, ps.inTypes ? (ASTNode *)ps.types : (ASTNode *)ps.nedfile);
                  ((ModuleInterfaceElement *)ps.component)->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 2695 "ned2.tab.cc"
    break;

  case 88: /* moduleinterfaceheader: MODULEINTERFACE NAME $@12 opt_interfaceinheritance  */
#line 637 "ned2.y"
                { storeBannerAndRightComments(np, ps.component,(*yylocp)); }
#line 2701 "ned2.tab.cc"
    break;

  case 89: /* opt_paramblock: opt_params  */
#line 645 "ned2.y"
                {
                  storePos(np, ps.parameters, (*yylocp));
                  if (!ps.parameters->getFirstChild()) { // delete "parameters" element if empty
                      ps.parameters->getParent()->removeChild(ps.parameters);
                      delete ps.parameters;
                  }
                }
#line 2713 "ned2.tab.cc"
    break;

  case 90: /* $@13: %empty  */
#line 653 "ned2.y"
                {
                  ps.parameters->setIsImplicit(false);
                  storeBannerAndRightComments(np, ps.parameters,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2722 "ned2.tab.cc"
    break;

  case 91: /* opt_paramblock: PARAMETERS ':' $@13 opt_params  */
#line 658 "ned2.y"
                { storePos(np, ps.parameters, (*yylocp)); }
#line 2728 "ned2.tab.cc"
    break;

  case 100: /* param_typenamevalue: param_typename opt_inline_properties ';'  */
#line 686 "ned2.y"
                {
                  ps.propertyscope.pop();
                  storePos(np, ps.param, (*yylocp));
                  storeBannerAndRightComments(np, ps.param,(*yylocp));
                }
#line 2738 "ned2.tab.cc"
    break;

  case 101: /* param_typenamevalue: param_typename opt_inline_properties '=' paramvalue opt_inline_properties ';'  */
#line 692 "ned2.y"
                {
                  ps.propertyscope.pop();
                  if (!isEmpty(ps.exprPos))  // note: $4 cannot be checked, as it's always nullptr when expression parsing is off
                      addExpression(np, ps.param, "value",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval);
                  else {
                      // Note: "=default" is currently not accepted in NED files, because
                      // it would be complicated to support in the Inifile Editor.
                      if (ps.isDefault)
                          np->getErrors()->addError(ps.param,"applying the default value (\"=default\" syntax) is not supported in NED files");
                  }
                  ps.param->setIsDefault(ps.isDefault);
                  storePos(np, ps.param, (*yylocp));
                  storeBannerAndRightComments(np, ps.param,(*yylocp));
                }
#line 2757 "ned2.tab.cc"
    break;

  case 102: /* param_typename: opt_volatile paramtype NAME  */
#line 710 "ned2.y"
                {
                  ps.param = addParameter(np, ps.parameters, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.param->setType(ps.paramType);
                  ps.param->setIsVolatile(ps.isVolatile);
                  ps.propertyscope.push(ps.param);
                }
#line 2768 "ned2.tab.cc"
    break;

  case 103: /* param_typename: NAME  */
#line 717 "ned2.y"
                {
                  ps.param = addParameter(np, ps.parameters, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.propertyscope.push(ps.param);
                }
#line 2777 "ned2.tab.cc"
    break;

  case 104: /* pattern_value: pattern '=' paramvalue ';'  */
#line 725 "ned2.y"
                {
                  ps.param = addParameter(np, ps.parameters, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc));
                  ps.param->setIsPattern(true);
                  const char *patt = ps.param->getName();
                  if (strchr(patt,' ') || strchr(patt,'\t') || strchr(patt,'\n'))
                      np->getErrors()->addError(ps.param,"parameter name patterns may not contain whitespace");
                  if (!isEmpty(ps.exprPos))  // note: $3 cannot be checked, as it's always nullptr when expression parsing is off
                      addExpression(np, ps.param, "value",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval);
                  else {
                      // Note: "=default" is currently not accepted in NED files, because
                      // it would be complicated to support in the Inifile Editor.
                      if (ps.isDefault)
                          np->getErrors()->addError(ps.param,"applying the default value (\"=default\" syntax) is not supported in NED files");
                  }
                  ps.param->setIsDefault(ps.isDefault);
                  storePos(np, ps.param, (*yylocp));
                  storeBannerAndRightComments(np, ps.param,(*yylocp));
                }
#line 2800 "ned2.tab.cc"
    break;

  case 105: /* paramtype: DOUBLE_  */
#line 747 "ned2.y"
                { ps.paramType = PARTYPE_DOUBLE; }
#line 2806 "ned2.tab.cc"
    break;

  case 106: /* paramtype: INT_  */
#line 749 "ned2.y"
                { ps.paramType = PARTYPE_INT; }
#line 2812 "ned2.tab.cc"
    break;

  case 107: /* paramtype: STRING_  */
#line 751 "ned2.y"
                { ps.paramType = PARTYPE_STRING; }
#line 2818 "ned2.tab.cc"
    break;

  case 108: /* paramtype: BOOL_  */
#line 753 "ned2.y"
                { ps.paramType = PARTYPE_BOOL; }
#line 2824 "ned2.tab.cc"
    break;

  case 109: /* paramtype: OBJECT_  */
#line 755 "ned2.y"
                { ps.paramType = PARTYPE_OBJECT; }
#line 2830 "ned2.tab.cc"
    break;

  case 110: /* paramtype: XML_  */
#line 757 "ned2.y"
                { ps.paramType = PARTYPE_XML; }
#line 2836 "ned2.tab.cc"
    break;

  case 111: /* opt_volatile: VOLATILE_  */
#line 762 "ned2.y"
                { ps.isVolatile = true; }
#line 2842 "ned2.tab.cc"
    break;

  case 112: /* opt_volatile: %empty  */
#line 764 "ned2.y"
                { ps.isVolatile = false; }
#line 2848 "ned2.tab.cc"
    break;

  case 113: /* paramvalue: expression  */
#line 769 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc); ps.isDefault = false; }
#line 2854 "ned2.tab.cc"
    break;

  case 114: /* paramvalue: DEFAULT '(' expression ')'  */
#line 771 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc); ps.isDefault = true; }
#line 2860 "ned2.tab.cc"
    break;

  case 115: /* paramvalue: DEFAULT  */
#line 773 "ned2.y"
                {
                  (*yyvalp) = nullptr; ps.exprPos = makeEmptyYYLoc(); ps.isDefault = true;
                }
#line 2868 "ned2.tab.cc"
    break;

  case 116: /* paramvalue: ASK  */
#line 777 "ned2.y"
                {
                  np->getErrors()->addError(ps.parameters,"interactive prompting (\"=ask\" syntax) is not supported in NED files");
                  (*yyvalp) = nullptr; ps.exprPos = makeEmptyYYLoc(); ps.isDefault = false;
                }
#line 2877 "ned2.tab.cc"
    break;

  case 141: /* property: property_namevalue ';'  */
#line 833 "ned2.y"
                {
                  storePos(np, ps.property, (*yylocp));
                  storeBannerAndRightComments(np, ps.property,(*yylocp));
                }
#line 2886 "ned2.tab.cc"
    break;

  case 144: /* property_name: '@' PROPNAME  */
#line 846 "ned2.y"
                {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(np, ps.propertyscope.top(), toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
#line 2896 "ned2.tab.cc"
    break;

  case 145: /* property_name: '@' PROPNAME '[' PROPNAME ']'  */
#line 852 "ned2.y"
                {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(np, ps.propertyscope.top(), toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yyloc)));
                  ps.property->setIndex(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
#line 2907 "ned2.tab.cc"
    break;

  case 149: /* property_key: property_literal '=' property_values  */
#line 871 "ned2.y"
                {
                  ps.propkey = (PropertyKeyElement *)createNedElementWithTag(np, NED_PROPERTY_KEY, ps.property);
                  ps.propkey->setName(opp_trim(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc))).c_str());
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(np, ps.propkey, (*yylocp));
                }
#line 2920 "ned2.tab.cc"
    break;

  case 150: /* property_key: property_values  */
#line 880 "ned2.y"
                {
                  ps.propkey = (PropertyKeyElement *)createNedElementWithTag(np, NED_PROPERTY_KEY, ps.property);
                  ps.propkey->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(np, ps.propkey, (*yylocp));
                }
#line 2933 "ned2.tab.cc"
    break;

  case 151: /* property_values: property_values ',' property_value  */
#line 892 "ned2.y"
                { ps.propvals.push_back(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 2939 "ned2.tab.cc"
    break;

  case 152: /* property_values: property_value  */
#line 894 "ned2.y"
                { ps.propvals.push_back(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval); }
#line 2945 "ned2.tab.cc"
    break;

  case 153: /* property_value: property_literal  */
#line 899 "ned2.y"
                {
                  (*yyvalp) = createPropertyValue(np, (*yylocp));
                }
#line 2953 "ned2.tab.cc"
    break;

  case 154: /* property_value: %empty  */
#line 903 "ned2.y"
                {
                  LiteralElement *node = (LiteralElement *)createNedElementWithTag(np, NED_LITERAL);
                  node->setType(LIT_SPEC); // and leave both value and text at ""
                  (*yyvalp) = node;
                }
#line 2963 "ned2.tab.cc"
    break;

  case 161: /* $@14: %empty  */
#line 927 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.gates = (GatesElement *)createNedElementWithTag(np, NED_GATES, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.gates,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2973 "ned2.tab.cc"
    break;

  case 162: /* gateblock: GATES ':' $@14 opt_gates  */
#line 933 "ned2.y"
                {
                  storePos(np, ps.gates, (*yylocp));
                }
#line 2981 "ned2.tab.cc"
    break;

  case 165: /* gates: gates gate  */
#line 945 "ned2.y"
                {
                  storeBannerAndRightComments(np, ps.gate,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2989 "ned2.tab.cc"
    break;

  case 166: /* gates: gate  */
#line 949 "ned2.y"
                {
                  storeBannerAndRightComments(np, ps.gate,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 2997 "ned2.tab.cc"
    break;

  case 167: /* $@15: %empty  */
#line 959 "ned2.y"
                {
                  ps.propertyscope.push(ps.gate);
                }
#line 3005 "ned2.tab.cc"
    break;

  case 168: /* gate: gate_typenamesize $@15 opt_inline_properties ';'  */
#line 963 "ned2.y"
                {
                  ps.propertyscope.pop();
                  storePos(np, ps.gate, (*yylocp));
                }
#line 3014 "ned2.tab.cc"
    break;

  case 169: /* gate_typenamesize: gatetype NAME  */
#line 971 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                }
#line 3023 "ned2.tab.cc"
    break;

  case 170: /* gate_typenamesize: gatetype NAME '[' ']'  */
#line 976 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                }
#line 3033 "ned2.tab.cc"
    break;

  case 171: /* gate_typenamesize: gatetype NAME vector  */
#line 982 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                  addExpression(np, ps.gate, "vector-size",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3044 "ned2.tab.cc"
    break;

  case 172: /* gate_typenamesize: NAME  */
#line 989 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3052 "ned2.tab.cc"
    break;

  case 173: /* gate_typenamesize: NAME '[' ']'  */
#line 993 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc));
                  ps.gate->setIsVector(true);
                }
#line 3061 "ned2.tab.cc"
    break;

  case 174: /* gate_typenamesize: NAME vector  */
#line 998 "ned2.y"
                {
                  ps.gate = addGate(np, ps.gates, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc));
                  ps.gate->setIsVector(true);
                  addExpression(np, ps.gate, "vector-size",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3071 "ned2.tab.cc"
    break;

  case 175: /* gatetype: INPUT_  */
#line 1007 "ned2.y"
                { ps.gateType = GATETYPE_INPUT; }
#line 3077 "ned2.tab.cc"
    break;

  case 176: /* gatetype: OUTPUT_  */
#line 1009 "ned2.y"
                { ps.gateType = GATETYPE_OUTPUT; }
#line 3083 "ned2.tab.cc"
    break;

  case 177: /* gatetype: INOUT_  */
#line 1011 "ned2.y"
                { ps.gateType = GATETYPE_INOUT; }
#line 3089 "ned2.tab.cc"
    break;

  case 180: /* $@16: %empty  */
#line 1024 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.types = (TypesElement *)createNedElementWithTag(np, NED_TYPES, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.types,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  if (ps.inTypes)
                     np->getErrors()->addError(ps.types,"more than one level of type nesting is not allowed");
                  ps.inTypes = true;
                }
#line 3102 "ned2.tab.cc"
    break;

  case 181: /* typeblock: TYPES ':' $@16 opt_localtypes  */
#line 1033 "ned2.y"
                {
                  ps.inTypes = false;
                  storePos(np, ps.types, (*yylocp));
                }
#line 3111 "ned2.tab.cc"
    break;

  case 196: /* $@17: %empty  */
#line 1070 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.submods = (SubmodulesElement *)createNedElementWithTag(np, NED_SUBMODULES, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.submods,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3121 "ned2.tab.cc"
    break;

  case 197: /* submodblock: SUBMODULES ':' $@17 opt_submodules  */
#line 1076 "ned2.y"
                {
                  storePos(np, ps.submods, (*yylocp));
                }
#line 3129 "ned2.tab.cc"
    break;

  case 202: /* submodule: submoduleheader ';'  */
#line 1093 "ned2.y"
                {
                  storeBannerAndRightComments(np, ps.submod,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  storePos(np, ps.submod, (*yylocp));
                }
#line 3138 "ned2.tab.cc"
    break;

  case 203: /* $@18: %empty  */
#line 1098 "ned2.y"
                {
                  ps.blockscope.push(ps.submod);
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.submod);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                  storeBannerAndRightComments(np, ps.submod,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3150 "ned2.tab.cc"
    break;

  case 204: /* submodule: submoduleheader '{' $@18 opt_paramblock opt_gateblock '}' opt_semicolon  */
#line 1108 "ned2.y"
                {
                  ps.blockscope.pop();
                  ps.propertyscope.pop();
                  storePos(np, ps.submod, (*yylocp));
                  storeTrailingComment(np, ps.submod,(*yylocp));
                }
#line 3161 "ned2.tab.cc"
    break;

  case 205: /* submoduleheader: submodulename ':' dottedname opt_condition  */
#line 1118 "ned2.y"
                {
                  ps.submod->setType(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  if (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval) ps.submod->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3170 "ned2.tab.cc"
    break;

  case 206: /* submoduleheader: submodulename ':' likeexpr LIKE dottedname opt_condition  */
#line 1123 "ned2.y"
                {
                  addOptionalExpression(np, ps.submod, "like-expr", ps.exprPos, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yyval);
                  ps.submod->setLikeType(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)).c_str());
                  ps.submod->setIsDefault(ps.isDefault);
                  if (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval) ps.submod->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3181 "ned2.tab.cc"
    break;

  case 207: /* submodulename: NAME  */
#line 1133 "ned2.y"
                {
                  ps.submod = (SubmoduleElement *)createNedElementWithTag(np, NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 3190 "ned2.tab.cc"
    break;

  case 208: /* submodulename: NAME vector  */
#line 1138 "ned2.y"
                {
                  ps.submod = (SubmoduleElement *)createNedElementWithTag(np, NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  addExpression(np, ps.submod, "vector-size",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3200 "ned2.tab.cc"
    break;

  case 209: /* likeexpr: '<' '>'  */
#line 1147 "ned2.y"
                { (*yyvalp) = nullptr; ps.exprPos = makeEmptyYYLoc(); ps.isDefault = false; }
#line 3206 "ned2.tab.cc"
    break;

  case 210: /* likeexpr: '<' expression '>'  */
#line 1149 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc); ps.isDefault = false; }
#line 3212 "ned2.tab.cc"
    break;

  case 211: /* likeexpr: '<' DEFAULT '(' expression ')' '>'  */
#line 1151 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc); ps.isDefault = true; }
#line 3218 "ned2.tab.cc"
    break;

  case 212: /* opt_condition: condition  */
#line 1156 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval; }
#line 3224 "ned2.tab.cc"
    break;

  case 213: /* opt_condition: %empty  */
#line 1158 "ned2.y"
                { (*yyvalp) = nullptr; }
#line 3230 "ned2.tab.cc"
    break;

  case 216: /* $@19: %empty  */
#line 1171 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createNedElementWithTag(np, NED_CONNECTIONS, ps.blockscope.top());
                  ps.conns->setAllowUnconnected(true);
                  storeBannerAndRightComments(np, ps.conns,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3241 "ned2.tab.cc"
    break;

  case 217: /* connblock: CONNECTIONS ALLOWUNCONNECTED ':' $@19 opt_connections  */
#line 1178 "ned2.y"
                {
                  storePos(np, ps.conns, (*yylocp));
                }
#line 3249 "ned2.tab.cc"
    break;

  case 218: /* $@20: %empty  */
#line 1182 "ned2.y"
                {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createNedElementWithTag(np, NED_CONNECTIONS, ps.blockscope.top());
                  storeBannerAndRightComments(np, ps.conns,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc),(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                }
#line 3259 "ned2.tab.cc"
    break;

  case 219: /* connblock: CONNECTIONS ':' $@20 opt_connections  */
#line 1188 "ned2.y"
                {
                  storePos(np, ps.conns, (*yylocp));
                }
#line 3267 "ned2.tab.cc"
    break;

  case 225: /* connectionsitem: connection opt_loops_and_conditions ';'  */
#line 1206 "ned2.y"
                {
                  if (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval) {
                      transferChildren(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, ps.conn);
                      delete YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval;
                  }
                  storePos(np, ps.conn, (*yylocp));
                  storeBannerAndRightComments(np, ps.conn,(*yylocp));
                }
#line 3280 "ned2.tab.cc"
    break;

  case 226: /* $@21: %empty  */
#line 1218 "ned2.y"
                {
                  if (ps.inConnGroup)
                      np->getErrors()->addError(ps.conngroup,"nested connection groups are not allowed");
                  ps.conngroup = (ConnectionGroupElement *)createNedElementWithTag(np, NED_CONNECTION_GROUP, ps.conns);
                  if (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval) {
                      // for's and if's were collected in a temporary UnknownElement, put them under conngroup now
                      transferChildren(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval, ps.conngroup);
                      delete YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval;
                  }
                  ps.inConnGroup = true;
                  storeBannerAndRightComments(np, ps.conngroup,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc));
                }
#line 3297 "ned2.tab.cc"
    break;

  case 227: /* connectiongroup: opt_loops_and_conditions '{' $@21 connections '}' opt_semicolon  */
#line 1231 "ned2.y"
                {
                  ps.inConnGroup = false;
                  storePos(np, ps.conngroup,(*yylocp));
                  storeTrailingComment(np, ps.conngroup,(*yylocp));
                }
#line 3307 "ned2.tab.cc"
    break;

  case 228: /* opt_loops_and_conditions: loops_and_conditions  */
#line 1240 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval; }
#line 3313 "ned2.tab.cc"
    break;

  case 229: /* opt_loops_and_conditions: %empty  */
#line 1242 "ned2.y"
                { (*yyvalp) = nullptr; }
#line 3319 "ned2.tab.cc"
    break;

  case 230: /* loops_and_conditions: loops_and_conditions ',' loop_or_condition  */
#line 1247 "ned2.y"
                {
                  YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                  (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval;
                }
#line 3328 "ned2.tab.cc"
    break;

  case 231: /* loops_and_conditions: loop_or_condition  */
#line 1252 "ned2.y"
                {
                  (*yyvalp) = new UnknownElement();
                  (*yyvalp)->appendChild(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3337 "ned2.tab.cc"
    break;

  case 234: /* loop: FOR NAME '=' expression TO expression  */
#line 1265 "ned2.y"
                {
                  ps.loop = (LoopElement *)createNedElementWithTag(np, NED_LOOP);
                  ps.loop->setParamName( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yyloc)) );
                  addExpression(np, ps.loop, "from-value",(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc),YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval);
                  addExpression(np, ps.loop, "to-value",(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc),YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                  storePos(np, ps.loop, (*yylocp));
                  (*yyvalp) = ps.loop;
                }
#line 3350 "ned2.tab.cc"
    break;

  case 235: /* connection: leftgatespec RIGHTARROW rightgatespec  */
#line 1280 "ned2.y"
                {
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(true);
                }
#line 3359 "ned2.tab.cc"
    break;

  case 236: /* connection: leftgatespec RIGHTARROW channelspec RIGHTARROW rightgatespec  */
#line 1285 "ned2.y"
                {
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(true);
                }
#line 3368 "ned2.tab.cc"
    break;

  case 237: /* connection: leftgatespec LEFTARROW rightgatespec  */
#line 1290 "ned2.y"
                {
                  swapConnection(ps.conn);
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(false);
                }
#line 3378 "ned2.tab.cc"
    break;

  case 238: /* connection: leftgatespec LEFTARROW channelspec LEFTARROW rightgatespec  */
#line 1296 "ned2.y"
                {
                  swapConnection(ps.conn);
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(false);
                }
#line 3388 "ned2.tab.cc"
    break;

  case 239: /* connection: leftgatespec DBLARROW rightgatespec  */
#line 1302 "ned2.y"
                {
                  ps.conn->setIsBidirectional(true);
                }
#line 3396 "ned2.tab.cc"
    break;

  case 240: /* connection: leftgatespec DBLARROW channelspec DBLARROW rightgatespec  */
#line 1306 "ned2.y"
                {
                  ps.conn->setIsBidirectional(true);
                }
#line 3404 "ned2.tab.cc"
    break;

  case 243: /* leftmod: NAME vector  */
#line 1318 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  addExpression(np, ps.conn, "src-module-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3414 "ned2.tab.cc"
    break;

  case 244: /* leftmod: NAME  */
#line 1324 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)) );
                }
#line 3423 "ned2.tab.cc"
    break;

  case 245: /* leftgate: NAME opt_subgate  */
#line 1332 "ned2.y"
                {
                  ps.conn->setSrcGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
#line 3432 "ned2.tab.cc"
    break;

  case 246: /* leftgate: NAME opt_subgate vector  */
#line 1337 "ned2.y"
                {
                  ps.conn->setSrcGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "src-gate-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3442 "ned2.tab.cc"
    break;

  case 247: /* leftgate: NAME opt_subgate PLUSPLUS  */
#line 1343 "ned2.y"
                {
                  ps.conn->setSrcGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
#line 3452 "ned2.tab.cc"
    break;

  case 248: /* parentleftgate: NAME opt_subgate  */
#line 1352 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
#line 3463 "ned2.tab.cc"
    break;

  case 249: /* parentleftgate: NAME opt_subgate vector  */
#line 1359 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "src-gate-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3475 "ned2.tab.cc"
    break;

  case 250: /* parentleftgate: NAME opt_subgate PLUSPLUS  */
#line 1367 "ned2.y"
                {
                  ps.conn = (ConnectionElement *)createNedElementWithTag(np, NED_CONNECTION, ps.inConnGroup ? (ASTNode*)ps.conngroup : (ASTNode*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
#line 3487 "ned2.tab.cc"
    break;

  case 253: /* rightmod: NAME  */
#line 1383 "ned2.y"
                {
                  ps.conn->setDestModule( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)) );
                }
#line 3495 "ned2.tab.cc"
    break;

  case 254: /* rightmod: NAME vector  */
#line 1387 "ned2.y"
                {
                  ps.conn->setDestModule( toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  addExpression(np, ps.conn, "dest-module-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3504 "ned2.tab.cc"
    break;

  case 255: /* rightgate: NAME opt_subgate  */
#line 1395 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
#line 3513 "ned2.tab.cc"
    break;

  case 256: /* rightgate: NAME opt_subgate vector  */
#line 1400 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "dest-gate-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3523 "ned2.tab.cc"
    break;

  case 257: /* rightgate: NAME opt_subgate PLUSPLUS  */
#line 1406 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
#line 3533 "ned2.tab.cc"
    break;

  case 258: /* parentrightgate: NAME opt_subgate  */
#line 1415 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
#line 3542 "ned2.tab.cc"
    break;

  case 259: /* parentrightgate: NAME opt_subgate vector  */
#line 1420 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addExpression(np, ps.conn, "dest-gate-index",ps.exprPos,YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                }
#line 3552 "ned2.tab.cc"
    break;

  case 260: /* parentrightgate: NAME opt_subgate PLUSPLUS  */
#line 1426 "ned2.y"
                {
                  ps.conn->setDestGate( toString(np,  (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
#line 3562 "ned2.tab.cc"
    break;

  case 261: /* opt_subgate: '$' NAME  */
#line 1435 "ned2.y"
                {
                  const char *s = toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc));
                  if (!strcmp(s,"i"))
                      ps.subgate = SUBGATE_I;
                  else if (!strcmp(s,"o"))
                      ps.subgate = SUBGATE_O;
                  else
                       np->getErrors()->addError(currentLocation(np), "invalid subgate spec '%s', must be 'i' or 'o'", toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)));
                }
#line 3576 "ned2.tab.cc"
    break;

  case 262: /* opt_subgate: %empty  */
#line 1445 "ned2.y"
                { ps.subgate = SUBGATE_NONE; }
#line 3582 "ned2.tab.cc"
    break;

  case 264: /* $@22: %empty  */
#line 1451 "ned2.y"
                {
                  ps.parameters = (ParametersElement *)createNedElementWithTag(np, NED_PARAMETERS, ps.conn);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
#line 3592 "ned2.tab.cc"
    break;

  case 265: /* channelspec: channelspec_header '{' $@22 opt_paramblock '}'  */
#line 1458 "ned2.y"
                {
                  ps.propertyscope.pop();
                }
#line 3600 "ned2.tab.cc"
    break;

  case 267: /* channelspec_header: opt_channelname dottedname  */
#line 1467 "ned2.y"
                {
                  ps.conn->setType(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                }
#line 3608 "ned2.tab.cc"
    break;

  case 268: /* channelspec_header: opt_channelname likeexpr LIKE dottedname  */
#line 1471 "ned2.y"
                {
                  addOptionalExpression(np, ps.conn, "like-expr", ps.exprPos, YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yyval);
                  ps.conn->setLikeType(removeSpaces(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc)).c_str());
                  ps.conn->setIsDefault(ps.isDefault);
                }
#line 3618 "ned2.tab.cc"
    break;

  case 270: /* opt_channelname: NAME ':'  */
#line 1481 "ned2.y"
                { ps.conn->setName(toString(np, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc))); }
#line 3624 "ned2.tab.cc"
    break;

  case 271: /* condition: IF expression  */
#line 1489 "ned2.y"
                {
                  ps.condition = (ConditionElement *)createNedElementWithTag(np, NED_CONDITION);
                  addExpression(np, ps.condition, "condition",(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yyloc),YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yyval);
                  storePos(np, ps.condition, (*yylocp));
                  (*yyvalp) = ps.condition;
                }
#line 3635 "ned2.tab.cc"
    break;

  case 272: /* vector: '[' expression ']'  */
#line 1502 "ned2.y"
                { (*yyvalp) = YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yyval; ps.exprPos = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yyloc); }
#line 3641 "ned2.tab.cc"
    break;


#line 3645 "ned2.tab.cc"

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yylhsNonterm (yyrule), yyvalp, yylocp);

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYNOMEM
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YY_USE (yy0);
  YY_USE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, omnetpp::nedxml::ParseContext *np)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (np);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys, omnetpp::nedxml::ParseContext *np)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yy_accessing_symbol (yys->yylrState),
                &yys->yysemantics.yyval, &yys->yyloc, np);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yy_accessing_symbol (yys->yylrState), YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh, np);
        }
    }
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yy_state_t yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yy_state_t yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yy_state_t yystate, yysymbol_kind_t yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yytoken == YYSYMBOL_YYerror)
    {
      // This is the error token.
      *yyconflicts = yyconfl;
      return 0;
    }
  else if (yyisDefaultedState (yystate)
           || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yy_state_t
yyLRgotoState (yy_state_t yystate, yysymbol_kind_t yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (YYSIZE_T, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (YYSIZE_T, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, YYPTRDIFF_T yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  YYPTRDIFF_T yynewSize;
  YYPTRDIFF_T yyn;
  YYPTRDIFF_T yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (YYSIZE_T, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  YYPTRDIFF_T yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
            YYPTRDIFF_T yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yy_state_t yylrState,
                 YYPTRDIFF_T yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if YYDEBUG

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, YYPTRDIFF_T yyk,
                 yyRuleNum yyrule, omnetpp::nedxml::ParseContext *np)
{
  int yynrhs = yyrhsLength (yyrule);
  int yylow = 1;
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yy_accessing_symbol (yyvsp[yyi - yynrhs + 1].yystate.yylrState),
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yyval,
                       &(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)                       , np);
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE *yylocp, omnetpp::nedxml::ParseContext *np)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp, yyk,
                           yyvalp, yylocp, np);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      if (yynrhs == 0)
        /* Set default location.  */
        yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyk, yyvalp, yylocp, np);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, YYPTRDIFF_T yyk, yyRuleNum yyrule,
             yybool yyforceEval, omnetpp::nedxml::ParseContext *np)
{
  YYPTRDIFF_T yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yyval;
      YYLTYPE yyloc;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yyval, &yyloc, np);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
      if (yyflag != yyok)
        return yyflag;
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yyval, &yyloc);
    }
  else
    {
      YYPTRDIFF_T yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yy_state_t yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static YYPTRDIFF_T
yysplitStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      YYPTRDIFF_T state_size = YYSIZEOF (yystackp->yytops.yystates[0]);
      YYPTRDIFF_T half_max_capacity = YYSIZE_MAXIMUM / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (YYSIZE_T, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yyval = yys0->yysemantics.yyval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yyval = yys1->yysemantics.yyval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp, np));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp, np));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE *yylocp, omnetpp::nedxml::ParseContext *np)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp, np);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys, np);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    YYLTYPE yylloc_current = yylloc;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yylloc = yyopt->yyloc;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, -1, yyvalp, yylocp, np);
    yychar = yychar_current;
    yylval = yylval_current;
    yylloc = yylloc_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yysymbol_name (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState))));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yysymbol_name (yy_accessing_symbol (yystates[yyi]->yylrState)),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1, omnetpp::nedxml::ParseContext *np)
{
  YY_USE (yyx0);
  YY_USE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (np, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the locations for each of the YYN1 states in *YYSTACKP,
 *  ending at YYS1.  Has no effect on previously resolved states.
 *  The first semantic option of a state is always chosen.  */
static void
yyresolveLocations (yyGLRState *yys1, int yyn1,
                    yyGLRStack *yystackp, omnetpp::nedxml::ParseContext *np)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp, np);
      if (!yys1->yyresolved)
        {
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          yySemanticOption *yyoption = yys1->yysemantics.yyfirstVal;
          YY_ASSERT (yyoption);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (0 < yynrhs)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp, np);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
        }
    }
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yyval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp, np);
              return yyreportAmbiguity (yybest, yyp, np);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yyval, yylocp, np);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yyval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yyval_other, &yydummy, np);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yy_accessing_symbol (yys->yylrState),
                                &yyval, yylocp, np);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yyval, &yyval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yyval, yylocp, np);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yyval = yyval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             , np));
    }
  return yyok;
}

/** Called when returning to deterministic operation to clean up the extra
 * stacks. */
static void
yycompressStack (yyGLRStack* yystackp)
{
  /* yyr is the state after the split point.  */
  yyGLRState *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  {
    yyGLRState *yyp, *yyq;
    for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
         yyp != yystackp->yysplitPoint;
         yyr = yyp, yyp = yyq, yyq = yyp->yypred)
      yyp->yypred = yyr;
  }

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, YYPTRDIFF_T yyk,
                   YYPTRDIFF_T yyposn, omnetpp::nedxml::ParseContext *np)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yy_state_t yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule], np);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yysymbol_kind_t yytoken = yygetToken (&yychar, np);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          for (/* nothing */; *yyconflicts; yyconflicts += 1)
            {
              YYRESULTTAG yyflag;
              YYPTRDIFF_T yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts], np);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn, np));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction], np);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}






static void
yyreportSyntaxError (yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  if (yystackp->yyerrState != 0)
    return;
  yyerror (np, YY_("syntax error"));
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp, omnetpp::nedxml::ParseContext *np)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yysymbol_kind_t yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, np, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            /* We throw away the lookahead, but the error range
               of the shifted error token must take it into account.  */
            yyGLRState *yys = yystackp->yytops.yystates[0];
            yyGLRStackItem yyerror_range[3];
            yyerror_range[1].yystate.yyloc = yys->yyloc;
            yyerror_range[2].yystate.yyloc = yylloc;
            YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval, &yylloc, np);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar, np);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    YYPTRDIFF_T yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, np, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYSYMBOL_YYerror;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYSYMBOL_YYerror
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              /* First adjust its location.*/
              YYLTYPE yyerrloc;
              yystackp->yyerror_range[2].yystate.yyloc = yylloc;
              YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
              YY_SYMBOL_PRINT ("Shifting", yy_accessing_symbol (yyaction),
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys, np);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, np, YY_NULLPTR);
}

#define YYCHK1(YYE)                             \
  do {                                          \
    switch (YYE) {                              \
    case yyok:     break;                       \
    case yyabort:  goto yyabortlab;             \
    case yyaccept: goto yyacceptlab;            \
    case yyerr:    goto yyuser_error;           \
    case yynomem:  goto yyexhaustedlab;         \
    default:       goto yybuglab;               \
    }                                           \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (omnetpp::nedxml::ParseContext *np)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  YYPTRDIFF_T yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;
  yylloc = yyloc_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode. */
      while (yytrue)
        {
          yy_state_t yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  yyreportSyntaxError (&yystack, np);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue, np));
            }
          else
            {
              yysymbol_kind_t yytoken = yygetToken (&yychar, np);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts)
                /* Enter nondeterministic mode.  */
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {
                  yystack.yyerror_range[1].yystate.yyloc = yylloc;
                  /* Issue an error message unless the scanner already
                     did. */
                  if (yychar != YYerror)
                    yyreportSyntaxError (&yystack, np);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue, np));
            }
        }

      /* Nondeterministic mode. */
      while (yytrue)
        {
          yysymbol_kind_t yytoken_to_shift;
          YYPTRDIFF_T yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn, np));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, np, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack, np));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yystack.yyerror_range[1].yystate.yyloc = yylloc;
              yyreportSyntaxError (&yystack, np);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yy_state_t yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YY_DPRINTF ((stderr, "Stack %ld now in state %d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack, np));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack, np);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturnlab;

 yyexhaustedlab:
  yyerror (np, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;

 yyreturnlab:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval, &yylloc, np);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          YYPTRDIFF_T yysize = yystack.yytops.yysize;
          YYPTRDIFF_T yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys, np);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
/* Print *YYS and its predecessors. */
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

/* Print YYS (possibly NULL) and its predecessors. */
static void
yypstates (yyGLRState* yys)
{
  if (yys == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yys);
  YY_FPRINTF ((stderr, "\n"));
}

/* Print the stack #YYK.  */
static void
yypstack (yyGLRStack* yystackp, YYPTRDIFF_T yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

/* Print all the stacks.  */
static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    YYPTRDIFF_T yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs
#undef yylloc

/* Substitute the variable and function names.  */
#define yyparse ned2yyparse
#define yylex   ned2yylex
#define yyerror ned2yyerror
#define yylval  ned2yylval
#define yychar  ned2yychar
#define yydebug ned2yydebug
#define yynerrs ned2yynerrs
#define yylloc  ned2yylloc


#line 1701 "ned2.y"


//----------------------------------------------------------------------
// general bison/flex stuff:
//
int ned2yylex_destroy();  // from lex.XXX.cc file

ASTNode *doParseNed(ParseContext *np, const char *nedtext)
{
#if YYDEBUG != 0      /* #if added --VA */
    yydebug = YYDEBUGGING_ON;
#endif

    ned2yylex_destroy();

    DETECT_PARSER_REENTRY();

    // reset the lexer
    pos.co = 0;
    pos.li = 1;
    prevpos = pos;

    yyin = nullptr;
    yyout = stderr; // not used anyway

    // alloc buffer
    struct yy_buffer_state *handle = yy_scan_string(nedtext);
    if (!handle)
        {np->getErrors()->addError("", "unable to allocate work memory"); return nullptr;}

    // create parser state and NedFileElement
    resetParserState();
    ps.nedfile = new NedFileElement();

    // store file name with slashes always, even on Windows -- neddoc relies on that
    ps.nedfile->setFilename(slashifyFilename(np->getFileName()).c_str());
    ps.nedfile->setVersion("2");

    // storing the start and end position of the whole file for the NedFileElement
    // NOTE: we cannot use storePos() because it strips off the leading spaces
    // and comments from the element.
    YYLTYPE pos = np->getSource()->getFullTextPos();
    SourceRegion region;
    region.startLine = pos.first_line;
    region.startColumn = pos.first_column;
    region.endLine = pos.last_line;
    region.endColumn = pos.last_column;
    ps.nedfile->setSourceRegion(region);

    // store file comment
    storeFileComment(np, ps.nedfile);

    ps.propertyscope.push(ps.nedfile);

    globalps = ps; // remember this for error recovery

    if (np->getStoreSourceFlag())
        storeSourceCode(np, ps.nedfile, np->getSource()->getFullTextPos());

    // parse
    try
    {
        yyparse(np);
    }
    catch (NedException& e)
    {
        yyerror(np, (std::string("error during parsing: ")+e.what()).c_str());
        yy_delete_buffer(handle);
        return nullptr;
    }

    if (np->getErrors()->empty())
    {
        // more sanity checks
        if (ps.propertyscope.size()!=1 || ps.propertyscope.top()!=ps.nedfile)
            INTERNAL_ERROR0(nullptr, "error during parsing: imbalanced propertyscope");
        if (!ps.blockscope.empty() || !ps.typescope.empty())
            INTERNAL_ERROR0(nullptr, "error during parsing: imbalanced blockscope or typescope");
    }
    yy_delete_buffer(handle);

    return ps.nedfile;
}

void yyerror(ParseContext *np, const char *s)
{
    // chop newline
    char buf[250];
    strcpy(buf, s);
    if (buf[strlen(buf)-1] == '\n')
        buf[strlen(buf)-1] = '\0';

    np->error(buf, pos.li);
}
