// WAP to print spiral form of a matrix ....

#include<stdio.h>


void spiral_form(int r,int c, int (*p)[c])
{	
	int t=0;
	for(int i=0;i<r;i++)
	{
		if(t%2==0)
		{	
			for(int j=0;j<c;j++)
				printf("%d ",p[i][j]);			
		}
		else
		{
			for(int j=c-1;j>=0;j--)
				printf("%d ",p[i][j]);
		}
	t = t+1;		
	}

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
	printf("\n");
	spiral_form(r,c,arr);
	
}
