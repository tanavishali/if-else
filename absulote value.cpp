#include<iostream>
using namespace std;
int main(){
//	Write a program to print absolute vlaue of a number entered by user. E.g.-

	
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    
    if(x<0)
    {
        x = x*(-1);
    }
    
    cout<<"Absolute value is "<<x;
 
}
