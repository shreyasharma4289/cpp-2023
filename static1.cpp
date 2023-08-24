#include<iostream>
using namespace std;

class student{
	int id;
	//int count=0;  //different for each entity
	//therefore stattic is used
	static int count; //common for all objects
	
	public:
		
		void setData()
		{
			cout<<"Enter id: "<<endl;
			cin>>id;
			count++;
		}
		void getData()
		{
			cout<<"The ID of student is: "<<id<<"count is:"<<count<<endl;
		}
};

int student::count;

int main()
{
	student s1,s2,s3;   //cout  is different for each s1
	
	s1.setData();
	s1.getData();
	
	s2.setData();
	s2.getData();
	
	s3.setData();
	s3.getData();
	
}
