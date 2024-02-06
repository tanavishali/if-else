//Determine the day of the week based on the input number (1-7).
#include<iostream>
using namespace std;
int main(){
	
	int day;
	cout<<"Enter the number of day: ";
	cin>>day;
	if(day<=1 || day>=7){
		
	if (day==1){
		cout<<"monday";
	}
	else if (day==2){
		cout<<"tuesday";
	}
		else if (day==3){
		cout<<"wednesday";
	}
		else if (day==4){
		cout<<"thursday";
	}
		else if (day==5){
		cout<<"friday";
	}
		else if (day==6){
		cout<<"saturday";
	}
		else if (day==7){
		cout<<"sunday";
	}
	else{
		cout<<"not correct number";
	}
}
else{
	cout<<"enter number 1 to 7";
}
}
