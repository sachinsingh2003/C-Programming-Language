// Sum of each row & each column
// Row-wise sum
//Column-wise sum

#include<stdio.h>
void row_col_sum(int r,int c, int (*p)[c])
{
	int row_sum,col_sum;
	for(int i=0;i<r;i++)
	{
		row_sum =0,col_sum=0;
		for(int j=0;j<c;j++)
		{
			row_sum = row_sum + p[i][j];
			col_sum = col_sum + p[j][i];
		}
		printf("Sum of row :%d\n ",row_sum);
		printf("Sum of column :%d \n",col_sum);
	}
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
	
	row_col_sum(r,c,arr);
}
