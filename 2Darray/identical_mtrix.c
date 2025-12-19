// WAP to check given matrix are Identical matrix or not ....

#include<stdio.h>
void identical(int r,int c, int (*p)[c],int r2,int c2, int (*q)[c2])
{	
	int flag=1;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(p[i][j] != q[i][j])
			{
			
				flag=0;
				break;		
			}
		}
		
	}

//	printf("%d",flag);
	if(flag==1)
		printf("Identical....\n");
	else
		printf("Not Identical....\n");	

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

	int r2,c2;
	printf("Enter row and column\n");
	scanf("%d%d",&r2,&c2);

	int arr2[r2][c2];
	printf("Enter the arr element:\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	
	}
	if(r==r2 && c==c2)
		identical(r,c,arr,r2,c2,arr2);
	else
		printf("Rows and Column Do not match .... Not Identical...\n");
}
