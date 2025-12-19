// Multipication of matrix....

#include<stdio.h>
void multiply(int r1,int c1, int (*p)[c1],int r2,int c2,int (*q)[c2],int (*mul)[c2])
{	
	int k;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
				mul[i][j] += p[i][k] * q[k][j];
		}
	}

}
void main()
{
	int r1,c1;
	printf("Enter row1 and column1:\n");
	scanf("%d%d",&r1,&c1);
	
	int arr1[r1][c1];
	printf("Enter the arr1 elements:\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}

	int r2,c2;
	printf("Enter row2 and column2 :\n");
	scanf("%d%d",&r2,&c2);

	int arr2[r2][c2];
	printf("Enter arr2 elemensts:\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}

	if(c1==r2)
	{	
		int mul[r1][c2];
		
		//initialization result matrix as zero..
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
				mul[i][j]=0;
		}
	
		multiply(r1,c1,arr1,r2,c2,arr2,mul);

		printf("Multipication of matrix:\n");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c2;j++)
				printf("%d ",mul[i][j]);
			printf("\n");	
		}
	}
	else
		printf("SORRY : Multiplication Not Possible for matrix...\n");
}
