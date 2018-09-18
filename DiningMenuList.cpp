#include "DiningMenulist.h"

DiningMenuList::DiningMenuList(){}

void DiningMenuList::addItem(const DiningMenu& menu)
{
	DiningMenu newDiningMenu(menu);
	menuList.push_back(newDiningMenu);
}

ToStringAble& DiningMenuList::begin()
{
	idx = 0;
	return (ToStringAble&) menuList[0];
}

ToStringAble& DiningMenuList::next()
{
	idx++;
	return (ToStringAble&)menuList[idx];
}

bool DiningMenuList::isLast() const
{
	return (menuList.size() -1 <= idx);
}

const ToStringAble& DiningMenuList::currentItem()
{
	return (ToStringAble&)menuList[idx];
}
