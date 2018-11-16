#include "VariableMap.h"
#include <iostream>


double VariableMap::getIdentifier(string identifier)
{
	auto got = doubleIdentifiers.find(identifier);
	if (got == doubleIdentifiers.end())
	{
		printf("not found identifier\n");
		return NAN;
	}
	else
	{
		return got->second;
	}
}

void VariableMap::setIdentifier(pair<string, double> parameter)
{
	doubleIdentifiers.erase(parameter.first);
	doubleIdentifiers.insert(parameter);
}

void VariableMap::setIdentifier(pair<string, string> parameter)
{
	stringIdentifiers.erase(parameter.first);
	stringIdentifiers.insert(parameter);
}
