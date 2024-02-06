#include<iostream>
#include <cmath> // Include the cmath library for the sqrt function
using namespace std;
int main(){
//compute the square-root of a given number.
// If the given number is negative, your function should give an error message.
double number;
cin>>number;
if(number>=0){
	double square_root= sqrt(number); /* sqrt is a built in function*/
	cout<<"the square root of the number is :"<<square_root;
}
else{
	cout<<"error because the number is negative :";
}
return 0;
}
