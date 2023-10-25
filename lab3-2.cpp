#include<iostream>
using namespace std;
int main()
//This program is used to check weather alphabet is consonent or vowel
{
	char alp;
	//delearing a character
	cout<< "tell an Alphabet: ";
	cin>>alp;
	//using switch
	switch(alp){
	case 'a':case 'e' :case 'i':case 'o':case 'u':
		cout<<alp << " ia a vowel "; 
		break;
		//Making cases
       default:
		cout<<alp <<"  is a consonent";
		break;}
		return 0;
			}