#include<stdio.h>
#include<string.h>

struct library
{
	int i,b_no;
	char b_name[50],a_name[50];
};

int main()
{
	struct library obj[3];
	
	for(int i=0;i<3;i++)
	{
	
	printf("\n\n ********* Input *********");
	
	printf("\n Enter Book Name : ");
	gets(obj[i].b_name);
	
	printf("\n Enter Book No. : ");
	scanf("%d",&obj[i].b_no);
	
	printf("\n Enter Author Name : ");
	gets(obj[i].a_name);
	gets(obj[i].a_name);
	
	printf("\n\n ********* Output *********");
	
	printf("\n Book name : ");
	puts(obj[i].b_name);
	
	printf("\n Book No : %d",obj[i].b_no);
	
	printf("\n Author Name : ");
	puts(obj[i].a_name);
}
}
