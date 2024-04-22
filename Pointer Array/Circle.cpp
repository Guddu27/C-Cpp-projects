#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *radius,*area,*perimeter;
	int i,s;
	printf("\n Enter size of element : ");
	scanf("%d",&s);
	
	radius=(float *)malloc(sizeof (float)*s);
	area=(float *)malloc(sizeof (float)*s);
	perimeter=(float *)malloc(sizeof (float)*s);
	
	printf("\n Enter Radius OF circle : ");
	for(i=0;i<s;i++)
	scanf("%f",&radius[i]);
	
	for(i=0;i<s;i++)
	area[i]=3.14*radius[i]*radius[i];
	
	for(i=0;i<s;i++)
	perimeter[i]=2*3.14*radius[i];
	
	for(i=0;i<s;i++)
	printf("\n Area of circle : %f",area[i]);
	
	for(i=0;i<s;i++)
	printf("\n Perimeter of circle : %f",perimeter[i]);
}
