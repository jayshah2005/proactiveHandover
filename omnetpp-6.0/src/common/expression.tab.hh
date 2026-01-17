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

#ifndef YY_EXPRESSIONYY_EXPRESSION_TAB_HH_INCLUDED
# define YY_EXPRESSIONYY_EXPRESSION_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int expressionyydebug;
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
    TRUE_ = 258,                   /* TRUE_  */
    FALSE_ = 259,                  /* FALSE_  */
    NAN_ = 260,                    /* NAN_  */
    INF_ = 261,                    /* INF_  */
    UNDEFINED_ = 262,              /* UNDEFINED_  */
    NULLPTR_ = 263,                /* NULLPTR_  */
    NULL_ = 264,                   /* NULL_  */
    NAME = 265,                    /* NAME  */
    INTCONSTANT = 266,             /* INTCONSTANT  */
    REALCONSTANT = 267,            /* REALCONSTANT  */
    STRINGCONSTANT = 268,          /* STRINGCONSTANT  */
    EQ = 269,                      /* EQ  */
    NE = 270,                      /* NE  */
    GE = 271,                      /* GE  */
    LE = 272,                      /* LE  */
    SPACESHIP = 273,               /* SPACESHIP  */
    AND = 274,                     /* AND  */
    OR = 275,                      /* OR  */
    XOR = 276,                     /* XOR  */
    SHIFT_LEFT = 277,              /* SHIFT_LEFT  */
    SHIFT_RIGHT = 278,             /* SHIFT_RIGHT  */
    DOUBLECOLON = 279,             /* DOUBLECOLON  */
    INVALID_CHAR = 280,            /* INVALID_CHAR  */
    MATCH = 281,                   /* MATCH  */
    UMIN_ = 282,                   /* UMIN_  */
    NEG_ = 283,                    /* NEG_  */
    NOT_ = 284                     /* NOT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define TRUE_ 258
#define FALSE_ 259
#define NAN_ 260
#define INF_ 261
#define UNDEFINED_ 262
#define NULLPTR_ 263
#define NULL_ 264
#define NAME 265
#define INTCONSTANT 266
#define REALCONSTANT 267
#define STRINGCONSTANT 268
#define EQ 269
#define NE 270
#define GE 271
#define LE 272
#define SPACESHIP 273
#define AND 274
#define OR 275
#define XOR 276
#define SHIFT_LEFT 277
#define SHIFT_RIGHT 278
#define DOUBLECOLON 279
#define INVALID_CHAR 280
#define MATCH 281
#define UMIN_ 282
#define NEG_ 283
#define NOT_ 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 49 "expression.y"

  const char *str;
  AstNode *node;

#line 130 "expression.tab.hh"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE expressionyylval;


int expressionyyparse (AstNode *&resultAstTree);


#endif /* !YY_EXPRESSIONYY_EXPRESSION_TAB_HH_INCLUDED  */
