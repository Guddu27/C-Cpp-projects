#include<stdio.h>
#include<string.h>
int main()
{
	int roll_no,i,j;
	char name[30];
	char mob_no[12];
	int marks[3];
	float avg;
	
	printf("\n ************** Input *************");
	
	printf("\n Enter roll no : ");
	scanf("%d",&roll_no);
	
	printf("\n Enter Name : ");
	gets(name);
	gets(name);
	
	printf("\n Enter mobile number : ");
	gets(mob_no);
	
	avg=0;
	printf("\n Enter Marks : ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&marks[i]);
		avg=avg+marks[i];
	}
	avg=avg/3.0;
	
	
	
	printf("\n ************** Output *************");
	
	printf("\n Roll Number : %d",roll_no);
	
	printf("\n Name : ");
	puts(name);
	
	printf("\n Mobile Number : ");
	puts(mob_no);
	
	printf("\n Marks : ");
	for(i=0;i<3;i++)
	{
		printf("\t %d",marks[i]);
	}
	printf("\n Average Marks : %f",avg);
}
