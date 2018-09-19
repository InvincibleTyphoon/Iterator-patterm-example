#pragma once
#include "ToStringAble.h"
#include <string>

using namespace std;

// dining menu at a restaurant.
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
