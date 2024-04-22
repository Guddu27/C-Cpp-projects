#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *by, pyear, *cal;
	int i,s;
	
	printf("\n Enter size of array : ");
	scanf("%d",&s);
	
	by=(float *)malloc(sizeof(float)*s);
	cal=(float *)malloc(sizeof(float)*s);
	
	printf("\n****** This program calculates your age ******");
	
	printf("\n\n Enter your Birth Year : ");
	for(i=0;i<s;i++)
	scanf("%f",&by[i]);
	
	printf("\n***********************************************");
	
	printf("\n Enter present calender year : ");
	scanf("%f",&pyear);
	
	for(i=0;i<s;i++)
	cal[i]=pyear-by[i];
	
	for(i=0;i<s;i++)
	printf("\n Your Age is : %f Years",cal[i]);
	
	printf("\n***********************************************");
}
