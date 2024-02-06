#include<iostream>
using namespace std;
int main(){
//	Check Alphabet, Digit, or Special Character:
char ch;
cout<<"Enter the character:";
cin>>ch;
if(isalpha(ch)){
	cout<<ch<<" is alphabet:";
	
}
else if (isdigit(ch)){
		cout<<ch<<" is digit:";

}
else{
	cout<<ch<<" is special character:";
}
return 0;
}
