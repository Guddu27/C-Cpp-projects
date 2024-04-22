//VOID METHOD//
/*
#include<stdio.h>

void sum(float num1,float num2)
{
	float answer;
	answer=num1+num2;
	printf("\n ADDITION OF TWO NUMBERS = %f",answer);
}

void sub(float num1,float num2)
{
	float answer;
	answer=num1-num2;
	printf("\n SUBSTRACTION OF TWO NUMBERS = %f",answer);
}

void mul(float num1,float num2)
{
	float answer;
	answer=num1*num2;
	printf("\n MULTIPLICATION OF TWO NUMBERS = %f",answer);
}

void div(float num1,float num2)
{
	float answer;
	answer=num1/num2;
	printf("\n DIVISION OF TWO NUMBERS = %f",answer);
}


int main()
{
	float num1 ,num2,answer;
	int ch,i;
	
	printf("\n Enter num1 : ");
	scanf("%f",&num1);
	printf("\n Enter num2 : ");
	scanf("%f",&num2);
	
	
	for(i=1;i==1;)
  {

	
	printf("\n********** M E N U ***************");
	printf("\n 1. ADDITION");
	printf("\n 2. SUBSTRACION");
	printf("\n 3. MULTIPLICATION");
	printf("\n 4. DIVISION");
	printf("\n 5. RE-ENTER NUMBERS");
	printf("\n 6. EXIT MENU");
	printf("\n**********************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			sum(num1,num2);
			break;	
			
		case 2:
			sub(num1,num2);
			break;
			
		case 3:
		    mul(num1,num2);
			break;
			
		case 4:
			div(num1,num2);
			break;
			
		case 5:
			printf("\n Enter num1 : ");
			scanf("%f",&num1);
			printf("\n Enter num2 : ");
			scanf("%f",&num2);
			break;
			
		case 6:
			i=0;
			break;
			
		default:
			printf("\n WRONG CHOICE !!!!");
	}

  }
}
*/
//POINTER METHOD//
/*
#include<stdio.h>

void sum(float num1,float num2,float *answer)
{
	
	*answer=num1+num2;

}

void sub(float num1,float num2,float *answer)
{
	
	*answer=num1-num2;
	
}

void mul(float num1,float num2,float *answer)
{
	
	*answer=num1*num2;

}

void div(float num1,float num2,float *answer)
{

	*answer=num1/num2;
	
}


int main()
{
	float num1 ,num2,answer;
	int ch,i;
	
	printf("\n Enter num1 : ");
	scanf("%f",&num1);
	printf("\n Enter num2 : ");
	scanf("%f",&num2);
	
	
	for(i=1;i==1;)
  {

	
	printf("\n********** M E N U ***************");
	printf("\n 1. ADDITION");
	printf("\n 2. SUBSTRACION");
	printf("\n 3. MULTIPLICATION");
	printf("\n 4. DIVISION");
	printf("\n 5. RE-ENTER NUMBERS");
	printf("\n 6. EXIT MENU");
	printf("\n**********************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			sum(num1,num2,&answer);
				printf("\n ADDITION OF TWO NUMBERS = %f",answer);
			break;	
			
		case 2:
			sub(num1,num2,&answer);
			printf("\n SUBSTRACTION OF TWO NUMBERS = %f",answer);
			break;
			
		case 3:
		    mul(num1,num2,&answer);
		    printf("\n MULTIPLICATION OF TWO NUMBERS = %f",answer);
			break;
			
		case 4:
			div(num1,num2,&answer);
			printf("\n DIVISION OF TWO NUMBERS = %f",answer);
			break;
			
		case 5:
			printf("\n Enter num1 : ");
			scanf("%f",&num1);
			printf("\n Enter num2 : ");
			scanf("%f",&num2);
			break;
			
		case 6:
			i=0;
			break;
			
		default:
			printf("\n WRONG CHOICE !!!!");
	}

  }
}
*/

//RETURN METHOD//

#include<stdio.h>

void sum(float num1,float num2,float *answer)
{
	
	*answer=num1+num2;

}

void sub(float num1,float num2,float *answer)
{
	
	*answer=num1-num2;
	
}

void mul(float num1,float num2,float *answer)
{
	
	*answer=num1*num2;

}

void div(float num1,float num2,float *answer)
{

	*answer=num1/num2;
	
}


int main()
{
	float num1 ,num2,answer;
	int ch,i;
	
	printf("\n Enter num1 : ");
	scanf("%f",&num1);
	printf("\n Enter num2 : ");
	scanf("%f",&num2);
	
	
	for(i=1;i==1;)
  {

	
	printf("\n********** M E N U ***************");
	printf("\n 1. ADDITION");
	printf("\n 2. SUBSTRACION");
	printf("\n 3. MULTIPLICATION");
	printf("\n 4. DIVISION");
	printf("\n 5. RE-ENTER NUMBERS");
	printf("\n 6. EXIT MENU");
	printf("\n**********************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			sum(num1,num2,&answer);
				printf("\n ADDITION OF TWO NUMBERS = %f",answer);
			break;	
			
		case 2:
			sub(num1,num2,&answer);
			printf("\n SUBSTRACTION OF TWO NUMBERS = %f",answer);
			break;
			
		case 3:
		    mul(num1,num2,&answer);
		    printf("\n MULTIPLICATION OF TWO NUMBERS = %f",answer);
			break;
			
		case 4:
			div(num1,num2,&answer);
			printf("\n DIVISION OF TWO NUMBERS = %f",answer);
			break;
			
		case 5:
			printf("\n Enter num1 : ");
			scanf("%f",&num1);
			printf("\n Enter num2 : ");
			scanf("%f",&num2);
			break;
			
		case 6:
			i=0;
			break;
			
		default:
			printf("\n WRONG CHOICE !!!!");
	}

  }
}

