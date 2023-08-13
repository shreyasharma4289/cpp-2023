#include<iostream>
using namespace std;
	bool linearSearch(int arr[],int size,int key)
	{
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return true;
			
		}
	}
	return false;
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
	
	bool found=linearSearch(arr,10,key);
	if(found) {
		cout <<"key found"<<endl;
	}
	else{
		cout<< "not found";
	}
	
}

