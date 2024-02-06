#include<iostream>
using namespace std;
int main(){
//	century year
/*A century year is any year that ends in "00."
Unlike leap years, not all century years are leap years.
A century year is a leap year only if it meets the leap year 
criteria mentioned above
 (divisible by 4, not divisible by 100 unless divisible by 400).
*/
int year;
cin>>year;
if(year%100==0 && year%400==0){
	cout<<year<<" is century year:";
}	
else {
	cout<<year<<"not century year";
}
}
