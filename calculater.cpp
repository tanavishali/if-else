#include<iostream>
using namespace std;
int main(){
//	 simpele calculater
 int num1,num2;
 char op;
 cout<<"enter charter ` +, -, *, / ` :";
 cin>>op;
 cout<<"enter numbers: ";
 cin>>num1>>num2;
 if(op == '+'){
 	int sum;
 	sum=num1+num2;
 	cout<<sum;
 }
else if(op == '-'){
 	int sub;
 	sub=num1-num2;
 	cout<<sub;
 }
 else if(op == '*'){
 	int mul;
 	mul=num1*num2;
 	cout<<mul;
 }
 else if(op == '/'){
 	int div;
 	div=num1-num2;
 	cout<<div;
 }
 else {
 	cout<<"wrong oprator:";
 }
 return 0;
}
