#include<stdio.h>

int check(int number )
{
	if(number>=0)
	{
		// Returns 1 to i//
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int number, i;
	printf("\n Enter the number you want to check = ");
	scanf("%d",&number);
	
	i=check(number);
	
	if(i==1)
	{
		printf("\n The number is positive...");
	}
	else
	{
		printf("\n The number is negative...");
	}
}
