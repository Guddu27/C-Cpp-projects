#include<iostream>
using namespace std;

int main()
{
	int ch, number;
	
	
	cout<<"\nEnter any number / Or Year";
	cin>>number;
	
	 cout<<"\n************************ MENU ************************";
	 cout<<"\n 1. Check positive/negative";
	 cout<<"\n 2. Check odd/even";
	 cout<<"\n 3. Check year is leap/not leap";
	 cout<<"\n*********************** ||||| ************************";
	
	 cout<<"\n Enter any option : ";
	 cin>>ch;
	 
	 switch(ch)
	 {
	 	case 1:
	 		if(number>=0)
	 			{
	 				cout<<"\nNumber is Positive";
				}
			
			else
				{
					cout<<"\nNumber is Negative";
				}
		break;
		
		case 2:
			if(number%2==0)
				{
					cout<<"\nNumber is Even";
				}
			
			else
				{
					cout<<"\nNumber is Odd";
				}
		break;
		
		case 3:
			if(number%4==0)
				{
					cout<<"\nYear is Leap Year";
				}			
				
			else
				{
					cout<<"\n Year is Not Leap Year";
				}
			break;
	
			default:
			cout<<"\n Wrong Choice";
		}		
	
}
