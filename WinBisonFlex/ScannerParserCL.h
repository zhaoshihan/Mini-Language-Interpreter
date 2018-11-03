#pragma once
#include <string>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

enum MYTYPE
{
	NUMBER,
	STRING,
};
const int INF = 0x3f3f3f3f;
static int lineNumber = 1;

struct Node
{
	string nodeType;
	Node* left=nullptr;
	Node* right=nullptr;
	double value=0;

	Node(const char* nodeType, double value):nodeType(nodeType), value(value){}
	Node(double value, Node* left, Node* right, string nodeType):value(value),left(left),right(right), nodeType(nodeType){}
	Node(double value, Node* right, string nodeType):value(value),right(right),nodeType(nodeType){}
	~Node() {
		if (left)
		{
			delete left;
			left = nullptr;
		}
		if (right)
		{
			delete right;
			right = nullptr;
		}
		delete this;
	}
};

struct assign_statement
{
	MYTYPE Type = NUMBER;
	string identifier;
	double double_value = 0;
	string string_value;

	assign_statement() = default;
	assign_statement(MYTYPE Type, string identifier, double double_value):Type(Type),identifier(identifier),double_value(double_value){}
	assign_statement(MYTYPE Type, string identifier, string string_value ):Type(Type),identifier(identifier), string_value(string_value){}
};


class ScannerParserCL
{
private:
	Node* treeHead;
	unordered_map<string, double> doubleIdentifiers;
	unordered_map<string, string> stringIdentifiers;

public:
	ScannerParserCL();
	~ScannerParserCL();
	Node* getTreeHead();

	int RunParser(const std::string& filename = "");

	void SayHello(char* const msg) const;
	void copy_cstr(char** pTarget, const char* pSource);
	void copy_int(int& Target, const char* pSource);
	void copy_double(double& Target, const char* pSource);
	void copy_string(string& Target, const char* pSource);

	Node* makeNode(const char* ,double value);
	Node* makeNode(double value, Node* left, Node* right, string operand);
	Node* makeNode(double value, Node* right, string operand);
	void makeTreeHead(Node* node);
	void printTree(Node* pNode, const string& prefix="");

	assign_statement* makeAssign(MYTYPE Type, char* const identifier, double double_value);
	assign_statement* makeAssign(MYTYPE Type, char* const identifier, char* const string_value);
	void storeAssign(assign_statement* pState);
	void printIdentifier(string identifier);
	double getIdentifier(string identifier);
};



