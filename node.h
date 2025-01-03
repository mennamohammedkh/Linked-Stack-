//file node.h

#ifndef Node_
#define Node_

template <class T> class LinkedStack;

template <class T>
class Node
{
	friend LinkedStack<T>;

private:
	T data;
	Node<T>* link;
};

#endif