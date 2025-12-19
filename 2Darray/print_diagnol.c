// Print diagonal elements of a matrix
//Input a square matrix (n×n):
//Print main diagonal
//Print secondary diagonal

#include<stdio.h>
void print_diag(int r,int c, int (*p)[c])
{	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	
	printf("1st Dia ---- 2nd Dia :\n");
	int j=c-1;
	for(int i=0;i<r;i++)
	{	
		printf("%d   ",p[i][i]);
		printf("   %d",p[i][j--]);
		printf("\n");
	}
	printf("\n");
}
void main()
{
	int r,c;
	printf("Enter the row and column:\n");
	scanf("%d%d",&r,&c);
	
	int arr[r][c];
	printf("Enter the elements:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	print_diag(r,c,arr);
}
