#pragma once
#include <list>
#include "Iteratorable.h"
#include "PartTimeWorker.h"

using namespace std;

//list class for part time workers
class PartTimeWorkerList : public Iteratorable
{
public:
	PartTimeWorkerList();
	void addItem(const PartTimeWorker& newWorker);

	/************Iteratorable*************/
	ToStringAble& begin();
	ToStringAble& next();
	bool isLast() const;
	const ToStringAble& currentItem();
	//////////////////////////////////////

private:
	list<PartTimeWorker> workerList;
	list<PartTimeWorker>::iterator iter; // iterator for implementing Iterator pattern.

};