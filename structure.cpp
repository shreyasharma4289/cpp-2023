#include<iostream>
using namespace std;
//collecting student data
struct Students
{
	string	name;
	int rollNo;
	float marks;
};

int main()
{
	Students student1;     //structure variable
	Students student2;
	student1.name="Shreya";
	student1.marks=99.9;
	student1.rollNo=12212343;
	
	student2.name="ram";
	student2.marks=79.9;
	student2.rollNo=1444343;
	
	cout<< student1.marks <<student1.name;
}
