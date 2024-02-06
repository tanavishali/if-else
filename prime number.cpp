#include<iostream>
using namespace std;
int main(){
//find 	 prime number
int number;
cin>>number;
if(number==0 || number==1){
	cout<<number<<" is not prime .";
}
else if(number%2!=0 || number==2){
	cout<<number<<" prime";
}
else{
	cout<<" not prime";
}

}
