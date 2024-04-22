#include<iostream>
using namespace std;
int main()
{
	float length,breadth,area,perimeter;
	int ch;
	 
	 cout<<"\n Enter the Length ";
	 cin>>length;
	 
	 cout<<"\n Enter the Breadth ";
	 cin>>breadth;
	 
	
	 
	 cout<<"\n******************************** MENU *********************************";
	 cout<<"\n 1 for AREA";
	 cout<<"\n 2 for PERIMETER";
	 cout<<"\n Enter your choice ";
	 cin>>ch;
	 
	 switch(ch)
	 {
	 	case 1:
	 		cout<<"\n AREA = ",area;
	 		break;
	 		
	 	case 2:
	 		cout<<"\n PERIMETER =";
	 		break;
	 		
	 	default :
	 		cout<<"\n WRONG CHOICE";
	 }
}
