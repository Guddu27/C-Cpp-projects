#include<stdio.h>
#define r 3
#define c 3
int main()
{
	int a[r][c];
	int b[r][c];
	int ans[r][c];
	int i,j,k;
	
	//Taking A matrix//
	
	printf("\n Enter a : ");
	for(i=0;i<r;i++)
	{
		printf("\n Enter New row : ");
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);		
		}	
	
	}
	
	//printing A matrix//
	
	printf("\n A = ");
	for(i=0;i<r;i++)
	{
		printf("\n ");
		for(j=0;j<c;j++)
		{
			printf("\t %d",a[i][j]);
		}
	}
	
	//Taking B matrix//
	
	printf("\n\n Enter B : ");
	for(i=0;i<r;i++)
	{
		printf("\n Enter New row : ");
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	
	
	//printing b matrix//
	
	printf("\n B = ");
	for(i=0;i<r;i++)
	{
		printf("\n ");
		for(j=0;j<c;j++)
		{
			printf("\t %d",b[i][j]);
		}
	}

	
	printf("\n\n\n************** ADDITION **************");
	
	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			ans[i][j]=a[i][j]+b[i][j];
		}
	}
	
	
	
	printf("\n ADDITION = ");
	for(i=0;i<r;i++)
	{
		printf("\n\n ");
		for(j=0;j<c;j++)
		{
			printf("\t %d",ans[i][j]);
		}
	}
	
	
	printf("\n\n\n************** SUBSTRACTION **************");
	
	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			ans[i][j]=a[i][j]-b[i][j];
		}
	}
	
	
	
	printf("\n SUBSTRACTION = ");
	for(i=0;i<r;i++)
	{
		printf("\n\n ");
		for(j=0;j<c;j++)
		{
			printf("\t %d",ans[i][j]);
		}
	}
	

	
}
