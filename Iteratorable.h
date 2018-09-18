#pragma once
#include <vector>
#include <iterator>
#include "ToStringAble.h"

using namespace std;

class Iteratorable
{
public:
	virtual ToStringAble& begin() = 0;
	virtual ToStringAble& next() = 0;
	virtual bool isLast() const = 0;
	virtual const ToStringAble& currentItem() = 0;
};

