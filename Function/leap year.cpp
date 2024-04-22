/*
#include<stdio.h>
//function declaration//
void leap(int year)

{
	if(year%4==0)
	{
		printf("\n The given Year is a Leap Year...!!");
	}  
	
	else
	{
		printf("\n The Given Year is not a Leap Year...!!");
	}
}


int main()
{
	int year;
	printf("\n Enter the Year = ");
	scanf("%d",&year);
	
	//function calling//
	leap(year);
}
*/

#include<iostream>
using namespace std;
//function declaration//
void leap(int year)

{
	if(year%4==0)
	{
		cout<<"\n The given Year is a Leap Year...!!";
	}  
	
	else
	{
		cout<<"\n The Given Year is not a Leap Year...!!";
	}
}


int main()
{
	int year;
	cout<<"\n Enter the Year = ";
	cin>>year;
	
	//function calling//
	leap(year);
}
