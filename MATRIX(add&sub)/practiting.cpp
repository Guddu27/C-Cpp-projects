#include<stdio.h>
#define r 3
#define c 3
int main()
{
	int a[r][c];
	int i,j,k;
	
	printf("\n Enter A : ");
	for(i=0;i<r;i++)
	{
		printf("\n Enter new Row : ");
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n A = ");
	for(i=0;i<r;i++)
	{
		printf("\n ");
		for(j=0;j<c;j++)
		{
			printf("\t %d",a[i][j]);
		}
	}
	
	// 1. Checking given matrix is diagonal or not//
	
	k=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i!=j)
			{
			
				if(a[i][j]!=0)
				{
					printf("\n\n A is not a diagonal matrix");
					k=1;
					break;
				}
			}
		}
		if(k==1)
		break;
		
	}
	if(k==0)
	{
		printf("\n\n A is a diagonal matrix");
	}
	
	
	
	// 2. Checking if given matrix is U-triangular//
	
	k=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i>j)
			{
				if(a[i][j]!=0)
				{
					printf("\n A is not a U-Triangular matrix");
					k=1;
					break;
				}
			}
		}
		if(k==1)
		break;
	}
	if(k==0)
	{
		printf("\n A is a U-Triangular matrix");
	}
	
	// 3. Checkin is given matrix is L-Triangular//
	
	k=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<j)
			{
				if(a[i][j]!=0)
				{
					printf("\n A is not L-Triangular matrix");
					k=1;
					break;
				}
			}
		}
		if(k==1)
		break;
	}
	if(k==0)
	{
		printf("\n A is a L-Triangular matrix");
	}
	
	// 4. Checking if given matrix is Identity matrix//
	
	k=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i!=j)
			{
				if(a[i][j]!=0)
				{
					printf("\n A is not a Diagonal Matrix");
					k=1;
					break;
				}
			}
			else
			{
				if(a[i][j]!=1)
				{
					printf("\n A is not Identity matrix");
				}
			}
		}
		if(k==1)
		break;
	}
	if(k==0)
	{
		printf("\n A is a Identity matrix");
	}
	
	// 5. Checking if Given matrix is symmetric//
	
	k=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<j)
			{
				if(a[i][j]!=a[j][i])
				{
					printf("\n A is not a symmetric matrix");
					k=1;
					break;
				}
			}
		}
		if(k==1)
		break;
	}
	if(k==0)
	{
		printf("\n A is a symmetric matrix");
	}
	
	// 6. Checking if given matrix is skew-symmetric//
	
	k=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<j)
			{
				if(a[i][j]!=(-1*a[j][i]))
				{
					printf("\n A is not a Skew-symmetric matrix");
					k=1;
					break;
				}
			}
		}
		if(k==1)
		break;
	}
	if(k==0)
	{
		printf("\n A is a Skew-symmetric matrix");
	}	
}
