#include<iostream>
using namespace std;
int main(){
//	 swap two numbers with out using 3 number
int a,b;
cin>>a>>b;
cout<<a<<" "<<b<<" before swap\n";
a=a+b;
b=a-b;
a=a-b;
 cout<<a<<" "<<b<<" after swap\n";

}

