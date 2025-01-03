// file lstack.h
// linked stack

#ifndef LinkedStack_
#define LinkedStack_

#include "node.h"
#include <iostream>
#include <cmath>
using namespace std;

template<class T>
class LinkedStack
{
public:
	LinkedStack() { top = 0; }
	~LinkedStack();

	bool IsEmpty() const { return top == 0; }
	bool IsFull() const;

	T Top() const;
	LinkedStack<T>& Add(const T& x);
	LinkedStack<T>& Delete(T& x);
	int Counter();
	LinkedStack<T>& Print();
	double Mean();
	double Variance();
	double StrDev();

private:
	Node<T>* top;
};

template<class T>
LinkedStack<T>::~LinkedStack()
{
	Node<T>* next;
	while (top)        
	{
		next = top->link;     
		delete top;
		top = next;
	}
}

template<class T>
bool LinkedStack<T>::IsFull() const
{
	Node<T>* p = new Node<T>;
	delete p;
	return false;
}

template<class T>
T LinkedStack<T>::Top() const
{
	if (IsEmpty()) {
		return T();
	}
	return top->data;
}

template<class T>
LinkedStack<T>& LinkedStack<T>::Add(const T& x)
{
	Node<T>* p = new Node<T>;
	p->data = x;
	p->link = top;
	top = p;
	return *this;
}

template<class T>
LinkedStack<T>& LinkedStack<T>::Delete(T& x)
{
	if (IsEmpty()) {
		return *this;
	}
	x = top->data;
	Node<T>* p = top;
	top = top->link;
	delete p;
	return *this;
}

template<class T>
int LinkedStack<T>::Counter()
{
	int count = 0;
	Node<T>* current = top;
	while (current != nullptr) {
		count++;
		current = current->link;
	}
	return count;
}

template<class T>
LinkedStack<T>& LinkedStack<T>::Print()
{
	Node<T>* pointy = top;
	int count = Counter();
	for (int i = 0; i < count; i++) {

		cout << pointy->data << "     ";
		pointy = pointy->link;
	}
	cout << endl;
	return* this;
}

template<class T>
double LinkedStack<T>::Mean() {
	int count = Counter();
	if (count == 0) return 0;

	double sum = 0.0;
	Node<T>* pointy = top;
	while (pointy != nullptr) {

		sum += pointy->data;    //Iteration 5
	  //sum = 49.0 + 3.0 = 52.0;
	  //pointy = nullptr;
		pointy = pointy->link;
	}

	double mean = sum / count;
	     //mean = 52.0 / 5 = 10.4;
	return mean;
	     //mean = 10.4;
}

template<class T>
double LinkedStack<T>::Variance() 
{
	double mean = Mean();  //mean = 10.4;
	double sum = 0;        //initialized to 0;
	int count = Counter(); //is set to 5 (from Counter());
	double sub_then_power = 0.0;
	Node<T>* pointy = top;

	while(pointy != nullptr){

		sub_then_power = pointy->data - mean;
	  //sub_then_power = 20 - 10.4 = 9.6;;
		sub_then_power = sub_then_power * sub_then_power;
	  //sub_then_power = 9.6 * 9.6 = 92.16
		sum += sub_then_power;
	  //sum = 36.28 + 92.16 = 128.44
	  //pointy = nullptr;
	   pointy = pointy->link;

	}
	double variance = sum / count;
	     //variance = 183.20 / 5 = 36.64
	return variance;
	     //variance = 36.64
}


template<class T>
double LinkedStack<T>::StrDev() {
	double variance = Variance(); //variance = 36.64
	double strdev = sqrt(variance); 
	    // strdev = sqrt(36.64) = 6.053
	return strdev;
	    // strdev = 6.053
}
#endif


