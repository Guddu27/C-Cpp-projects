#include<stdio.h>
int main()
{
	int ch,i;
	
	for(i=1;i==1;)
	{
	
		printf("\n****************************** M E N U **************************");
		printf("\n 1. CHAI + BISCUIT");
		printf("\n 2. CHAI + POHE");
		printf("\n 3. COFFEE + SANDWICH");
		printf("\n 4. PRESS 4 TO EXIT MENU");
		printf("\n*****************************************************************");
		
		printf("\n ENTER YOUR CHOICE: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\n :>> CHAI + BISCUIT");
				break;
				
			case 2:
				printf("\n :>> CHAI + POHE");
				break;
				
			case 3:
				printf("\n :>> COFFEE + SANDWICH");
				break;
				
			case 4:
				i=0;
				break;
				
			default:
				printf("\n :>> Wrong Choice");
				
		}
	}
	
	
}	
	
