#include "ScannerParserCL.h"

#include "analyzer.h"
#include "scanner.h"
#include <iomanip>

ScannerParserCL::ScannerParserCL()
{
	treeHead = nullptr;
}


ScannerParserCL::~ScannerParserCL()
{
	delete treeHead;
	treeHead = nullptr;
}

Node * ScannerParserCL::getTreeHead()
{
	return this->treeHead;
}

void ScannerParserCL::SayHello(char* const msg) const
{
	std::cout << "Msg from ScannerParserCL: " << msg << std::endl;
}
int ScannerParserCL::RunParser(const std::string& filename)
{
	int rlt;

	try
	{
		yyscan_t scanner;

		FILE *in = nullptr;  errno_t er;

		if (filename != "")
			er = fopen_s(&in, filename.c_str(), "r");
		else
			in = stdin;

		yylex_init_extra(this, &scanner);
		yyset_in(in, scanner);

		rlt = yyparse(scanner, this);

		yylex_destroy(scanner);

		if (in != nullptr)
		{
			fclose(in);
			in = nullptr;
		}
	}
	catch (std::exception&)
	{

	}

	return rlt;
}


void ScannerParserCL::copy_cstr(char** pTarget, const char* pSource)
{
	size_t size = strlen(pSource) + 1;
	*pTarget = new char[size];
	strcpy_s(*pTarget, size, pSource);
}

void ScannerParserCL::copy_int(int& Target, const char* pSource)
{
	Target = atoi(pSource);
}

void ScannerParserCL::copy_double(double& Target, const char* pSource)
{
	Target = atof(pSource);
}

Node * ScannerParserCL::makeNode(double value)
{
	Node* node = new Node(value);
	return node;
}

Node * ScannerParserCL::makeNode(double value, Node * left, Node * right, string operand)
{
	Node* node = new Node(value, left, right, operand);
	return node;
}

Node * ScannerParserCL::makeNode(double value, Node * right, string operand)
{
	Node* node = new Node(value, right, operand);
	return node;
}

void ScannerParserCL::makeTreeHead(Node * node)
{
	treeHead = node;
}

void ScannerParserCL::printTree(Node * pNode, const string& prefix)
{
	if (pNode != nullptr)
	{
		bool hasLeft = pNode->left != nullptr;
		bool hasRight = pNode->right != nullptr;

		if (!hasLeft && !hasRight)
		{
			return;
		}
		cout << prefix;
		cout << ((hasLeft  && hasRight) ? "©À©¤©¤ " : "");
		cout << ((!hasLeft && hasRight) ? "©¸©¤©¤ " : "");

		if (hasRight)
		{
			bool printStrand = (hasLeft && hasRight && (pNode->right->right != nullptr || pNode->right->left != nullptr));
			string newPrefix = prefix + (printStrand ? "©¦   " : "    ");
			cout << pNode->right->nodeType << "=" << pNode->right->value << endl;
			printTree(pNode->right, newPrefix);
		}

		if (hasLeft)
		{
			cout << (hasRight ? prefix : "") << "©¸©¤©¤ " << pNode->left->nodeType << "=" << pNode->left->value << endl;
			printTree(pNode->left, prefix + "    ");
		}
	}
	else {
		return;
	}
}
