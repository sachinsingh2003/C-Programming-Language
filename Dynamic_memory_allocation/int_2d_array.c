// WAP to allocate dynamic memory for int 2D array , take row and column from user.....

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int r,c;
	printf("Enter the number of string:\n");
	scanf("%d%d",&r,&c);

	int **p;
	p = malloc(sizeof(int *)*r);

	for(int i=0;i<r;i++)
	p[i] = malloc(sizeof(int)*c);

	printf("Enter 2D array....\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	}
	printf("-------------------------\n");
	
	for(int i=0;i<r;i++)
	{	
		for(int j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}
