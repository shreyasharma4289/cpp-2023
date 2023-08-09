#include<iostream>
#include<stdlib.h>
using namespace std;

//forward declaration
class B;
class A
{
	int data;   //private(default)
	
	public:
		
		void setValue(int value)   //method
		{
			data=value;
		}
	friend void add(A,B);
};

class B
{
	int data;
	public:
		void setValue(int value)
		{
			data=value;
		}
		friend void add(A,B);
};

void add (A obj1, B obj2)
{
	cout<< "A+B: "<< obj1.data + obj2.data <<endl;
}

//void printData(A obj1)
//{
//	cout<< obj1.data <<endl;
//}

int main()
{
	A a1;
	a1.setValue(10);
	
	B b1;
	b1.setValue(5);
	
	add(a1,b1);
}
