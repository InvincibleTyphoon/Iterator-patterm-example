#pragma once
#include <string>
using namespace std;

// interface for toString() method
class ToStringAble
{
public:
	virtual string toString() = 0;
};