#include<iostream>
using namespace std;

//base(parent)
class Animal{
	public:
	void eat()
	{
		cout<<"animal can eat"<<endl;
	}
	void sleep()
	{
	cout<<"animal can sleep"<<endl;
	}
	
};


//derived(child)
class Dog: public Animal{
	public:
		void bark()
		{
			cout<<"dog is barking"<<endl;
		}
	
};

int main()
{
	Dog d1;
	
	d1.eat();
}
