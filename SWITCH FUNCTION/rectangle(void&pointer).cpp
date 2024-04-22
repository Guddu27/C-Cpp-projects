// VOID METHOD //

#include<stdio.h>

void area(float length,float breadth)
{
	float a;
	a=length*breadth;
	printf("\n Area of rectangle is : %f",a);
}

void perimeter(float length,float breadth)
{
	float p;
	p=2*(length+breadth);
	printf("\n Perimeter of rectangle is : %f",p);
}

int main()
{
	float length,breadth,a,p;
	int ch,i;
	printf("\n Enter length : ");
	scanf("%f",&length);
	printf("\n Enter breadth : ");
	scanf("%f",&breadth);
	
	for(i=1;i==1;)
{
	printf("\n ********************* M E N U *******************");
	printf("\n 1. Find Area of rectangle");
	printf("\n 2. Find Perimeter of rectangle");
	printf("\n 3. Re-enter the values");
	printf("\n 4. Exit Menu");
	printf("\n *************************************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			area(length,breadth);
			break;
			
		case 2:
			perimeter(length,breadth);
			break;
			
		case 3:
			printf("\n Enter length : ");
			scanf("%f",&length);
			printf("\n Enter breadth : ");
			scanf("%f",&breadth);
			break;
			
		case 4:
			i=0;
			break;
			
		defult:
			printf("\n Wrong Choice !!!");
	}

}	
}


// POINTER METHOD //

#include<stdio.h>

void area(float length,float breadth,float *a)
{
	
	*a=length*breadth;
	
}

void perimeter(float length,float breadth,float *p)
{
	
	*p=2*(length+breadth);
	
}

int main()
{
	float length,breadth,a,p;
	int ch,i;
	printf("\n Enter length : ");
	scanf("%f",&length);
	printf("\n Enter breadth : ");
	scanf("%f",&breadth);
	
	for(i=1;i==1;)
{
	printf("\n ********************* M E N U *******************");
	printf("\n 1. Find Area of rectangle");
	printf("\n 2. Find Perimeter of rectangle");
	printf("\n 3. Re-enter the values");
	printf("\n 4. Exit Menu");
	printf("\n *************************************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			area(length,breadth,&a);
			printf("\n Area of rectangle is : %f",a);
			break;
			
		case 2:
			perimeter(length,breadth,&p);
			printf("\n Perimeter of rectangle is : %f",p);
			break;
			
		case 3:
			printf("\n Enter length : ");
			scanf("%f",&length);
			printf("\n Enter breadth : ");
			scanf("%f",&breadth);
			break;
			
		case 4:
			i=0;
			break;
			
		defult:
			printf("\n Wrong Choice !!!");
	}

}	
}
