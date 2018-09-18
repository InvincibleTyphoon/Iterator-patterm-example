#pragma once
#include "ToStringAble.h"
#include <string>

using namespace std;

class DiningMenu : public ToStringAble
{
public:
	DiningMenu(const int price, string& menuName);
	DiningMenu(const DiningMenu& other);
	string toString();
private:
	int price;
	string menuName;
};
