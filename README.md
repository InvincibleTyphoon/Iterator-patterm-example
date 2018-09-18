# Iterator-patterm-example
example for iterator pattern

The example program illustrates restaurant where "dining menu" and "part time worker" is managed with list classes "DiningMenuList" and "PartTimeWorkerList".

# Class diagram - ToStringAble part
ToStringAble is a interface to provide toString() method.
DiningMenu, PartTimeWorker classes implements the toString() method for their own ways.

![tostringable](https://user-images.githubusercontent.com/25341053/45695522-90986980-bb9c-11e8-807e-df66d024c6d3.png)


# Class diagram - Iteratorable part
Iteratorable is  a interfalce to provide createIterator() method.
DiningMenu, PartTimeWorker are classes that manages DiningMenu and PartTimeWorker classes with list, and implements the createIterator() method.

![iteratorable](https://user-images.githubusercontent.com/25341053/45695532-98f0a480-bb9c-11e8-9fcd-19017d74f519.png)


# Extra Files
IteratorPatternExampleClassDiagram.xml : class diagram file. You should use draw.io to edit it.
IteratorableExample.cpp - cpp file that main() function is included.
