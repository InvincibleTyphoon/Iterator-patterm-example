#include "DiningMenu.h"
#include "Iteratorable.h"
#include "PartTimeWorker.h"
#include "ToStringAble.h"
#include "DiningMenulist.h"
#include "PartTimeWorkerList.h"
#include <string>
#include <iostream>

using namespace std;


// use of Iterator pattern
// the type of passed parameter is not important thanks to the pattern.
void viewToStringableList(Iteratorable& iter)
{
	cout << iter.begin().toString();
	while (!iter.isLast())
		cout << iter.next().toString();
}

int main(int argc, char* argv[])
{
	DiningMenuList menuList;
	PartTimeWorkerList partTimeWorkerList;

	/**********************************create test datas***********************************/
	string tempString = string("cheese burger");
	menuList.addItem(DiningMenu(10,tempString));
	tempString = string("hotDog");
	menuList.addItem(DiningMenu(5, tempString));
	tempString = string("spaghetti");
	menuList.addItem(DiningMenu(7, tempString));
	tempString = string("salad");
	menuList.addItem(DiningMenu(3, tempString));

	string tempFitstName("Jackson");
	string tempLastName("Michael");
	partTimeWorkerList.addItem(PartTimeWorker(tempFitstName, tempLastName, 35, male));
	tempFitstName = string("Bruth");
	tempLastName = string("Wayne");
	partTimeWorkerList.addItem(PartTimeWorker(tempFitstName, tempLastName, 38, male));
	//////////////////////////////////////////////////////////////////////////////////////

	// These two function calls are valid because DiningMenuList class and PartTimeWorkerList class generalize Iteratorable interface.
	viewToStringableList(menuList);
	viewToStringableList(partTimeWorkerList);

	return 0;
}