//Check if a character is an operator (+, -, *, /) or not.
#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch== '+'|| ch=='*' || ch=='/'|| ch=='-'){
		cout<<ch<<" this  character is a operator,";
	}
	else{
		cout<<ch<<" not operator";
	}
}
