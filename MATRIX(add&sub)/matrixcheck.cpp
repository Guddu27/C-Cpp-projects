#include<stdio.h>
#define r 3
#define c 3
int main()
{
	int a[r][c];
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
	
	
	
	
	
//***********************************************//
	
// 1 . Checking A is diagonal or not//

k=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		//Condition for checking Diagonal//
		if(i!=j)
		{
			if(a[i][j]!=0)
			{
				printf("\n A is not a Diagonal Matrix");
				k=1;
				break;	
			}	
		}
	}
	//End the if statement after the column(c) loop//
	if(k==1)
	break;
}
//If k still remains the same(0)://

if(k==0)
	{
		printf("\n A is a Diagonal Matrix");
	}
	
	
	
	
	
	
	
//*************************************************//	

// 2. Checking if A is upper Triangle //

k=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		//Condition for checking U-Triangular//
		if(i>j)
		{
			if(a[i][j]!=0)
			{
				printf("\n\n A is not a U-Triangular Matrix");
				k=1;
				break;	
			}	
		}
	}
	//End the if statement after the column(c) loop//
	if(k==1)
	break;
}
//If K still remains the same(0)://

if(k==0)
	{
		printf("\n\n A is a U-Triangular Matrix");
	}






//************************************************//	

// 3. Checking if A is Lower Triangle //

k=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		//Condition for checking L-Triangular//
		if(i<j)
		{
			if(a[i][j]!=0)
			{
				printf("\n\n A is not a L-Triangular Matrix");
				k=1;
				break;	
			}	
		}
	}
	//End the if statement after the column(c) loop//
	if(k==1)
	break;
}
//If K still remains the same(0)://

if(k==0)
	{
		printf("\n\n A is a L-Triangular Matrix");
	}
	
	

//************************************************//	

// 4. Checking if A is Symmetric //

k=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		//Condition for checking Symmetric//
		if(i<j)
		{
			if(a[i][j]!=a[j][i])
			{
				printf("\n\n A is not a Symmetric Matrix");
				k=1;
				break;	
			}	
		}
	}
	//End the if statement after the column(c) loop//
	if(k==1)
	break;
}
//If K still remains the same(0)://

if(k==0)
	{
		printf("\n\n A is a Symmetric Matrix");
	}




//*****************************************************//	

// 5. Checking if A is Skew-Symmetric //

k=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		//Condition for checking Skew-Symmetric//
		if(i<j)
		{
			if(a[i][j]!=(-1*a[j][i]))
			{
				printf("\n\n A is not a Skew-Symmetric Matrix");
				k=1;
				break;	
			}	
		}
	}
	//End the if statement after the column(c) loop//
	if(k==1)
	break;
}
//If K still remains the same(0)://

if(k==0)
	{
		printf("\n\n A is a Skew-Symmetric Matrix");
	}

//*//	

// 6. Checking if A is Identity Matrix //

k=0;
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		//Condition for checking Diagonal Matrix//
		if(i!=j)
		{
			if(a[i][j]!=0)
			{
				printf("\n\n A is not Diagonal");
				k=1;
				break;
			}
		}
		//Condition for checking Identity Matrix//
		else
		{
			if(a[i][j]!=1)
			{
				printf("\n\n A is not Identity Matrix");
			}
		}
	}
	//End the if statement after the column(c) loop//
	if(k==1)
	break;
}
//If K still remains the same(0)://
if(k==0)
	{
		printf("\n\n A is a Identity Matrix");
	}

//**************************************************//





}
