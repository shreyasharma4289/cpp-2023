#include<iostream>
using namespace std;

//operator overloading

class Count{
	int value;
	
	public:
		Count()
		{
			value=10;   //initializing value
		}
	
	void operator++	()
	{
		value=value+3;
	}
	void display()
	{
		cout<<"count: "<<value<<endl;
	}
};

int main()
{
	 Count count1;
	 ++count1;
	 
	 count1.display();
}
