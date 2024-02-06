#include<iostream>
using namespace std;
int main()
{
//	school grade system
	double marks;
	cout<<"Enter your marks out of 100 :";
	cin>>marks;
	if(marks<=100){
		
    	if(marks<25){
		cout<<"F grade:";
	}
	else if(marks>25 && marks<45){
		cout<<"E grade:";
	}
		else if(marks>=45 && marks<50){
		cout<<"D grade:";
	}
		else if(marks>=50 && marks<60){
		cout<<"C grade:";
	}
		else if(marks>=60 && marks<70){
		cout<<"B grade:";
	}
		else if(marks>=70 && marks<80){
		cout<<"A grade:";
	}
	else if(marks>=80 && marks<99){
		cout<<"A+ grade";
	}
	else{
		cout<<"try next year:";
	}
}
else{
	cout<<"Enter marks out of 100";
}
}
