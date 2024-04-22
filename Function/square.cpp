/*
#include<stdio.h>
//function declaration//
void square(float s)

{    
	float a;
	a = s*s;
	printf("\n Area of square = %f ",a);
}


int main()
{
	float s,a;
	printf("\n Enter Side of Square");
	scanf("%f",&s);
	
	//function calling//
	square(s);
}
*/
#include<iostream>
using namespace std;
//function declaration//
void square(float s)

{    
	float a;
	a = s*s;
	cout<<"\n Area of square = "<<a;
}


int main()
{
	float s,a;
	cout<<"\n Enter Side of Square";
	cin>>s;
	
	//function calling//
	square(s);
}n
