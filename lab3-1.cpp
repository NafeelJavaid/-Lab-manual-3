#include<iostream>
using namespace std;
int main() {
	//This program is used to check the population
char province;
int population;
//declearing variavles
cout<<" Tell the name of Province with first letter of there name in capital: ";
cin>>province;
switch(province) {
	//using switch statement
case 'P':
	population=110000000;
	break;
	case 'S':
		population=47000000;
		break;
		case 'B' :
			population=13000000;
			break;
			case 'K':
			population=30000000;
			break;
			default:
			cout<<" you have entered wrong name";
			break;
		}  cout<<" The population of province is:"<<population;
		//Completion of program
	 return 0;
	}
		
	