// Print  the sum of diagonal elements of a matrix


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
	
	int sum_1=0,sum_2=0;
	int j=c-1;
	for(int i=0;i<r;i++)
	{	
		sum_1 = sum_1 + p[i][i];
		sum_2 = sum_2 +p[i][j--];
	}
	printf("Sum of 1st Diagnol: %d\n",sum_1);
	printf("Sum of 2nd Diagnol: %d\n",sum_2);
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
