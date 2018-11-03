	// generate header file
%defines "analyzer.h"

	// the parser implementation file name
%output "analyzer.cpp"

	// for errors location tracking support
%locations

	// bison debug message for developer
%verbose

	// Enable run-time trace
%define parse.trace

	// intructs bison to generate re-entrant parser
%define api.pure full

	// only multiple parsers' are used in the same project
	//%define api.prefix {TKN_}

	// provides verbose error messages about syntax error for users
%define parse.error verbose

	// additional call argument for lexer
	// this is a must-have for re-entrant scanner 
%param	{yyscan_t scanner}

	// for interaction with my own C++ class
%parse-param	{ScannerParserCL* pParseTree}

	// place this code at the top of 
	// generated bison implementation file, i.e., parser.cpp
%code requires
{
	//code requires can show the error messages
	#pragma warning (disable: 4005)

	#include <iostream>
	#include <cstdio>
	#include <string>

	#include "ScannerParserCL.h"
		
	using namespace std;

	typedef void* yyscan_t;
}

	// this code block is used for declaration type and functions
	// that requires YYSTYPE, the symantic type
%code {

	// flex's data type
	typedef void* yyscan_t;

	extern int yylex(YYSTYPE*, YYLTYPE*, yyscan_t);

	void yyerror (YYLTYPE*, yyscan_t yyscanner, ScannerParserCL* pParseTree, const char*);
}

%initial-action
{
	/* code for initialization before parsing 
		code in this block is executed each time yyparse is called. */

		// for runtime debugging
		// yydebug = 1;
}

	// we are going to use
	// bison's newer semantic data type definitions
	// %define api.value.type union
%union
{	int int_value;
	double double_value;
	char* cstr;
	Node* node;
	assign_statement* assignment;
}
	//%define api.value.type { double }

	// tokens are terminal symbol
	// terminal symbols are defined using %token, %left, %right, etc..

%token<double_value> NUM 
	// %token<int_value> INT_NUM
%token<cstr> IDENTIFIER
%token HELLO "hello msg"
%token INT_TYPE FLOAT_TYPE BOOL_TYPE STRING_TYPE
%token DQ_MARK EXC_MARK INCREASE DECREASE
%token STR_VAL PRINT_T COMMENT  
%token FUNCTION IF ELSE ELSIF WHILE FOR RETURN_T BREAK CONTINUE NULL_T
        LC RC SEMICOLON COMMA ASSIGN LOGICAL_AND LOGICAL_OR
        EQ NE GT GE LT LE MOD TRUE_T FALSE_T GLOBAL_T
%left SUB ADD
%left MUL DIV
%left LP RP


	// non-terminal symbols should be defined using %type in bison keyword
%type<node> expr
%type<assignment> assignment

	// for parser debugging and tracing use
	//%printer { fprintf(yyoutput, "--- %s", $$); } <cstr>

	// for destructors' to call when parser' stack unwinding
	// these routines are called only when error recovery by bison
	//%destructor { std::cout<<$$<<" is deleted"; delete[] $$; $$ = nullptr;  } <cstr>

%start program

%%

program: %empty
	| program line
	;
	
line: '\n'
	| expr '\n'		{ 
		pParseTree->makeTreeHead($1);
		cout << "Parsed: "<<$1->nodeType<<"="<<$1->value<<endl;
		pParseTree->printTree(pParseTree->getTreeHead());
}
	| assignment '\n'	{   
		pParseTree->storeAssign($1);
}
	| PRINT_T IDENTIFIER '\n'	{ pParseTree->printIdentifier($2); }
	| HELLO '\n'	{ pParseTree->SayHello("I am a parser!");}
	| error '\n'	{ yyerrok; }
	; 

assignment: IDENTIFIER ASSIGN expr	{$$ = pParseTree->makeAssign(NUMBER, $1, $3->value);}
	;

expr: NUM		{ $$ = pParseTree->makeNode( "number",$1);}
	| IDENTIFIER	{	
		double result = pParseTree->getIdentifier($1);
		if(isnan(result)){ YYERROR; }
		else{ $$ = pParseTree->makeNode( $1, result); }
}
	| expr ADD expr	{$$ = pParseTree->makeNode($1->value+$3->value, $1, $3, "+");}
	| expr SUB expr	{$$ = pParseTree->makeNode($1->value-$3->value, $1, $3, "-");}
	| expr MUL expr	{$$ = pParseTree->makeNode($1->value*$3->value, $1, $3, "*");}
	| expr DIV expr	{
		double num = $3->value;
		if(num >=(-1e-6)&& num<=(1e-6)){ printf("Division by zero\n"); YYERROR; }
		else{ $$ = pParseTree->makeNode($1->value/$3->value, $1, $3, "/"); }
}
	| LP expr RP { $$ = pParseTree->makeNode($2->value, $2, "()"); }
	| SUB expr %prec LP {$$ = pParseTree->makeNode(-$2->value, $2, "-");}
	;

%%

// newer yyerror() function definition
// for use with reentant scanner and parser
// with location tracking
void yyerror (YYLTYPE *yylloc, yyscan_t yyscanner,
	 ScannerParserCL* pParseTree, const char* msg)
{
	std::cout<<"Error - "<<msg<<std::endl;
}