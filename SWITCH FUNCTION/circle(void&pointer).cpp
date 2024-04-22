// VOID METHOD //
/*
#include<stdio.h>

void area(float radius)
{
	float a;
	a=3.14*(radius*radius);
	printf("\n Area of square is : %f",a);
}

void perimeter(float radius)
{
	float p;
	p=2*(3.14*radius);
	printf("\n Perimeter of circle is : %f",p);
}

int main()
{
	float radius,a,p;
	int ch,i;
	printf("\n Enter radius : ");
	scanf("%f",&radius);
	
	for(i=1;i==1;)
{
	printf("\n ********************* M E N U *******************");
	printf("\n 1. Find Area of circle");
	printf("\n 2. Find Perimeter of circle");
	printf("\n 3. Re-enter the values");
	printf("\n 4. Exit Menu");
	printf("\n *************************************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			area(radius);
			break;
			
		case 2:
			perimeter(radius);
			break;
			
		case 3:
			printf("\n Enter radius : ");
			scanf("%f",&radius);
			break;
			
		case 4:
			i=0;
			break;
			
		defult:
			printf("\n Wrong Choice !!!");
	}

}	
}
*/

// POINTER METHOD //

#include<stdio.h>

void area(float radius,float *a)
{

	*a=3.14*(radius*radius);
	
}

void perimeter(float radius,float *p)
{
	
	*p=2*(3.14*radius);
	
}

int main()
{
	float radius,a,p;
	int ch,i;
	printf("\n Enter radius : ");
	scanf("%f",&radius);
	
	for(i=1;i==1;)
{
	printf("\n ********************* M E N U *******************");
	printf("\n 1. Find Area of circle");
	printf("\n 2. Find Perimeter of circle");
	printf("\n 3. Re-enter the values");
	printf("\n 4. Exit Menu");
	printf("\n *************************************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			area(radius,&a);
			printf("\n Area of square is : %f",a);
			break;
			
		case 2:
			perimeter(radius,&p);
			printf("\n Perimeter of circle is : %f",p);
			break;
			
		case 3:
			printf("\n Enter radius : ");
			scanf("%f",&radius);
			break;
			
		case 4:
			i=0;
			break;
			
		defult:
			printf("\n Wrong Choice !!!");
	}

}	
}

