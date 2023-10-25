#include<iostream>
using namespace std;
int main()
//This program is used to check the largest integer
{
	int x,y,z;
	//Declearing variables
	cout<<"Tell the three integers:";
	cin>>x>>y>>z;
	if(x>y || y>z || z>x || x>z || y>x || z>y)
	//Using nested-if statement
	{
		if(x>y && x>z){
			cout<<"This is greatest integer: "<<x;
			}
			else if(y>x && y>z)
			{
				cout<<"This is the greatest integer:"<<y;
			}
			else{
				cout<<"This is the greatest integer:"<<z;
			}
			//Completion of program
			}
			return 0;
	
}