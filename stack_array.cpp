#include<iostream>
using namespace std;

class Stack{
	int *arr;
	int top;
	int size;
	
	public:
		Stack()
		{
			arr = new int [size];
			top= -1;   
		}
		
	void push(int val)
	{
		
		if (top==size-1)
		{
			cout<<"Stakc ovrflow"<<endl;
			return;
		}
		top++;
		arr[top]=val;
	}
	
    void pop()
    {
    	top--;
	}
	
	int Top()
	{
		if(top==-1)
		{
			cout<<"NO"<<endl;
			return -1;
		}
		return arr[top];
	}
	
	bool empty()
	{
		return top==-1;
		
	}
	
};
int main()
{
	Stack st;
	st.push(1);
	cout<<st.Top();
	
}
