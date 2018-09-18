# Iterator-patterm-example
example for iterator pattern

The example program illustrates restaurant where "dining menu" and "part time worker" is managed with list classes "DiningMenuList" and "PartTimeWorkerList".

# Class diagram - ToStringAble part
ToStringAble is a interface to provide toString() method.
DiningMenu, PartTimeWorker classes implements the toString() method for their own ways.

![tostringable](https://user-images.githubusercontent.com/25341053/45668461-c7985c00-bb57-11e8-9f77-5a5eecddb379.png)


# Class diagram - Iteratorable part
Iteratorable is  a interfalce to provide createIterator() method.
DiningMenu, PartTimeWorker are classes that manages DiningMenu and PartTimeWorker classes with list, and implements the createIterator() method.

![iteratarable](https://user-images.githubusercontent.com/25341053/45668443-b6e7e600-bb57-11e8-906e-6ecf7da9c68f.png)

