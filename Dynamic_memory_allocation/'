// Add two dynamically allocated matrices 
// • Allocate two matrices (using int **) 
// • Add them 
// • Print result 
// • Free all memory 

#include<stdio.h>
#include<stdlib.h>
void addition(int r,int c,int **p,int **q,int **sum)    // (int r,int c,int *p[c],int *q[c],int *sum[c])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			sum[i][j] = p[i][j] + q[i][j];
	}
}
int main()
{
	//-----------------------
	// 1st Array
	//-----------------------
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

	//----------------------
	//2nd Array
	//----------------------
	int r2,c2;
	printf("Enter number of row2 and column2\n");
	scanf("%d%d",&r2,&c2);

	int **q;
	q = malloc(sizeof(int*)*r2);
	
	if(q==NULL)
	{
		printf("Memory Not Allocated\n");
		return 0;
	}
	
	for(int i=0;i<r2;i++)
		q[i] = malloc(c2*sizeof(int));

	printf("Enter the ele of 2D array2:\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
			scanf("%d",&q[i][j]);
	}

	printf(" 2D array2:\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
			printf("%d ",q[i][j]);
		printf("\n");
	}
	
	if(r==r2 && c==c2)
	{
	//---------------------
	// 3rd Array
	//---------------------
	
		int **sum;
		sum = malloc(r * sizeof(int *));
		
		for(int i=0;i<r;i++)
			sum[i] = malloc(c * sizeof(int));
	
		addition(r,c,p,q,sum);                              // calling addition function	
	
		printf("Sum of matrix:\n");
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				printf("%d ",sum[i][j]);
			printf("\n");
		}
	}
	else
		printf("Sum is not possible\n");
	return 0;
} 
