#include<stdio.h>
int main()
{
	int number[3];
	float answer[3];
	int i,j;
	
	// 1st for loop for taking input//
	
	for(j=0;j<3;j++)
	{
	
		printf("\n Enter the Number = ");
		scanf("%d",&number[j]);
	}
	
	// 2nd for loop for initialisation//
	
	for(j=0;j<3;j++)
	{
		answer[j]=1;
		
		// 3rd for loop for doing increment or decrement or the main logic Loop//
		
		for(i=1;i<=number[j];i++)
		{
			answer[j]=answer[j]*i;
		}
		
	}
	
	// 4th for loop for printing the output//
	
	for(j=0;j<3;j++)
	{
		printf("\n Number = %d & Factorial = %f",number[j],answer[j]);
	}
	
}
