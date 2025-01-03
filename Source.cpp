#include <iostream>
#include <conio.h>
#include "lstack.h"

using namespace std;

int main() {
	int x;
	LinkedStack<int> S;

	//Niether add nor delete catch the exception that mieght be thrown by Insert or LinearList<T>::Delete
    //S.Add(1).Add(2).Add(3).Add(4);

	S.Add(3).Add(20).Add(13).Add(11).Add(5);
	//S.Delete(x);
	cout << "Stack top = " << S.Top() << endl;
	cout << "stack = ";
	S.Print();
	cout << endl;

	cout <<"Variance = " << S.Variance()<<endl;
	cout << "Standard deviation = " << S.StrDev() << endl;


}