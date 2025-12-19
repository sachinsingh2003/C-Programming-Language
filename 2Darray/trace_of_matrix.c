// WAP to find trace of matrix ....

#include<stdio.h>
int trace(int r,int c, int (*p)[c])
{	
	int sum=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==j)
			{
				sum = sum + p[i][j];		
			}
		}		
	}
return sum;

}
void main()
{
	int r,c;
	printf("Enter row and column:\n");
	scanf("%d%d",&r,&c);
	
	int arr[r][c];
	printf("Enter the arr elements:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Matrix....:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	int result = trace(r,c,arr);
	printf("Trace of matrix is %d :\n",result);
}
