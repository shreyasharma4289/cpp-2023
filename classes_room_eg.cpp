#include<iostream>
using namespace std;

class Room
{
	public:
	int length;
	int breadth; 
	int height;
	
	int calculateArea()
	{
		return length*breadth;
	}
	int calculateVolume()
	{
		return length*breadth*height;
	}
};

int main()
{
	Room room1;
	room1.length=10;
	room1.breadth=10;
	room1.height=5;
	
	cout<<"area is "<<room1.calculateArea()<<endl;
	cout<< "area of 2nd room is "<<room1.calculateVolume();  //method calling
}
