#include<iostream>
using namespace std;
int gettarget(int arr[],int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return i;
			break;
			
		}
	}

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
	cout<<"key value to find: "<<endl;
	cin>>key;
	
	cout<<gettarget(arr,10,key);
}
