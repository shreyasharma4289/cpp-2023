#include<iostream>
using namespace std;


class Complex{
	int a,b;
	
	public:
		void setNumber(int num1,int num2)
		{
			a=num1;
			b=num2;
		}
		
		void print()
		{
			cout<<"our number is :"<< a<< "+"<< b<< "i"<<endl;
		}
		
		friend Complex sumComplex(Complex , Complex);
};

Complex sumComplex(Complex obj1, Complex obj2)
{
	Complex result;
	result.setNumber((obj1.a + obj2.a) , (obj1.b+ obj2.b));
	return result;
}

int main()
{
	Complex c1 , c2;
	c1.setNumber(1,2);
	c1.print();
	c2.setNumber(2,3);
	c2.print();
}
