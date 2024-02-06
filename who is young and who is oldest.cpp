//Take input of age of 3 people by user and determine oldest and youngest among them.
#include<iostream>
using namespace std;
int main(){
	int age1,age2,age3;
	cin>>age1>>age2>>age3;
	if(age1>age2 && age1>age3){
		cout<<age1<<" is youngest:";
		if(age2>age3){
			cout<<age3<<" is oldest";
		}
		else{
			cout<<age2<<" is oldest ";
		}
	}
	else if(age2>age1 && age2>age3){
		cout<<age2<<" is youngest:";
		if(age1>age3){
			cout<<age3<<" is oldest ";
		}
		else{
			cout<<age1<<" is oldest";
		}
	}
	else if(age3>age2 && age3>age1){
		cout<<age3<<" is youngest:";
		if(age2>age1){
		cout<<age1<<" is oldest:";
		}
		else{
			cout<<age2<<" is oldest";
		}
	}
	else{
		cout<<"invalide!";
	}
}
