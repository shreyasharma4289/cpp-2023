#include<iostream>
using namespace std;

enum season{
	summer ,winter ,autumn, spring
};//integer values are assigned
//default values: 0,1,2,3...

int main()
{
	season s1;
	s1=spring;
	cout<<s1;   //3
}
