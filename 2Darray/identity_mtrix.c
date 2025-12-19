// WAP to check given matrix is an Identity matrix or not ....

#include<stdio.h>
void identity(int r,int c, int (*p)[c])
{	
	int flag=1;
	for(int i=0,a=0;i<r;i++,a++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==j && p[i][j] != 1)
			{
				flag=0;
				break;
			}
			if(i != j && p[i][j] != 0)
			{
				flag=0;
				break;
			}
		}		
	}
	if(flag)
		printf("Identity matrix........\n");
	else
		printf("Not Identity Matrix.......\n");

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

	printf("Martix... :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	identity(r,c,arr);
}
