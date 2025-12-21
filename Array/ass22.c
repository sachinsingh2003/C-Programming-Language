// WAP to merge 2 array into 3rd array....

#include<stdio.h>
int mergeArray(int s1[], int s2[], int d[], int n)
{	
	int i,j,k;
	for(i=0,j=1,k=0;i<n+n;i+=2,j+=2,k++)
	{
		d[i] = s1[k];
		d[j] = s2[k];
	}

}

int main()
{
	int n;
	printf("Enter the size of array: \n");
	scanf("%d",&n);

	int s1[n],s2[n],d[n+n];

	printf("Enter the element of array s1: ");
	for(int i=0;i<n;i++)
		scanf("%d",&s1[i]);
	printf("\n");

	printf("Enter the element of array s2: ");
	for(int i=0;i<n;i++)
		scanf("%d",&s2[i]);
	printf("\n");

	printf("S1 array: ");
	for(int i=0;i<n;i++)
		printf("%d ",s1[i]);
	printf("\n");

	printf("S2 array: ");
	for(int i=0;i<n;i++)
		printf("%d ",s2[i]);
	printf("\n");

	mergeArray(s1,s2,d,n);

	printf("Merged Array: ");
	for(int i=0;i<n+n;i++)
		printf("%d ",d[i]);
	printf("\n");

}
