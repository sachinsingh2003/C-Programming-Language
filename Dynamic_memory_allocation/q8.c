// Create a 2D matrix using double-pointers (int **p) 
// • Allocate rows + columns dynamically 
// • Take input 
// • Print matrix 
// • Free memory

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r,c;
	printf("Enter number of row and column\n");
	scanf("%d%d",&r,&c);

	int **p;
	p = malloc(sizeof(int*)*r);
	
	if(p==NULL)
	{
		printf("Memory Not Allocated\n");
		return 0;
	}
	
	for(int i=0;i<r;i++)
		p[i] = malloc(c*sizeof(int));

	printf("Enter the ele of 2D array:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	}

	printf(" 2D array:\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}

	for(int i=0;i<r;i++)
	{
		free(p[i]);
	}
	free(p);

	return 0;
} 
