#include "ScannerParserCL.h"

#include "analyzer.h"
#include "scanner.h"
#include <iomanip>



ScannerParserCL::ScannerParserCL()
{
	treeHead = nullptr;
	pMath = new MathExpression();
	pAssign = new AssignExpression();
	pVariableMap = new VariableMap();
}


ScannerParserCL::~ScannerParserCL()
{
	delete treeHead;
	delete pAssign;
	delete pMath;
	delete pVariableMap;

	treeHead = nullptr;
	pAssign = nullptr;
	pMath = nullptr;
	pVariableMap = nullptr;
}

Node * ScannerParserCL::getTreeHead()
{
	return this->treeHead;
}

MathExpression * ScannerParserCL::getPMath()
{
	return pMath;
}

AssignExpression * ScannerParserCL::getPAssign()
{
	return pAssign;
}

VariableMap * ScannerParserCL::getPVariableMap()
{
	return pVariableMap;
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

void ScannerParserCL::copy_string(string& Target, const char* pSource)
{
	Target = pSource;
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

void ScannerParserCL::storeAssign(assign_statement * pState)
{
	if (pState == nullptr)
	{
		printf("get pState = nullptr error \n");
		return;
	}
	MYTYPE Type = pState->Type;
	switch (Type)
	{
	case NUMBER:
		pVariableMap->setIdentifier(pair<string, double>(pState->identifier, pState->double_value));
		break;
	case STRING:
		pVariableMap->setIdentifier(pair<string, string>(pState->identifier, pState->string_value));
		break;
	default:
		printf("error\n");
		break;
	}

}

void ScannerParserCL::printIdentifier(string identifier)
{
	double result = pVariableMap->getIdentifier(identifier);
	if (isnan(result))
	{
		return;
	}
	else {
		cout << "Identifier: " << identifier << "=" << result << endl;
	}
}

