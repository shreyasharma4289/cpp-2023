 //destructor
#include<iostream>
using namespace std;

class Person ()
{
	public:
	 Person()
	 {
	 	cout<<"Constructor called"<<endl;
	}	
	
	~Person()
	{
		cout<<"Destructor called"<<endl;
	}
};


int main()
{
	Person p1;	//each called once
	
	//created in static memory
	
//	Person p1,p2 ;//each called twice
}
