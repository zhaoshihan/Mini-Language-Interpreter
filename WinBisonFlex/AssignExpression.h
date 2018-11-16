#pragma once
#ifndef _ASSIGNEXPRESSION_H_
#define _ASSIGNEXPRESSION_H_
#include <string>
#include <vector>
#include <string>
#include <unordered_map>

#include "VariableMap.h"
using namespace std;

enum MYTYPE
{
	NUMBER,
	STRING,
};
struct assign_statement
{
	MYTYPE Type = NUMBER;
	string identifier;
	double double_value = 0;
	string string_value;

	assign_statement() = default;
	assign_statement(MYTYPE Type, string identifier, double double_value) :Type(Type), identifier(identifier), double_value(double_value) {}
	assign_statement(MYTYPE Type, string identifier, string string_value) :Type(Type), identifier(identifier), string_value(string_value) {}
};

class AssignExpression
{
private:

public:
	AssignExpression() = default;
	~AssignExpression() = default;
	
	assign_statement* makeAssign(MYTYPE Type, char* const identifier, double double_value);
	assign_statement* makeAssign(MYTYPE Type, char* const identifier, char* const string_value);
};








#endif // !_ASSIGNEXPRESSION_H_

