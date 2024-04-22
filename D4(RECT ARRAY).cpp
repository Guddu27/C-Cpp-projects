#include<stdio.h>
int main()
{
	float length[3],breadth[3],area[3],perimeter[3];
	int i ;
	
	for(i=0;i<3;i++)
	{
		printf("\n Enter Length = ");
		scanf("%f",&length[i]);
		printf("\n Enter Breadth = ");
		scanf("%f",&breadth[i]);
	}
	
	for(i=0;i<3;i++)
	{
	
		area[i]=length[i]*breadth[i];
		perimeter[i]=2*(length[i]+breadth[i]);
	
	}
	
	for(i=0;i<3;i++)
	{
		printf("\n Area of rectangle = %f & Perimeter of Rectangle = %f",area[i],perimeter[i]);
	}
}
