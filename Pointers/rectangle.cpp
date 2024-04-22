#include<stdio.h>

//Giving * as pointer//		

void calculate(float length, float breadth, float *area, float *perimeter)
{
	
	//Giving * as pointer//
	
	*area = length*breadth;
	*perimter = 2*(length*breadth);
}


int main()
{
	float length , breadth , area , perimeter;
	printf("\n Enter Length = ");
	scanf("%f",&length);
	printf("\n Enter Breadth = ");
	scanf("%f",&breadth);
	
	//Using '&' for taking values form function//

	calculate(length,breadth,&area,&perimeter);
	
	//printing result in main()//
	
	printf("\n AREA of rectangle = %f",area);
	printf("\n PERIMETER of rectangle = %f",perimter);
}
