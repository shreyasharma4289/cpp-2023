#include<iostream>
using namespace std;

class UnaryOverload{
	int hr,min;
	
	public:
		void input()
		{
			cout<<"enter time: ";
			cin>>hr;
		}
		
	void operator ++()
	{
		hr++;
		min++;
	}
	
	void operator --()
	{
		hr--;
		min--;
	}
	
	void output()
	{
		cout<<"time is: "<<hr<<" hr "<<min<<" min "<<endl;
	}
};

int main()
{
	UnaryOverload obj;
	obj.input();
	obj ++;
	cout<<"After increment: ";
	obj.output();
	
	obj --;
	cout<<"After decrement: ";
	obj.output();
}
