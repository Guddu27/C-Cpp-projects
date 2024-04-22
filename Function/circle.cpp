/*
#include<stdio.h>
//function declaration//
void circle(float r)

{    
	float a,p;

    a = 3.14*(r*r);
	p = 2*(3.14*r);
	
	printf("\n Area of circle = %f ",a);
	printf("\n Perimeter of circle = %f ",p);
}


int main()
{
	float r,p,a;
	printf("\n Enter Radius of circle");
	scanf("%f",&r);
	
	//function calling//
	circle(r);
}
*/

#include<iostream>
using namespace std;
//function declaration//
void circle(float r)

{    
	float a,p;

    a = 3.14*(r*r);
	p = 2*(3.14*r);
	
	cout<<"\n Area of circle =  "<<a;
	cout<<"\n Perimeter of circle = "<<p;
}


int main()
{
	float r,p,a;
	cout<<"\n Enter Radius of circle";
	cin>>r;
	
	//function calling//
	circle(r);
}
