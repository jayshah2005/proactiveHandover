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

#ifndef YY_MSG2YY_MSG2_TAB_HH_INCLUDED
# define YY_MSG2YY_MSG2_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int msg2yydebug;
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
    NAMESPACE = 258,               /* NAMESPACE  */
    CPLUSPLUS = 259,               /* CPLUSPLUS  */
    CPLUSPLUSBODY = 260,           /* CPLUSPLUSBODY  */
    MESSAGE = 261,                 /* MESSAGE  */
    PACKET = 262,                  /* PACKET  */
    CLASS = 263,                   /* CLASS  */
    STRUCT = 264,                  /* STRUCT  */
    ENUM = 265,                    /* ENUM  */
    NONCOBJECT = 266,              /* NONCOBJECT  */
    EXTENDS = 267,                 /* EXTENDS  */
    ABSTRACT = 268,                /* ABSTRACT  */
    IMPORT = 269,                  /* IMPORT  */
    USING = 270,                   /* USING  */
    NAME = 271,                    /* NAME  */
    PROPNAME = 272,                /* PROPNAME  */
    DOUBLECOLON = 273,             /* DOUBLECOLON  */
    INTCONSTANT = 274,             /* INTCONSTANT  */
    REALCONSTANT = 275,            /* REALCONSTANT  */
    STRINGCONSTANT = 276,          /* STRINGCONSTANT  */
    CHARCONSTANT = 277,            /* CHARCONSTANT  */
    TRUE_ = 278,                   /* TRUE_  */
    FALSE_ = 279,                  /* FALSE_  */
    BOOL_ = 280,                   /* BOOL_  */
    CHAR_ = 281,                   /* CHAR_  */
    SHORT_ = 282,                  /* SHORT_  */
    INT_ = 283,                    /* INT_  */
    LONG_ = 284,                   /* LONG_  */
    DOUBLE_ = 285,                 /* DOUBLE_  */
    UNSIGNED_ = 286,               /* UNSIGNED_  */
    CONST_ = 287,                  /* CONST_  */
    STRING_ = 288,                 /* STRING_  */
    EQ = 289,                      /* EQ  */
    NE = 290,                      /* NE  */
    GE = 291,                      /* GE  */
    LE = 292,                      /* LE  */
    AND = 293,                     /* AND  */
    OR = 294,                      /* OR  */
    XOR = 295,                     /* XOR  */
    SHIFT_LEFT = 296,              /* SHIFT_LEFT  */
    SHIFT_RIGHT = 297,             /* SHIFT_RIGHT  */
    COMMONCHAR = 298,              /* COMMONCHAR  */
    INVALID_CHAR = 299,            /* INVALID_CHAR  */
    UMIN = 300                     /* UMIN  */
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


extern YYSTYPE msg2yylval;
extern YYLTYPE msg2yylloc;
int msg2yyparse (omnetpp::nedxml::ParseContext *np);

#endif /* !YY_MSG2YY_MSG2_TAB_HH_INCLUDED  */
