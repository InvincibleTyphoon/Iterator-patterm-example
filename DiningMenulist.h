#pragma once
#include <vector>
#include "DiningMenu.h"
#include "Iteratorable.h"

using namespace std;

// list class for dinning menus
class DiningMenuList : public Iteratorable
{
public:
	DiningMenuList();
	void addItem(const DiningMenu& menu);

	/****************Iteratorable******************/
	ToStringAble& begin();
	ToStringAble& next();
	bool isLast() const;
	const ToStringAble& currentItem();
	///////////////////////////////////////////////////	
private:
	vector<DiningMenu> menuList;
	int idx = -1;	// index for implementing iterator pattern.
};