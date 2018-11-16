#include "AssignExpression.h"

assign_statement * AssignExpression::makeAssign(MYTYPE Type, char* const identifier, double double_value)
{
	assign_statement* pState = new assign_statement(Type, identifier, double_value);
	return pState;
}

assign_statement * AssignExpression::makeAssign(MYTYPE Type, char* const identifier, char* const string_value)
{
	assign_statement* pState = new assign_statement(Type, identifier, string_value);
	return pState;
}

