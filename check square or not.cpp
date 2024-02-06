//Take values of length and breadth of a rectangle from user and check if it is square or not.
#include<iostream>
using namespace std;
int main(){
	int length,breadth;
	cout<<"Take values of length and breadth of a rectangle from user and check if it is square or not."
;
	cin>>length>>breadth;
	if(length==breadth){
	cout<<"\nis a square:";
	}
	else {
		cout<<"not square:";
	}
}
