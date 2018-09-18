#include "PartTimeWorkerList.h"

PartTimeWorkerList::PartTimeWorkerList() {}

void PartTimeWorkerList::addItem(const PartTimeWorker& newWorker)
{
	PartTimeWorker workerInstance(newWorker);
	workerList.push_back(workerInstance);
}

ToStringAble& PartTimeWorkerList::begin()
{
	iter = workerList.begin();
	return (ToStringAble&)(*iter);
}

ToStringAble& PartTimeWorkerList::next()
{
	iter++;
	return (ToStringAble&)(*iter);
}

bool PartTimeWorkerList::isLast() const
{
	list<PartTimeWorker>::iterator tempIter = iter;
	tempIter++;
	return (tempIter == workerList.end());
}

const ToStringAble& PartTimeWorkerList::currentItem()
{
	return (ToStringAble&)iter;
}
