#include<iostream>
using namespace std;

//reference variable is a reference to an existing variable 

int main()
{
	
	string name="Hello";
	string &ref=name;  //reference var representation
	
	cout<<name<<endl;
	cout<<ref;
	
	
	int a=5;
	
	int &b =a;
	
	cout<<a<<endl;
	a++;
	cout<<a<<endl;
	b++;
	cout<<a<<endl;
}
