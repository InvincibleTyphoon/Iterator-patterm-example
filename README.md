# Iterator-patterm-example
example for iterator pattern

The example program illustrates restaurant where "dining menu" and "part time worker" is managed with list classes "DiningMenuList" and "PartTimeWorkerList".

# Class diagram - ToStringAble part
ToStringAble is a interface to provide toString() method.
DiningMenu, PartTimeWorker classes implements the toString() method for their own ways.
https://github.com/InvincibleTyphoon/Iterator-patterm-example/issues/2#issue-361153802

# Class diagram - Iteratorable part
Iteratorable is  a interfalce to provide createIterator() method.
DiningMenu, PartTimeWorker are classes that manages DiningMenu and PartTimeWorker classes with list, and implements the createIterator() method.
https://github.com/InvincibleTyphoon/Iterator-patterm-example/issues/1#issue-361153683
