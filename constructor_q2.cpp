/* Write a C++ class called "Rectangle" that has two private
 member variables: "length" and "width". The class should 
 have a constructor that initializes these member variables 
 and public member functions called "getArea" and "getPerimeter"
 that return the rectangle's area and perimeter, respectively.*/
 
#include<iostream>
using namespace std;

class Rectangle{
	int length;
	int width;
	
	public:
		
		Rectangle(int l,int w)
		{
			length=l;
			width=w;
		}
		void getArea()
		{
			cout<<"area: "<<length*width<<endl;
		}
		void getPerimeter()
		{
			cout<<"Perimeter: "<<length+width;
		}
	
};
int main()
{
	Rectangle r1(20,30);
	r1.getArea();
	r1.getPerimeter();
}
		
