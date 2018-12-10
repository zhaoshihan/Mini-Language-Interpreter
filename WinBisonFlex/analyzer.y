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
	bool bool_value;
	char* cstr;
	Node* node;
	assign_statement* assign_ptr;
}
	//%define api.value.type { double }

	// tokens are terminal symbol
	// terminal symbols are defined using %token, %left, %right, etc..

%token<double_value> NUM 
	// %token<int_value> INT_NUM
%token<cstr> IDENTIFIER
%token HELLO "hello msg"
%token INT_TYPE FLOAT_TYPE DOUBLE_TYPE BOOL_TYPE STRING_TYPE
%token DQ_MARK EXC_MARK INCREASE DECREASE
%token STR_VAL PRINT_T COMMENT  
%token FUNCTION IF ELSE ELSIF WHILE FOR RETURN_T BREAK CONTINUE NULL_T
        LC RC SEMICOLON COMMA ASSIGN LOGICAL_AND LOGICAL_OR
        EQ NE GT GE LT LE MOD TRUE_T FALSE_T GLOBAL_T
%left SUB ADD
%left MUL DIV
%left LP RP


	// non-terminal symbols should be defined using %type in bison keyword
%type<node> math_statement
%type<assign_ptr> assign_statement
%type<bool_value> bool_statement
%type<node> while_statement
%type<node> for_statement
%type<node> if_statement
%type<node> function_definition
%type<node> function_employ
%type<node> return_statement
%type<node> TypeForParam
%type<node> block
%type<node> switchLines

	// for parser debugging and tracing use
	//%printer { fprintf(yyoutput, "--- %s", $$); } <cstr>

	// for destructors' to call when parser' stack unwinding
	// these routines are called only when error recovery by bison
	//%destructor { std::cout<<$$<<" is deleted"; delete[] $$; $$ = nullptr;  } <cstr>

%start program

%%

program: line
    | function_definition
	| program line	
	| program function_definition 
	;
	
line: switchLines
	| math_statement '\n'		{ 
		pParseTree->makeTreeHead($1);
		cout << "Parsed: "<<$1->nodeType<<"="<<$1->value<<endl;
		pParseTree->printTree(pParseTree->getTreeHead());
}
	| assign_statement SEMICOLON 	{   
		pParseTree->storeAssign($1);
}
    | bool_statement   {
	cout << "Bool Value: "<<$1<<endl;
	}
	| while_statement  {
	cout<<"语法结构: while循环"<<endl;
	}
	| if_statement  {
	cout<<"语法结构: if判断"<<endl;
	}
	| for_statement  {
	cout<<"语法结构: for循环"<<endl;
	}
	| return_statement SEMICOLON   {
	cout<<"return"<<endl;
	}
	| PRINT_T LP IDENTIFIER RP SEMICOLON { pParseTree->printIdentifier($3); }
	| HELLO '\n'	{ pParseTree->SayHello("I am a parser!");}
	| error '\n'	{ yyerrok; }
	; 

	lines : line
	| lines line
	;

assign_statement: IDENTIFIER ASSIGN math_statement	{ 
		auto pAssign = pParseTree->getPAssign();
		$$ = pAssign->makeAssign($1, $3->value);
}   
       |  IDENTIFIER ASSIGN function_employ{auto pAssign = pParseTree->getPAssign();$$ = pAssign->makeAssign($1, false); }
	   |  IDENTIFIER ASSIGN bool_statement {auto pAssign = pParseTree->getPAssign();$$ =pAssign->makeAssign($1, $3);}
	   |  IDENTIFIER INCREASE  {

	    auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier($1);
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; YYERROR; }
		else{ 
		double value = 0; 
		result.getValue(&value);
		auto pAssign = pParseTree->getPAssign();
	    $$ = pAssign->makeAssign($1, value+1);
		} 

	   }
	   |  IDENTIFIER DECREASE  {

	    auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier($1);
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; YYERROR; }
		else{ 
		double value = 0; 
		result.getValue(&value);
		auto pAssign = pParseTree->getPAssign();
	    $$ = pAssign->makeAssign($1, value-1); 
		}
	   
	   }
	   ;
	


