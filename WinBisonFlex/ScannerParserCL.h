#pragma once

#include "MathExpression.h"
#include "AssignExpression.h"
#include "VariableMap.h"

using namespace std;


const int INF = 0x3f3f3f3f;
static int lineNumber = 1;

class ScannerParserCL
{
private:
	Node* treeHead;
	MathExpression* pMath;
	AssignExpression* pAssign;
	VariableMap* pVariableMap;

public:
	ScannerParserCL();
	~ScannerParserCL();
	Node* getTreeHead();
	MathExpression* getPMath();
	AssignExpression* getPAssign();
	VariableMap* getPVariableMap();

	int RunParser(const std::string& filename = "");

	void SayHello(char* const msg) const;
	void copy_cstr(char** pTarget, const char* pSource);
	void copy_int(int& Target, const char* pSource);
	void copy_double(double& Target, const char* pSource);
	void copy_string(string& Target, const char* pSource);

	void makeTreeHead(Node* node);
	void printTree(Node* pNode, const string& prefix="");
	void printIdentifier(string identifier);
	void storeAssign(assign_statement * pState);
};



