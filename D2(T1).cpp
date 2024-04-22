#include<iostream>
using namespace std;

int main()
{
	float a,b,sum,sub,mul,div;
	int(ch);
	
	cout<<"\n Enter value for a = ";
	cin>>a;
	
	cout<<"\n Enter value for b = ";
	cin>>b;
	
	cout<<"\n******************* MENU *********************";
	cout<<"\n 1 For SUM";
	cout<<"\n 2 For SUB";
	cout<<"\n 3 For MUL";
	cout<<"\n 4 For DIV";
	cout<<"\n Enter Your Choice";
	cin>>ch;
	
	
	sum = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	
	
	switch(ch)
	{
		case 1:
			printf("\n SUM = %f",sum);
			break;
			
		case 2:
			printf("\n SUB = %f",sub);
			break;
			
		case 3:
			printf("\n MUL = %f",mul);
			break;
			
		case 4:
			printf("\n DIV = %f",div);
			break;
			
		default:
			printf("WRONG CHOICE !!!");
	}
}

	
