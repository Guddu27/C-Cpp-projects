#include<stdio.h>
int main()
{
	int ch;
	float num1,num2,add,sub,mul,div;
	printf("\n Enter NUM1 = ");
	scanf("%f",&num1);
	printf("\n Enter NUM2 = ");
	scanf("%f",&num2);
	
	printf("\n\n******************************M E N U**********************************");
	printf("\n 1. Addition");
	printf("\n 2. Substraction");
	printf("\n 3. Multiplication");
	printf("\n 4. Division");
	printf("\n Enter your Choice : ");
	scanf("%d",&ch);
	
	add = num1+num2;
	sub = num1-num2;
	mul = num1*num2;
	div = num1/num2;
	
	switch(ch)
	{
		case 1:
			printf("\n Addition of two Numbers is = %f",add);
			break;
			
		case 2:
			printf("\n Substraction of two numbers is  = %f",sub);
			break;
			
		case 3:
			printf("\n Multiplication of two numbers is = %f",mul);
			break;
			
		case 4:
			printf("\n Division of two numbers is = %f",div);
			break;
			
		default:
			printf("\n Wrong Choice !!!");
	}   
}
