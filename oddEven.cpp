#include<iostream>
using namespace std;



string getEven(int arr[],int size)
{
	for (int i=0;i<size;i++)
	{
		if((arr[i])%2==0)
		{
			return "even found";
		}
	}
	return "not found\n";
}

string getOdd(int arr[],int size)
{
	for (int i=0;i<size;i++)
	{
		if((arr[i])%2!=0)
		{
			return "odd found";
		}
	}
	return "odd not found";
}

int main()
{
	int key,size, arr[100];
	cout<<"size: ";
	cin>>size;
	for (int i=0;i<size;i++)
	{
		cout<<"elememt: ";
		cin>>arr[i];
		
	}
	
cout<<getEven(arr,10);
cout<<getOdd(arr,10);
}

