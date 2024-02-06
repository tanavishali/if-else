#include<iostream>
using namespace std;
int main(){
//	 positive or negative number
   int number;
   cout<<"Enter the number: ";
   cin>>number;
   if(number>0){
   	cout<<number<<" is positive .";
   }
   else if(number<0){
   	cout<<number<<" is negative .";
   }
   else if(number==0){
   	cout<<"you enter 0 .";
   }
}