math_statement: NUM	{ 
		auto pMath = pParseTree->getPMath();
		$$ = pMath->makeNode( "number",$1);
}
	| IDENTIFIER	{
		auto pMath = pParseTree->getPMath();
		auto pVariableMap = pParseTree->getPVariableMap();	
		DiyValue result = pVariableMap->getIdentifier($1);
		if(result.type != DOUBLE){ cout<<"Type error: "<< result.type <<endl; YYERROR; }
		else{ double value = 0; result.getValue(&value); $$ = pMath->makeNode( $1, value); }
}   
    | function_employ { $$ = 0;}
	| math_statement ADD math_statement	{auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode($1->value+$3->value, $1, $3, "+");}
	| math_statement SUB math_statement	{auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode($1->value-$3->value, $1, $3, "-");}
	| math_statement MUL math_statement	{auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode($1->value*$3->value, $1, $3, "*");}
	| math_statement DIV math_statement	{
		auto pMath = pParseTree->getPMath();
		double num = $3->value;
		if(num >=(-1e-6)&& num<=(1e-6)){ printf("Division by zero\n"); YYERROR; }
		else{ $$ = pMath->makeNode($1->value/$3->value, $1, $3, "/"); }
}
	| LP math_statement RP { auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode($2->value, $2, "()"); }
	| SUB math_statement %prec LP {auto pMath = pParseTree->getPMath(); $$ = pMath->makeNode(-$2->value, $2, "-");}
	;

	bool_statement: TRUE_T   {
	    $$ = true;
	}
	 |  FALSE_T   {
	    $$ = false; 
	}
	 |  math_statement GT math_statement	{

		$$ = $1 > $3;

}

     |  math_statement LT math_statement {

	    $$ = $1 < $3;

	 } 

	 |  math_statement EQ math_statement {

	    $$ = $1 == $3;

 	 }

	 |  math_statement GE math_statement {

	    $$ = $1 >= $3;

	 }

	 |  math_statement LE math_statement {

	    $$ = $1 <= $3;

	 } 

	 |  math_statement NE math_statement {

	    $$ = $1 != $3;

	 }

	 ;

	 TypeForParam
	 : INT_TYPE
	 | FLOAT_TYPE
	 | DOUBLE_TYPE
	 | BOOL_TYPE
	 | STRING_TYPE
	 ;


	 function_definition
	 : FUNCTION IDENTIFIER LP TypeForParam IDENTIFIER RP switchLines block
	 {
	 
	 cout<<"语法结构: 函数定义--"<<$2<<endl;
	 }
	 | FUNCTION IDENTIFIER LP RP block
	 {
	 
	 };

	 function_employ
	 : IDENTIFIER LP math_statement RP
	 | IDENTIFIER LP bool_statement RP
	 ;

	 return_statement
	 : RETURN_T math_statement
	 | RETURN_T bool_statement
	 ;

	 if_statement
	 : IF LP bool_statement RP switchLines block
	 | IF LP bool_statement RP switchLines block switchLines ELSE switchLines block
	 | IF LP bool_statement RP switchLines block switchLines elsif_list 
	 | IF LP bool_statement RP switchLines block switchLines elsif_list switchLines ELSE switchLines block
	 ;
	 
	 elsif_list
        : elsif
        | elsif_list elsif
        {
           
        }
        ;


     elsif
        : ELSIF LP bool_statement RP switchLines block switchLines
        {
           
        }
        ;


	 while_statement
	 : WHILE LP bool_statement RP switchLines block
	 {
	 }
	 ;

	 for_statement
	 : FOR LP assign_statement SEMICOLON bool_statement SEMICOLON assign_statement RP switchLines block
	 {
	 
	 }
     ;

	 switchLines
	 : switchLines '\n'
	 | '\n'
	 | %empty

	 block
        : LC lines RC
        {
           
        }
        | LC RC
        {
           
        }
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