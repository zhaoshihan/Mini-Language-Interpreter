#pragma once
#include <string>
#include <vector>
#include <string>

using namespace std;

static int lineNumber = 1;

struct Node
{
	string nodeType="number";
	Node* left=nullptr;
	Node* right=nullptr;
	double value=0;
	Node(double value):value(value){}
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
	}
};


class ScannerParserCL
{
private:
	Node* treeHead;
public:
	ScannerParserCL();
	~ScannerParserCL();
	Node* getTreeHead();

	int RunParser(const std::string& filename = "");

	void SayHello(char* const msg) const;

	void copy_cstr(char** pTarget, const char* pSource);
	void copy_int(int& Target, const char* pSource);
	void copy_double(double& Target, const char* pSource);
	Node* makeNode(double value);
	Node* makeNode(double value, Node* left, Node* right, string operand);
	Node* makeNode(double value, Node* right, string operand);
	void makeTreeHead(Node* node);
	void printTree(Node* pNode, const string& prefix="");
};



