/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_MINI_1_TAB_H_INCLUDED
# define YY_YY_MINI_1_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    NUMBER = 259,
    FUNCTION = 260,
    IDENTIFIER = 261,
    BEGIN_PARAMS = 262,
    SEMICOLON = 263,
    END_PARAMS = 264,
    BEGIN_LOCALS = 265,
    END_LOCALS = 266,
    BEGIN_BODY = 267,
    END_BODY = 268,
    COMMA = 269,
    COLON = 270,
    INTEGER = 271,
    ARRAY = 272,
    L_SQUARE_BRACKET = 273,
    R_SQUARE_BRACKET = 274,
    OF = 275,
    NEQ = 276,
    IF = 277,
    THEN = 278,
    ENDIF = 279,
    ELSE = 280,
    WHILE = 281,
    BEGINLOOP = 282,
    ENDLOOP = 283,
    DO = 284,
    FOREACH = 285,
    IN = 286,
    FOR = 287,
    READ = 288,
    WRITE = 289,
    CONTINUE = 290,
    OR = 291,
    AND = 292,
    NOT = 293,
    L_PAREN = 294,
    R_PAREN = 295,
    EQ = 296,
    LT = 297,
    GT = 298,
    LTE = 299,
    GTE = 300,
    TRUE = 301,
    FALSE = 302,
    RETURN = 303,
    SUB = 304,
    ADD = 305,
    MULT = 306,
    DIV = 307,
    MOD = 308,
    ASSIGN = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "mini_1.y" /* yacc.c:1909  */

  char* valIdent;
  int num;
 

#line 115 "mini_1.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_1_TAB_H_INCLUDED  */
