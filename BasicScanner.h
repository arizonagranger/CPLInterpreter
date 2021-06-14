#pragma once
#include <iostream>
#include "BasicToken.h"
#include <list>
using namespace std;

class BasicScanner
{
public:
	BasicScanner(string sourceCode); 
	list<BasicToken> getTokens();

private:
	string _sourceCode;
};

