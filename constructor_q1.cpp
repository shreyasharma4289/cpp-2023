/*Write a C++ class called "Employee" that has three
 private member variables: "name", "salary", and "employeeCode". 
 The class should have a constructor that initializes these member 
 variables and a public member function called "displayInfo"
 that prints out the employee's name, salary, and employeeCode.*/
 
 #include<iostream>
using namespace std;

class Employee{
	public:
		string name;
		int salary;
		int employeeCode;
		
Employee(string empName,int empSal,int empCode)
{
	name=empName;
	salary=empSal;
	employeeCode=empCode;
}

	void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"salary: "<<salary<<endl;
			cout<<"code :" <<employeeCode<<endl;
		}
};

int main()
{
	Employee e1("abc",20000,001);
	e1.display();
}
