#include<iostream>
#include<string>
using namespace std;
int main(){
//	string 
string name="tanawish";
cout<<name;
/* string concatination*/
/*The + operator can be used between strings 
to add them together to make a new string. This is called concatenation:*/
string secondName="ali";

cout<<endl<<"concatination of string "<<name + secondName<<endl;
//size of string (length) variable 
cout<<name.length()<<endl;
cout<<name.size()<<endl;
/*Access Strings You can access the characters in a string
 by referring to its index number inside square brackets [].*/
cout<<"string index number is: at position 6"<<name[6]<<endl;
cout<<secondName[0]<<endl;
secondName[2]='l';
//getline()
cout<<secondName<<endl;
string message;
getline(cin,message);
cout<<message;
return 0;
}
