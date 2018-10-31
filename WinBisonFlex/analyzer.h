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

	#include "ScannerParserCL.h"
		
	using namespace std;

	typedef void* yyscan_t;

#line 58 "analyzer.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  { 
    NUM = 258,
    HELLO = 259,
    IDENTIFIER = 260,
    FUNCTION = 261,
    IF = 262,
    ELSE = 263,
    ELSIF = 264,
    WHILE = 265,
    FOR = 266,
    RETURN_T = 267,
    BREAK = 268,
    CONTINUE = 269,
    NULL_T = 270,
    LC = 271,
    RC = 272,
    SEMICOLON = 273,
    COMMA = 274,
    ASSIGN = 275,
    LOGICAL_AND = 276,
    LOGICAL_OR = 277,
    EQ = 278,
    NE = 279,
    GT = 280,
    GE = 281,
    LT = 282,
    LE = 283,
    MOD = 284,
    TRUE_T = 285,
    FALSE_T = 286,
    GLOBAL_T = 287,
    SUB = 288,
    ADD = 289,
    MUL = 290,
    DIV = 291,
    LP = 292,
    RP = 293,
	PRINT_T = 294,
	DQ_MARK = 295,
	EXC_MARK = 296,
	INT_TYPE = 297,
	FLOAT_TYPE = 298,
	BOOL_TYPE = 299,
	STRING_TYPE = 300,
	INT_NUM = 301,
	FLOAT_NUM = 302,
	COMMENT = 303,
	INCREASE = 304,
	DECREASE = 305,
	STR_VAL = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 74 "analyzer.y" /* yacc.c:1909  */
	int int_value;
	double double_value;
	char* string;
	Node* node;

#line 115 "analyzer.h" /* yacc.c:1909  */
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
