#include<iostream>
using namespace std;
int main()
//This program is used to check whether the alphabet is consonent or vowel
{
   char alp;
   //declearing the character
	cout<<"Tell an alphabet: ";
	cin>>alp;
	if(alp>='a' || alp<='z') {
		//using nested if statement
		if(alp=='a'|| alp=='e'|| alp=='i' || alp=='o'|| alp=='u'){
			cout<<"The alphabet you entered is vowel";
		}
			else {
				cout<<"The alphabet you entered is consonent";}
			}
			//Completion of program
			return 0;
		}
	