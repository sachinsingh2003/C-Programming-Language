// Perform Addition of 5 matrix..........


#include<stdio.h>
void addition(int r,int c, int (*p)[c],int (*q)[c],int (*add)[c])
{	
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			add[i][j]= p[i][j]+q[i][j];
		}
	}

}
void main()
{
	int r,c;
	printf("Enter the row and column:\n");
	scanf("%d%d",&r,&c);
	
	int arr1[r][c],arr2[r][c],add[r][c];
	printf("Enter the arr1 elements:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	printf("Enter arr2 elemensts:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	
	addition(r,c,arr1,arr2,add);

	printf("Addition of matrix:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d ",add[i][j]);
		printf("\n");	
	}

}
