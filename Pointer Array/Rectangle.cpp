/*
#include<stdio.h>
int main()
{
	float length[3],breadth[3],area[3],perimeter[3];
	int i;
	
	printf("\n Enter Length : ");
	for(i=0;i<3;i++)
	scanf("%f",&length[i]);
	
	printf("\n Enter Breadth : ");
	for(i=0;i<3;i++)
	scanf("%f",&breadth[i]);
	
	for(i=0;i<3;i++)
	area[i]=length[i]*breadth[i];
	
	for(i=0;i<3;i++)
	perimeter[i]=2*(length[i]+breadth[i]);
	
	for(i=0;i<3;i++)
	printf("\n Area of reactangle : %f",area[i]);
	
	for(i=0;i<3;i++)
	printf("\n Perimeter of rectangle : %f",perimeter[i]);
}
*/

// By Pointer Array //

#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *length,*breadth,*area,*perimeter;
	int i,s;
	
	// Taking size of array from user//
	printf("\n Enter size of element : ");
	scanf("%d",&s);
	
	// using malloc (memory alloction) //
	length=(float *)malloc(sizeof (float)*s);
	breadth=(float *)malloc(sizeof (float)*s);
	area=(float *)malloc(sizeof (float)*s);
	perimeter=(float *)malloc(sizeof (float)*s);
	
	
	printf("\n Enter Length : ");
	for(i=0;i<s;i++)
	scanf("%f",&length[i]);
	
	printf("\n Enter Breadth : ");
	for(i=0;i<s;i++)
	scanf("%f",&breadth[i]);
	
	for(i=0;i<s;i++)
	area[i]=length[i]*breadth[i];
	
	for(i=0;i<s;i++)
	perimeter[i]=2*(length[i]+breadth[i]);
	
	for(i=0;i<s;i++)
	printf("\n Area of reactangle : %f",area[i]);
	
	for(i=0;i<s;i++)
	printf("\n Perimeter of rectangle : %f",perimeter[i]);
}
