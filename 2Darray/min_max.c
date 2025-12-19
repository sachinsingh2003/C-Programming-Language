// Find maximum & minimum in a 2D array
//Given a matrix, find:
//Largest element
//Smallest element

#include<stdio.h>
void row_col_sum(int r,int c, int (*p)[c])
{
	int max=p[0][0],min=p[0][0];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(p[i][j]<min)
				min = p[i][j];
			else if(p[i][j]>max)
				max  = p[i][j];	
		}
	}
	printf("MIN :%d\n",min);
	printf("MAX :%d\n",max);
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
