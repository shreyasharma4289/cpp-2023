#include<iostream>
using namespace std;

int fib(int n)
{
//	if ((n==1) || (n==0))
//	{
//		return (n);
//	}
//	else

	{
		return (fib(n-1)+fib(n-2));
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<"Fibonacci series: ";
	for (int i=1;i<=n;i++)
	{
		cout<<fib(i)<<endl;
	}
}

