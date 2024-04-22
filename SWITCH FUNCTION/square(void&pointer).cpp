// VOID METHOD //

#include<stdio.h>

void area(float side)
{
	float a;
	a=side*side;
	printf("\n Area of square is : %f",a);
}

void perimeter(float side)
{
	float p;
	p=4*side;
	printf("\n Perimeter of square is : %f",p);
}

int main()
{
	float side,a,p;
	int ch,i;
	printf("\n Enter side : ");
	scanf("%f",&side);
	
	for(i=1;i==1;)
{
	printf("\n ********************* M E N U *******************");
	printf("\n 1. Find Area of square");
	printf("\n 2. Find Perimeter of square");
	printf("\n 3. Re-enter the values");
	printf("\n 4. Exit Menu");
	printf("\n *************************************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			area(side);
			break;
			
		case 2:
			perimeter(side);
			break;
			
		case 3:
			printf("\n Enter side : ");
			scanf("%f",&side);
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

// POINTER METHOD//

#include<stdio.h>

void area(float side, float *a)
{
	
	*a=side*side;
	
}

void perimeter(float side,float *p)
{
	
	*p=4*side;
	
}

int main()
{
	float side,a,p;
	int ch,i;
	printf("\n Enter side : ");
	scanf("%f",&side);
	
	for(i=1;i==1;)
{
	printf("\n ********************* M E N U *******************");
	printf("\n 1. Find Area of square");
	printf("\n 2. Find Perimeter of square");
	printf("\n 3. Re-enter the values");
	printf("\n 4. Exit Menu");
	printf("\n *************************************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			area(side,&a);
			printf("\n Area of square is : %f",a);
			break;
			
		case 2:
			perimeter(side,&p);
			printf("\n Perimeter of square is : %f",p);
			break;
			
		case 3:
			printf("\n Enter side : ");
			scanf("%f",&side);
			break;
			
		case 4:
			i=0;
			break;
			
		defult:
			printf("\n Wrong Choice !!!");
	}

}	
}

