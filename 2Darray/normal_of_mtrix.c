// WAP to find normal.. of matrix ....

#include<stdio.h>
#include<math.h>

/*
double square_root(int num)
{
	double temp=1;
	while(temp * temp <= num)
		temp++;

	return temp-1;
}
*/

double normal(int r,int c, int (*p)[c])
{	
	double sum=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			sum = sum + (p[i][j]*p[i][j]);		
		}		
	}
	return sqrt(sum);

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

	double result = normal(r,c,arr);
	printf("Normal of matrix is %f \n",result);
}
