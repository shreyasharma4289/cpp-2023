#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		int age;
		string gender;
		
		
		//Default constructor
		Student()
		{
			cout<<"Test"<<endl;
		}
		Student(string myName,int myAge)
		{
			name=myName;
		}
};

int main()
{
	Student s1("HI",22);
	
	cout<<s1.name<<s1.age;
}
