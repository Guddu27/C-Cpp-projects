/*
#include<stdio.h>
//function declaration//
void evenodd(int number)

{
	if(number%2==0)
	{
		printf("\n The given number is a EVEN number...!!");
	}  
	
	else
	{
		printf("\n The Given number is a ODD number...!!");
	}
}


int main()
{
	int number;
	printf("\n Enter the number = ");
	scanf("%d",&number);
	
	//function calling//
	evenodd(number);
}
*/

#include<iostream>
using namespace std;
//function declaration//
void evenodd(int number)

{
	if(number%2==0)
	{
		cout<<"\n The given number is a EVEN number...!!";
	}  
	
	else
	{
		cout<<"\n The Given number is a ODD number...!!";
	}
}


int main()
{
	int number;
	cout<<"\n Enter the number = ";
	cin>>number;
	
	//function calling//
	evenodd(number);
}
