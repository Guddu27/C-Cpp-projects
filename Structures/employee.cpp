#include<stdio.h>
#include<string.h>

struct employee
{
	int e_no,j;
	char e_name[30];
	char mob_no[12];
	int salary;
};

int main()
{
	struct employee obj[3];
	
	for(int j=0;j<3;j++)
	{
	
	
	printf("\n\n ************ INPUT ************");
	printf("\n Enter Employee Name : ");
	gets(obj[j].e_name);
	
	printf("\n Enter Employee Number : ");
	scanf("%d",&obj[j].e_no);
	
	printf("\n Enter Mobile Number : ");
	gets(obj[j].mob_no);
	gets(obj[j].mob_no);
	
	printf("\n Enter Employee Salary : ");
	scanf("%d",&obj[j].salary);
	
	
	printf("\n\n *********** Output ************");
	
	printf("\n Employee Name : ");
	puts(obj[j].e_name);
	
	printf("\n Employee Number : %d",obj[j].e_name);
	
	printf("\n Mobile Number : ");
	puts(obj[j].mob_no);
	
	printf("\n Employee Salary : %d",obj[j].salary);





}
}
