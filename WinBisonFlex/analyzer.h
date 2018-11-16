/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_ANALYZER_H_INCLUDED
# define YY_YY_ANALYZER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 35 "analyzer.y" /* yacc.c:1909  */

	//code requires can show the error messages
	#pragma warning (disable: 4005)

	#include <iostream>
	#include <cstdio>
	#include <string>

	#include "ScannerParserCL.h"
	#include "MathExpression.h"
		
	using namespace std;

	typedef void* yyscan_t;

#line 60 "analyzer.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    IDENTIFIER = 259,
    HELLO = 260,
    INT_TYPE = 261,
    FLOAT_TYPE = 262,
    BOOL_TYPE = 263,
    STRING_TYPE = 264,
    DQ_MARK = 265,
    EXC_MARK = 266,
    INCREASE = 267,
    DECREASE = 268,
    STR_VAL = 269,
    PRINT_T = 270,
    COMMENT = 271,
    FUNCTION = 272,
    IF = 273,
    ELSE = 274,
    ELSIF = 275,
    WHILE = 276,
    FOR = 277,
    RETURN_T = 278,
    BREAK = 279,
    CONTINUE = 280,
    NULL_T = 281,
    LC = 282,
    RC = 283,
    SEMICOLON = 284,
    COMMA = 285,
    ASSIGN = 286,
    LOGICAL_AND = 287,
    LOGICAL_OR = 288,
    EQ = 289,
    NE = 290,
    GT = 291,
    GE = 292,
    LT = 293,
    LE = 294,
    MOD = 295,
    TRUE_T = 296,
    FALSE_T = 297,
    GLOBAL_T = 298,
    SUB = 299,
    ADD = 300,
    MUL = 301,
    DIV = 302,
    LP = 303,
    RP = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 76 "analyzer.y" /* yacc.c:1909  */
	int int_value;
	double double_value;
	char* cstr;
	Node* node;

	assign_statement* assignment;

#line 130 "analyzer.h" /* yacc.c:1909  */
};
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



int yyparse (yyscan_t scanner, ScannerParserCL* pParseTree);

#endif /* !YY_YY_ANALYZER_H_INCLUDED  */
