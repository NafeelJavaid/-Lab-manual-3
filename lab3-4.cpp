#include<iostream>
using namespace std;
//This program is to check your age
int main() {
	//Declearing variable
int x;
 cout<< " Tell your age:";
  cin>>x;
if (x<=12 || x<=19){
	//Using if statement
if(x<=12){
	//using nested if statement
	cout<<"You are a child";}
	else if(x<=19) {
	cout<<"You are a teenager";}
}
else{
	cout<<" You are an adult";
}
return 0;
     }

 