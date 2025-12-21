// Reallocate an array using realloc() 
// • Create array of size N 
// • Increase size to M 
// • Store new elements 
// • Print final array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter the size of array :\n");
	scanf("%d",&n);
	
	//----------------------
	// Usinf malloc
	//----------------------
	int *p;
	p = malloc(sizeof(int)*n);
	
	if(p==NULL)
	{
		printf("Memory Not Allocated\n");
		return 0;
	}
	printf("Enter the ele:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&p[i]);

//	for(int i=0;i<n;i++)
//		printf("%d ",p[i]);

	// Increase size to m
	int m;
	printf("\nEnter new size:\n");
	scanf("%d",&m);

	int *q;
	q = realloc(p,sizeof(int)*m);
	
	if(q==NULL)
	{
		printf("Memory Not Allocated\n");
		return 0;
	}
	printf("Enter ele:\n");
	for(int i=n;i<m;i++)
		scanf("%d",&q[i]);

	for(int i=0;i<m;i++)
		printf("%d ",q[i]);


} 
