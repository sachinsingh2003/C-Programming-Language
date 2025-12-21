// Find sum of N numbers using dynamic memory allocation 
// Use malloc() or calloc() to create the array.

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter the number of ele...\n");
	scanf("%d",&n);

	int *p;
	p = malloc(sizeof(int)*n);
	
	if(p==NULL)
	{
		printf("Memory Not Allocated\n");
		return 0;
	}

	for(int i=0;i<n;i++)
	scanf("%d",&p[i]);

	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum = sum +p[i];
	}
	
	printf("Sum of N number is %d\n",sum);
} 
