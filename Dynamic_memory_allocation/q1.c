// Write a program to allocate memory for N integers using malloc() and print them.
// Input N
// Allocate memory
// Take input & print values
// Free memory

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number of input....\n");
	scanf("%d",&n);

	int **p;
	p = malloc(sizeof(int *)*n);

	if(p==NULL)
	{
		printf("Memory Not Allocated...\n");
		return 0;
	}

	for(int i=0;i<n;i++)
	{
		p[i] = malloc(sizeof(int));
	
		if(p[i]== NULL)
		{
			printf("Memory Not Allocated...\n");
			return 0;
		}	
	}

	printf("Enter the numbers:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",p[i]);
	}

	for(int i=0;i<n;i++)
		printf("%d ",*p[i]);

	for(int i=0;i<n;i++)
	{
		free(p[i]);
	}
	free(p);

	return 0;
}
