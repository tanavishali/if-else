#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b;
	cout<<a<<" "<<b<<" before swap\n ";
	c=b;
	b=a;
	a=c;
	cout<<"after swap: "<<a<<" "<<b;
	
}
