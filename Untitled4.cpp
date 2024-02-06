#include<iostream>
using namespace std;
int main(){
//	 leap year
int year;
cout<<"Enter year: ";
cin>>year;
if(year%4==0 && (year% 100!=0 || year%400==0)){
	cout<<year<<" is leap year:"; 
}
else{
	cout<<year<<" is not leep .";
}
return 0;
}
