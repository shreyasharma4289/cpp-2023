//reverse the sentence : you? are How hello,
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string s)
{
	stack <string> st;
	//iterate string
	for(int i=0; i<(s.length);i++)
	{
		string word="";
		while(s[i] !=' ' && i<length())
		{
			word += s[i];
			i++;
		}	
		st.push(word);
	}


while(!st.empty()){
	cout<<st.top()<<" ";
	st.pop();
}
cout<<endl;
}
int main()
{
	string s="Hello, how are you?";
}
//#include <iostream>
//#include <stack>
//#include <sstream>
//using namespace std;
//int main() {
//string input;
//string word;
//stack<string> stack1;
//getline(cin, input);
//stringstream ss(input);
//while (ss >> word) {
//stack1.push(word);
//}
//while (!stack1.empty()) {
//cout << stack1.top() << " ";
//stack1.pop();
//}
//
//cout << endl;
//
//return 0;
//}
