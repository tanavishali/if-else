//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<" Enter the character to check is lower or uppor case:";
	cin>>ch;
	if(ch>='a' && ch<='z'){
		cout<<"lower case:";
	}
	else if(ch>='A' && ch<='Z'){
		cout<<"upper case:";
	}
	else{
		cout<<"invalid!";
	}
}
