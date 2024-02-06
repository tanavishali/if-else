#include<iostream>
using namespace std;
int main(){
//	net bonus of employ
int year;
double salery;
cout<<" service of year: and salery of per month:";
cin>>year>>salery;
if(year>5){
	double netBonus= salery*0.05;
	double netSalery = salery + netBonus;
	cout<<"\n employ net bonus is "<<netBonus <<" and after netSalery is "<<netSalery;
}
else{
	cout<<" \nyou can not get bonus because your year of service is less than 5 years ";
}
}
