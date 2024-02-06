#include<iostream>
using namespace std;
int main(){
	int quantity;
const	double discount=0.10;
const int unit_price=100;
cout<<"enter the quantity ";
cin>>quantity;
int total_price=quantity*unit_price;
if(quantity>1000){
	double total_amount=total_price*discount;
	total_price= total_price-total_amount;
	cout<<"you get the discount 10% and total price is " <<total_price;
}
else {
	cout<<total_price;
}
}
