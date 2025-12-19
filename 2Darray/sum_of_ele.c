// Sum of all elements of a 2D array
// Given a 3×3 matrix, find the sum of all elements.

#include<stdio.h>
void main()
{
	int r,c;
	printf("Enter the row and column:\n");
	scanf("%d%d",&r,&c);

	int arr[r][c];
	
	printf("Enter the elements of array :\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
			sum = sum + arr[i][j];
		}
		printf("\n");
	}
	
	printf("Sum of all element of 2D array is : %d \n",sum);

	
}
