/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Skeleton interface for Bison GLR parsers in C

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

#ifndef YY_NED2YY_NED2_TAB_HH_INCLUDED
# define YY_NED2YY_NED2_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ned2yydebug;
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
    IMPORT = 258,                  /* IMPORT  */
    PACKAGE = 259,                 /* PACKAGE  */
    PROPERTY = 260,                /* PROPERTY  */
    MODULE = 261,                  /* MODULE  */
    SIMPLE = 262,                  /* SIMPLE  */
    NETWORK = 263,                 /* NETWORK  */
    CHANNEL = 264,                 /* CHANNEL  */
    MODULEINTERFACE = 265,         /* MODULEINTERFACE  */
    CHANNELINTERFACE = 266,        /* CHANNELINTERFACE  */
    EXTENDS = 267,                 /* EXTENDS  */
    LIKE = 268,                    /* LIKE  */
    TYPES = 269,                   /* TYPES  */
    PARAMETERS = 270,              /* PARAMETERS  */
    GATES = 271,                   /* GATES  */
    SUBMODULES = 272,              /* SUBMODULES  */
    CONNECTIONS = 273,             /* CONNECTIONS  */
    ALLOWUNCONNECTED = 274,        /* ALLOWUNCONNECTED  */
    DOUBLE_ = 275,                 /* DOUBLE_  */
    INT_ = 276,                    /* INT_  */
    STRING_ = 277,                 /* STRING_  */
    BOOL_ = 278,                   /* BOOL_  */
    OBJECT_ = 279,                 /* OBJECT_  */
    XML_ = 280,                    /* XML_  */
    VOLATILE_ = 281,               /* VOLATILE_  */
    INPUT_ = 282,                  /* INPUT_  */
    OUTPUT_ = 283,                 /* OUTPUT_  */
    INOUT_ = 284,                  /* INOUT_  */
    IF = 285,                      /* IF  */
    FOR = 286,                     /* FOR  */
    RIGHTARROW = 287,              /* RIGHTARROW  */
    LEFTARROW = 288,               /* LEFTARROW  */
    DBLARROW = 289,                /* DBLARROW  */
    TO = 290,                      /* TO  */
    THIS_ = 291,                   /* THIS_  */
    PARENT = 292,                  /* PARENT  */
    DEFAULT = 293,                 /* DEFAULT  */
    ASK = 294,                     /* ASK  */
    CONST_ = 295,                  /* CONST_  */
    SIZEOF = 296,                  /* SIZEOF  */
    INDEX_ = 297,                  /* INDEX_  */
    EXISTS = 298,                  /* EXISTS  */
    TYPENAME = 299,                /* TYPENAME  */
    XMLDOC = 300,                  /* XMLDOC  */
    TRUE_ = 301,                   /* TRUE_  */
    FALSE_ = 302,                  /* FALSE_  */
    NAN_ = 303,                    /* NAN_  */
    INF_ = 304,                    /* INF_  */
    UNDEFINED_ = 305,              /* UNDEFINED_  */
    NULLPTR_ = 306,                /* NULLPTR_  */
    NULL_ = 307,                   /* NULL_  */
    NAME = 308,                    /* NAME  */
    PROPNAME = 309,                /* PROPNAME  */
    INTCONSTANT = 310,             /* INTCONSTANT  */
    REALCONSTANT = 311,            /* REALCONSTANT  */
    STRINGCONSTANT = 312,          /* STRINGCONSTANT  */
    CHARCONSTANT = 313,            /* CHARCONSTANT  */
    PLUSPLUS = 314,                /* PLUSPLUS  */
    DOUBLEASTERISK = 315,          /* DOUBLEASTERISK  */
    EQ = 316,                      /* EQ  */
    NE = 317,                      /* NE  */
    GE = 318,                      /* GE  */
    LE = 319,                      /* LE  */
    SPACESHIP = 320,               /* SPACESHIP  */
    AND = 321,                     /* AND  */
    OR = 322,                      /* OR  */
    XOR = 323,                     /* XOR  */
    SHIFT_LEFT = 324,              /* SHIFT_LEFT  */
    SHIFT_RIGHT = 325,             /* SHIFT_RIGHT  */
    DOUBLECOLON = 326,             /* DOUBLECOLON  */
    EXPRESSION_SELECTOR = 327,     /* EXPRESSION_SELECTOR  */
    COMMONCHAR = 328,              /* COMMONCHAR  */
    INVALID_CHAR = 329,            /* INVALID_CHAR  */
    MATCH = 330,                   /* MATCH  */
    UMIN_ = 331,                   /* UMIN_  */
    NEG_ = 332,                    /* NEG_  */
    NOT_ = 333                     /* NOT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE ned2yylval;
extern YYLTYPE ned2yylloc;
int ned2yyparse (omnetpp::nedxml::ParseContext *np);

#endif /* !YY_NED2YY_NED2_TAB_HH_INCLUDED  */
