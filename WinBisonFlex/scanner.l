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
}

NUMB	([0-9]+)|([0-9]*\.[0-9]+)

%%
"function"     {yyextra->SayHello("function");return FUNCTION;}
"if"           {yyextra->SayHello("if");return IF;}
"else"         {yyextra->SayHello("else");return ELSE;}
"elsif"        {yyextra->SayHello("elsif");return ELSIF;}
"while"        {yyextra->SayHello("while");return WHILE;}
"for"          {yyextra->SayHello("for");return FOR;}
"return"	   {yyextra->SayHello("return");return RETURN_T;}
"break"        {yyextra->SayHello("break");return BREAK;}
"continue"     {yyextra->SayHello("continue");return CONTINUE;}
"null"         {yyextra->SayHello("null");return NULL_T;}
"true"         {yyextra->SayHello("true");return TRUE_T;}
"false"        {yyextra->SayHello("false");return FALSE_T;}
"global"       {yyextra->SayHello("global");return GLOBAL_T;}
"("            {yyextra->SayHello("(");return LP;}
")"            {yyextra->SayHello(")");return RP;}
"{"            {yyextra->SayHello("{");return LC;}
"}"            {yyextra->SayHello("}");return RC;}
";"            {yyextra->SayHello(";");return SEMICOLON;}
","            {yyextra->SayHello(",");return COMMA;}
"&&"           {yyextra->SayHello("&&");return LOGICAL_AND;}
"||"           {yyextra->SayHello("||");return LOGICAL_OR;}
"="            {yyextra->SayHello("=");return ASSIGN;}
"=="           {yyextra->SayHello("==");return EQ;}
"!="           {yyextra->SayHello("!=");return NE;}
">"            {yyextra->SayHello(">");return GT;}
">="           {yyextra->SayHello(">=");return GE;}
"<"            {yyextra->SayHello("<");return LT;}
"<="           {yyextra->SayHello("<=");return LE;}
"+"            {yyextra->SayHello("+");return ADD;}
"-"            {yyextra->SayHello("-");return SUB;}
"*"            {yyextra->SayHello("*");return MUL;}
"/"            {yyextra->SayHello("/");return DIV;}
"%"            {yyextra->SayHello("%");return MOD;}
"say_hello" { yyextra->SayHello("I am scanner, how are you doing?");
				return HELLO;}
{NUMB} {
				yyextra->SayHello(yytext);
				yyextra->copy_double(yylval->double_value, yytext);
				return NUM;
}
[\n]			{ return '\n'; }
[ \t]			{ /* empty */ }
[A-Za-z_][A-Za-z_0-9]* {
				yyextra->SayHello(yytext);
				return IDENTIFIER;
}
.				{printf("unexpected character\n");}
%%

