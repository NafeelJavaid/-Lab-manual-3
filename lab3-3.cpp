#include<iostream>
using namespace std;
//This program is used to check whether the integer is positive,negative or zero
int main() {
    int x;
   cout << "Tell a number: ";
    cin>>x;
    //Declearing variable
    switch(1){
    	//usins Switch case
    	case 1:
    		//Now using if statement within the switch case
    		if(x>0){
    			cout<<"It is positive";
			}
			else if(x<0){
				cout<<"It is negative";
			}
			else{
				cout<<"It is zero";
			}break;   }
			return 0;
			//Completion of program
		}
   