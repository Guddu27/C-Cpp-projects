#include<stdio.h>

void oe(int number,int *j )
{
	if(number%2==0)
			{
				// This will return value to j //
				*j=1;
			}
			else
			{
				*j=0;
			}
}

void year(int number,int *j)
{
	if(number%4==0)
			{
				*j=1;
			}
			else
			{
				*j=0;
			}
}

void pn(int number,int *j)
{
	if(number>=0)
			{
				*j=1;
			}
			else
			{
				*j=0;
			}
}

int main()
{
	int number,ch,i,j;
	printf("\n Enter Number = ");
	scanf("%d",&number);
	
	for(i=1;i==1;)
{

	printf("\n***************************** M E N U ***********************");
	printf("\n 1. ODD/EVEN");
	printf("\n 2. LEAP YEAR OR NOT");
	printf("\n 3. POSITIVE OR NEGATIVE");
	printf("\n 4. RE-ENTER NUMBER :");
	printf("\n 5. EXIT");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			oe(number,&j);
			if(j==1)
			{
				printf("\n NUMBER IS EVEN");
			}
			else
			{
				printf("\n NUMBER IS ODD");
			}
			break;
			
		case 2:
			year(number,&j);
			if(j==1)
			{
				printf("\n YEAR IS LEAP");
			}
			else
			{
				printf("\n YEAR IS NOT LEAP");
			}
			break;
			
		case 3:
			pn(number,&j);
			if(j==1)
			{
				printf("\n NUMBER IS POSITIVE");
			}
			else
			{
				printf("\n NUMBER IS NEGATIVE");
			}
			break;
			
		case 4:
				printf("\n Enter Number = ");
				scanf("%d",&number);
				break;
				
		case 5:
			i=0;
			break;
			
		default:
			printf("\n WRONG CHOICE !!!");
			
			
	}
}
}
