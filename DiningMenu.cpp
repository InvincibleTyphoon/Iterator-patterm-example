#pragma once
#include "DiningMenu.h"
DiningMenu::DiningMenu(const int price, string& menuName)
{
	this->price = price;
	this->menuName = string(menuName);
}

DiningMenu::DiningMenu(const DiningMenu& other)
{
	this->price = other.price;
	this->menuName = string(other.menuName);
}

string DiningMenu::toString()
{
	return string(menuName + " / " + to_string(price) + "$\n");
}