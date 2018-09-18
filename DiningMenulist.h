#pragma once
#include <vector>
#include "DiningMenu.h"
#include "Iteratorable.h"

using namespace std;

class DiningMenuList : public Iteratorable
{
public:
	DiningMenuList();
	void addItem(const DiningMenu& menu);
	ToStringAble& begin();
	ToStringAble& next();
	bool isLast() const;
	const ToStringAble& currentItem();
	
private:
	vector<DiningMenu> menuList;
	int idx = -1;
};