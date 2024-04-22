#include<stdio.h>
#include<string.h>

struct student
{
	int roll_no,i,j;
	char name[30];
	char mob_no[12];
	int marks[3];
	float avg;
};

int main()
{
		//declaring Structure
		struct student obj[3];
	
	//loop for Structure array
	for(int j=0;j<3;j++)
	{
	
	
	printf("\n\n ************** Input *************");
	
	//Roll Number
	printf("\n Enter roll no : ");
	scanf("%d",&obj[j].roll_no);
	
	//name
	printf("\n Enter Name : ");
	gets(obj[j].name);
	gets(obj[j].name);
	
	//mob_number
	printf("\n Enter mobile number : ");
	gets(obj[j].mob_no);
	
	//Average
	obj[j].avg=0;
	printf("\n Enter Marks : ");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&obj[j].marks[i]);
		
		//Average formula
		obj[j].avg=obj[j].avg+obj[j].marks[i];
	}
	obj[j].avg=obj[j].avg/3.0;
	
//********* Giving Output ******************************
	
	printf("\n\n ************** Output *************");
	
	printf("\n Roll Number : %d",obj[j].roll_no);
	
	printf("\n Name : ");
	puts(obj[j].name);
	
	printf("\n Mobile Number : ");
	puts(obj[j].mob_no);
	
	printf("\n Marks : ");
	for(int i=0;i<3;i++)
	{
		printf("\t %d",obj[j].marks[i]);
	}
	printf("\n Average Marks : %f",obj[j].avg);
}
}
