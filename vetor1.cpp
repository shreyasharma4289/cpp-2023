//vectors
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vector1= {1,2,3};
	
	cout<<"Original Vector-> ";
	
	//foreach loop
	for(int i : vector)   //auto keyword: type of iterator not know
	{
		cout<< i << " ";
	}
	cout<<endl;
	
	//add element
	vector1.push_back(6);
	
	
	//accesing index element
	cout<<"element at 1: "<<vector1.at(1)<<endl;
	
	
	//change
	vector1.at(1)=22;
	
	
	//delete
	vector1.pop_back();
	
	cout<<"updated: ";
	for(auto i : vector)   //auto keyword: type of iterator not know
	{
		cout<< i << " ";
	}
	cout<<endl;	
}
