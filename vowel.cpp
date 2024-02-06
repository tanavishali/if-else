#include<iostream>
using namespace std;
int main(){
//	is vowel or not
char ch;
cout<<"Ented charter: (A ,a)";
cin>>ch;
if(isalpha(ch)){
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
	|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'
	){
	cout<<ch<<" is vowel:"; 
}
else {
	cout<<"consonent";
}
}

else{
	cout<<"error";
}
return 0;
}
