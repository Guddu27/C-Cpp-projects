#include<stdio.h>
int main()
{
	char name,email;
	int birthyear,mobnumber,choice,i;
	
	printf("\n Enter Your name : ");
	scanf(" %c",&name);
	
	printf("\n Enter your email : ");
	scanf(" %c",&email);
	
	printf("\n Enter your birth year : ");
	scanf("%d",&birthyear);
	
	printf("\n Enter your mobile number : ");
	scanf("%d",&mobnumber);
	


	
	printf("\n********************* M E N U **********************");
	printf("\n 1. Make a bio data of yourself");
	printf("\n 2. Display your Name");
	printf("\n 3. Display your mobile number");
	printf("\n 4. Display your E-mail");
	printf("\n 5. Re-Enter all the details");
	printf("\n 6. Exit Menu");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\n-------BIO DATA-----------");
			printf("\n 1. NAME = %c",name);
			printf("\n 2. MOB NUMBER = %d",mobnumber);
			printf("\n 3. BIRTH YEAR = %d",birthyear);
			printf("\n 4. E-MAIL = %c",email);
			printf("\n--------------------------------");
			break;
			
		case 2:
			printf("\n Name : %c",name);
			break;
			
		case 3:
			printf("\n MOB NUMBER : %d",mobnumber);
			break;
			
		case 4:
			printf("\n E-Mail : %c",email);
			break;
			
		case 5:
			printf("\n Enter Your name : ");
			scanf("%c",&name);
			printf("\n Enter your email : ");
			scanf("%c",&email);
			printf("\n Enter your birth year : ");
			scanf("%d",&birthyear);
			printf("\n Enter your mobile number : ");
			scanf("%d",&mobnumber);
			break;
			
		case 6:
			i=0;
			break;
			
		default:
			printf("\n Wrong Choice !!!");
			
	}

			
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	

