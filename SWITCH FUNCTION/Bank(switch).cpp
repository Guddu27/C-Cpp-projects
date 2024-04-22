#include<stdio.h>

float check1(float bal,float with)
{
	float chbal;
	chbal=bal-with;
	return chbal;
}

float check2(float bal,float depo)
{
	float chbal;
	chbal=bal+depo;
	return chbal;
}

int main()
{
	float bal,with,depo,chbal;
	int ch,i;
	printf("\n Enter Balance amount to  be shown : ");
	scanf("%f",&bal);
	printf("\n Current Balance : %f",bal);
	
	for(i=1;i==1;)
{

	printf("\n ****************** M E N U ******************");
	printf("\n 1. Check Balance of Account");
	printf("\n 2. Enter amount to be Deposited and display balance");
	printf("\n 3. Enter amount to be Withdrawn and display balance");
	printf("\n 4. Exit Menu");
	printf("\n *********************************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("\n Current Balance : %f",bal);
			break;
			
		case 2:
			printf("\n Current balance : %f",bal);
			printf("\n Enter amount to be deposited : ");
			scanf("%f",&depo);
			chbal=check2(bal,depo);
			printf("\n Deposited Amount : %f & Balance : %f",depo,chbal);
			break;
			
		case 3:
			printf("\n Current balance : %f",bal);
			printf("\n Enter amount to be withdrawn : ");
			scanf("%f",&with);
			chbal=check1(bal,with);
			printf("\n Withdrawn Amount : %f & Balance : %f",depo,chbal);
			break;
			
		case 4:
			i=0;
			break;
			
		default:
			printf("\n Wrong Choice !!!");
			
	}
	
}
}
