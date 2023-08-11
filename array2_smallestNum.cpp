#include<iostream>
using namespace std;




//find smallest number in array
int getMin(int num[],int size)
{
	int min= INT_MAX;
	for (int i=0;i<=size-1; i++)  //index=size-1, i=0 starting
	{
		if (num[i]<min)
		{
			min=num[i];
		}
	}
	return min;
}

int getMax(int num[],int size)
{
	int max= INT_MIN;
	for (int i=0;i<=size-1; i++)  //index=size-1, i=0 starting
	{
		if (num[i]>max)
		{
			max=num[i];
		}
	}
	return max;
}

int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>> size;
	int arr[100];
	
	for (int i=0;i<size; i++)
	{
	cout<< "elements: ";
	cin>>arr[i];
	}
	
	cout<<"min is: "<<getMin(arr,size)<<endl;
	cout<<"MAx is :"<<getMax(arr,size);
	
}
