#pragma once
#ifndef _VARIABLEMAP_H_
#define _VARIABLEMAP_H_

#include <string>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class VariableMap
{
private:
	unordered_map<string, double> doubleIdentifiers;
	unordered_map<string, string> stringIdentifiers;

public:
	VariableMap() = default;
	~VariableMap() = default;

	double getIdentifier(string identifier);
	void setIdentifier(pair<string, double> parameter);
	void setIdentifier(pair<string, string> parameter);
};


#endif // !_VARIABLEMAP_H_

