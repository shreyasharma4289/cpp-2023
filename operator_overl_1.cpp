#include<iostream>
using namespace std;

class Fraction{
	int a;
	int b;
	
	public:
		Function()
		{
			a=0;
			b=0;
		}
		
		void input()
		{
			cout<<"Enter numerator:";
			cin>>a;
			cout<<"enter denominator";
			cin>>b;
		}
		Fraction operator *(Fraction &obj)
		{
			Fraction temp;
			temp.a= a * obj.a;
		    
		    return temp;
		}
		
		void output()
		{
			cout<<"The fraction is"<<a<<"/"<<b;
		}
};


int main()
{
	Fraction f1,f2;
	
	cout<<"Enter first frac:"<<endl;
	f1.input();
	cout<<"Enter second frac:"<<endl;
	f2.input();
	
 result=f1*f2;
	result.ouput();
}
