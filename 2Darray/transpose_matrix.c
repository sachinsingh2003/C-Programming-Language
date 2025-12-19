// Transpose of a matrix
//Convert a matrix into its transpose.


#include<stdio.h>
void transpose(int r,int c, int (*p)[c],int (*t)[r])
{	
	printf("Original Matrix :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			t[j][i]=p[i][j];
		}
	}
}
void main()
{
	int r,c;
	printf("Enter the row and column:\n");
	scanf("%d%d",&r,&c);
	
	int arr[r][c],t[c][r];
	printf("Enter the elements:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	transpose(r,c,arr,t);
	
	printf("Transpose of matrix \n");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
}
