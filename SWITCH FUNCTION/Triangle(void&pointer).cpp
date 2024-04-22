// VOID METHOD //

#include<stdio.h>

void a(float base,float height)
{
	float area;
	area = 0.5*(base*height);
	printf("\n Area of triangle : %f",area);
}

void p(float side1,float side2,float side3)
{
	float perimeter;
	perimeter = side1+side2+side3;
	printf("\n Perimeter of triangle is : %f",perimeter);
}

void hypo(float side1,float side2)
{
	float hypotenuse;
	hypotenuse = (side1*side1)+(side2*side2);
	printf("\n Hypotenuse of triangle is : %f",hypotenuse);
}

int main()
{
	float side1,side2,side3,base,height,hypotenuse,area,perimeter;
	int ch,i;
	
	printf("\n Enter side1 : ");
	scanf("%f",&side1);
	printf("\n Enter side2 : ");
	scanf("%f",&side2);
	printf("\n Enter side3 : ");
	scanf("%f",&side3);
	printf("\n Enter base : ");
	scanf("%f",&base);
	printf("\n Enter height : ");
	scanf("%f",&height);
	
	for(i=1;i==1;)
 {
	
	printf("\n ********************** M E N U ********************");
	printf("\n 1. Find area of triangle");
	printf("\n 2. Find perimter of triangle");
	printf("\n 3. Find hypotenuse of triangle");
	printf("\n 4. Re-enter values");
	printf("\n 5. Exit Menu");
	printf("\n ***************************************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
			a(base,height);
			break;
			
		case 2:
			p(side1,side2,side3);
			break;
			
		case 3:
			hypo(side1,side2);
			break;
			
		case 4:
			printf("\n Enter side1 : ");
			scanf("%f",&side1);
			printf("\n Enter side2 : ");
			scanf("%f",&side2);
			printf("\n Enter side3 : ");
			scanf("%f",&side3);
			printf("\n Enter base : ");
			scanf("%f",&base);
			printf("\n Enter height : ");
			scanf("%f",&height);
			break;
			
		case 5:
			i=0;
			break;
			
		default:
			printf("\n Wrong Choice !!!");
	}
 }
}


// POINTER METHOD//

#include<stdio.h>

void a(float base,float height,float *area)
{
	
	*area = 0.5*(base*height);
	
}

void p(float side1,float side2,float side3,float *perimeter)
{
	
	*perimeter = side1+side2+side3;
	
}

void hypo(float side1,float side2,float *hypotenuse)
{
	
	*hypotenuse = (side1*side1)+(side2*side2);
	
}

int main()
{
	float side1,side2,side3,base,height,hypotenuse,area,perimeter;
	int ch,i;
	
	printf("\n Enter side1 : ");
	scanf("%f",&side1);
	printf("\n Enter side2 : ");
	scanf("%f",&side2);
	printf("\n Enter side3 : ");
	scanf("%f",&side3);
	printf("\n Enter base : ");
	scanf("%f",&base);
	printf("\n Enter height : ");
	scanf("%f",&height);
	
	for(i=1;i==1;)
 {
	
	printf("\n ********************** M E N U ********************");
	printf("\n 1. Find area of triangle");
	printf("\n 2. Find perimter of triangle");
	printf("\n 3. Find hypotenuse of triangle");
	printf("\n 4. Re-enter values");
	printf("\n 5. Exit Menu");
	printf("\n ***************************************************");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
			a(base,height,&area);
			printf("\n Area of triangle : %f",area);
			break;
			
		case 2:
			p(side1,side2,side3,&perimeter);
			printf("\n Perimeter of triangle is : %f",perimeter);
			break;
			
		case 3:
			hypo(side1,side2,&hypotenuse);
			printf("\n Hypotenuse of triangle is : %f",hypotenuse);
			break;
			
		case 4:
			printf("\n Enter side1 : ");
			scanf("%f",&side1);
			printf("\n Enter side2 : ");
			scanf("%f",&side2);
			printf("\n Enter side3 : ");
			scanf("%f",&side3);
			printf("\n Enter base : ");
			scanf("%f",&base);
			printf("\n Enter height : ");
			scanf("%f",&height);
			break;
			
		case 5:
			i=0;
			break;
			
		default:
			printf("\n Wrong Choice !!!");
	}
 }
}
