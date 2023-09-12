                //file handling

#include<iostream>

#include<fstream>
#include<string>

using namespace std;

int main()
{
//	ofstream onFile;
	ifstream inFile;
	string str;
	
	inFile.open("file.txt");
	
//	onFile.open("file.txt");
//	
//	cout<<"File created"<<endl;
	
	inFile>>str;
	cout<<str;
	
	while(getline(inFile,str))
	{
		cout<<str;
	}
	
	inFile.close();




}
