	// output file definitions
%option outfile="scanner.cpp" 
	//lexical scanner header file
%option header-file="scanner.h"

	// define reentrant scanner
%option 8bit reentrant noyywrap

	// we are going to use stack frame for "include" feature 
%option stack

%option warn nodefault

	// to interface with bison for reentrant parser
	// and scanner
%option bison-bridge bison-locations

	// line number tracking
%option yylineno

	// our own parse tree data type
%option extra-type="ScannerParserCL*"

	// these options are for windows compatibility
%option always-interactive
%option nounistd

	// put this block at the top of the 
	// generated scanner

	// for interface with bison
	// %option bison-bridge
	// %option bison-locations

%top{

	// this macro definition is for windows compatibility
#define YY_NO_UNISTD_H

	#pragma warning( disable: 4005)

	#include <iostream>
	#include <cmath>
	#include <cstring>
	
	using namespace std;

	#include "analyzer.h"
	#include "ScannerParserCL.h"
}

NUMB	([0-9]+)|([0-9]*\.[0-9]+)

%%
"int"          {printf("Line:%d | Lex12(keyword)-->int\n",lineNumber);return INT_TYPE;}
"float"        {printf("Line:%d | Lex12(keyword)-->float\n",lineNumber);return FLOAT_TYPE;}
"bool"         {printf("Line:%d | Lex12(keyword)-->bool\n",lineNumber);return BOOL_TYPE;}
"string"       {printf("Line:%d | Lex12(keyword)-->string\n",lineNumber);return STRING_TYPE;}
"function"     {printf("Line:%d | Lex12(keyword)-->function\n",lineNumber);return FUNCTION;}
"if"           {printf("Line:%d | Lex12(keyword)-->if\n",lineNumber);return IF;}
"else"         {printf("Line:%d | Lex12(keyword)-->else\n",lineNumber);return ELSE;}
"elseif"       {printf("Line:%d | Lex12(keyword)-->elseif\n",lineNumber);return ELSIF;}
"while"        {printf("Line:%d | Lex12(keyword)-->while\n",lineNumber);return WHILE;}
"for"          {printf("Line:%d | Lex12(keyword)-->for\n",lineNumber);return FOR;}
"return"	   {printf("Line:%d | Lex12(keyword)-->return\n",lineNumber);return RETURN_T;}
"break"        {printf("Line:%d | Lex12(keyword)-->break\n",lineNumber);return BREAK;}
"continue"     {printf("Line:%d | Lex12(keyword)-->continue\n",lineNumber);return CONTINUE;}
"null"         {printf("Line:%d | Lex12(keyword)-->null\n",lineNumber);return NULL_T;}
"true"         {printf("Line:%d | Lex12(keyword)-->true\n",lineNumber);return TRUE_T;}
"false"        {printf("Line:%d | Lex12(keyword)-->false\n",lineNumber);return FALSE_T;}
"global"       {printf("Line:%d | Lex12(keyword)-->global\n",lineNumber);return GLOBAL_T;}
"("            {printf("Line:%d | Lex10(operand)-->(\n",lineNumber);return LP;}
")"            {printf("Line:%d | Lex10(operand)-->)\n",lineNumber);return RP;}
"{"            {printf("Line:%d | Lex13(bracket)-->{\n",lineNumber);return LC;}
"}"            {printf("Line:%d | Lex13(bracket)-->}\n",lineNumber);return RC;}
";"            {printf("Line:%d | Lex14(punctuation)-->;\n",lineNumber);return SEMICOLON;}
","            {printf("Line:%d | Lex14(punctuation)-->,\n",lineNumber);return COMMA;}
"\""           {printf("Line:%d | Lex14(punctuation)-->\"\n",lineNumber);return DQ_MARK;}
"!"            {printf("Line:%d | Lex14(LogicOp)-->!\n",lineNumber);return EXC_MARK;}
"&&"           {printf("Line:%d | Lex11(LogicOp)-->&&\n",lineNumber);return LOGICAL_AND;}
"||"           {printf("Line:%d | Lex11(LogicOp)-->||\n",lineNumber);return LOGICAL_OR;}
"="            {printf("Line:%d | Lex10(Operand)-->=\n",lineNumber);return ASSIGN;}
"=="           {printf("Line:%d | Lex11(LogicOp)-->==\n",lineNumber);return EQ;}
"!="           {printf("Line:%d | Lex11(LogicOp)-->!=\n",lineNumber);return NE;}
">"            {printf("Line:%d | Lex11(LogicOp)-->>\n",lineNumber);return GT;}
">="           {printf("Line:%d | Lex11(LogicOp)-->>=\n",lineNumber);return GE;}
"<"            {printf("Line:%d | Lex11(LogicOp)--><\n",lineNumber);return LT;}
"<="           {printf("Line:%d | Lex11(LogicOp)--><=\n",lineNumber);return LE;}
"+"            {printf("Line:%d | Lex10(Operand)-->+\n",lineNumber);return ADD;}
"-"            {printf("Line:%d | Lex10(Operand)-->-\n",lineNumber);return SUB;}
"*"            {printf("Line:%d | Lex10(Operand)-->*\n",lineNumber);return MUL;}
"/"            {printf("Line:%d | Lex10(Operand)-->/\n",lineNumber);return DIV;}
"%"            {printf("Line:%d | Lex10(Operand)-->%\n",lineNumber);return MOD;}
"print"        {printf("Line:%d | Lex12 keyword)-->print\n",lineNumber);return PRINT_T;}
"say_hello" { printf("I am scanner, how are you doing?\n");
				return HELLO;}
{NUMB} {        
				printf("Line:%d | Lex06(RealNum)-->%s\n",lineNumber,yytext);
				yyextra->copy_double(yylval->double_value, yytext);
				return NUM;
}
[\n]			{ lineNumber++;return '\n'; }
[ \t]			{ /* empty */ }
[A-Za-z_][A-Za-z_0-9]* {
				printf("Line:%d | Lex13(Identifier)-->%s\n",lineNumber,yytext);
				return IDENTIFIER;
}
.				{printf("Line:%d | unexpected character %s\n",lineNumber,yytext);}
%%

