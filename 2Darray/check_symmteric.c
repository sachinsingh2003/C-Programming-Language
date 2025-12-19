// Check whether a matrix is symmetric

// A matrix is symmetric if A[i][j] == A[j][i] for all i, j.


#include<stdio.h>
void check_sym(int r,int c, int (*p)[c])
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
		for(int j=0;j<c;)
		{
			if(p[i][j]==p[j][i])
				j++;
			else
			{
				printf("Not Symmetric\n");
				return;
			}
		}
	if(i==r-1)printf("Symmetric\n");
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
	
	check_sym(r,c,arr);
}
