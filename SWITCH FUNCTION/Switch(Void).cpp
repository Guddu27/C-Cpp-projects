#include<stdio.h>

void oe(int number)
{
	if(number%2==0)
			{
				printf("\n NUMBER IS EVEN");
			}
			else
			{
				printf("\n NUMBER IS ODD");
			}
}

void year(int number)
{
	if(number%4==0)
			{
				printf("\n YEAR IS LEAP YEAR");
			}
			else
			{
				printf("\n YEAR IS NOT LEAP YEAR");
			}
}

void pn(int number)
{
	if(number>=0)
			{
				printf("\n NUMBER IS POSITIVE");
			}
			else
			{
				printf("\n NUMBER IS NEGATIVE");
			}
}

int main()
{
	int number,ch,i;
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
			oe(number);
			break;
			
		case 2:
			year(number);
			break;
			
		case 3:
			pn(number);
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
