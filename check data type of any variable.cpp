#include<iostream>
#include <typeinfo>
using namespace std;
int main(){
//	check any data type of any variable
	double number=3.0;
	string name="ali";
	char male='M';
	cout<<" "<<typeid(number).name()<<endl;
cout<<" "<<typeid(char).name();
}
