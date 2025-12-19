// Design a function to print the element of 2D array

#include<stdio.h>
void print(int r,int c,int (*p)[c])
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}
void main()
{
	int a[2][3] = {{10,20,30},{40,50,60}};
	print(2,3,a);
}
