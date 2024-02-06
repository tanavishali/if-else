#include<iostream>
using namespace std;
int main(){
//	 program calculates the electricity bill.
int unit,rate1,rate2;
cout<<"Enter unit that consume by customer:";
cin>>unit;
rate1=5;
rate2=10;
int bill;
if(unit>=250){
	bill=unit*rate1;
	cout<<bill<<"unit consume by customer:";
	 
}
else{
	bill=unit*rate2;
		cout<<bill<<"unit consume by customer:";
}
}
