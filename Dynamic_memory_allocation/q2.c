// Allocate memory for an array using calloc() and initialize it.
// Show that calloc stores zeros
// Compare with malloc

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number of input....\n");
	scanf("%d",&n);

	//----------------------------
	// Using Calloc
	//----------------------------
	int *c;
	c = calloc(n,sizeof(int *));

	if(c==NULL)
	{
		printf("Memory Not Allocated...\n");
		return 0;
	}

	printf("\nValue stored by calloc (should all be 0):\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",c[i]);   // calloc initialize to 0
	}

	//----------------------------
	// Using Malloc
	//----------------------------

	int *m;
	m = malloc(sizeof(int)*n);

	if(m==NULL)
	{
		printf("Memory Not Allocated\n");
		return 0;
	}
	printf("\nValue stored by malloc(garbage value)\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",m[i]);
	}
	printf("\n");

	free(m);
	free(c);

	return 0;
}
