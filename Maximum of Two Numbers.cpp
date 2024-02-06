#include<iostream>
using namespace std;
int main(){
// Maximum of Two Numbers
int num1,num2;
cout<<"Enter num1 and num2: ";
cin>>num1>>num2;
if(num1>num2){
	cout<<num1<<" is greater then "<<num2;
}
else if(num2>num1){
	cout<<num2<<" is greater then "<<num1;
} 
else {
	cout<<"error...";
}
}

