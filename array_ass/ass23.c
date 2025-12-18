// WAP to merge 2 array into 3rd array....
// i/p: int a[2]={1,5}; b[4]={11,22,33,44};
// o/p: int c[6]={1,11,5,22,33,44};

#include<stdio.h>
int mergeArray(int s1[], int s2[], int d[], int n1,int n2)
{	
	int i=0,j=0,k=0;
	
	while(i < n1 && j < n2)
	{
		d[k++] = s1[i++];
		d[k++] = s2[j++];
	}
	
	while(i < n1)
		d[k++] = s1[i++];

	while(j < n2)
		d[k++] = s2[j++];
}

void main()
{
	int n1,n2;
	printf("Enter the size of s1: ");
	scanf("%d",&n1);

	int s1[n1],s2[n2],d[n1+n2];

	printf("Enter the element of array s1: ");
	for(int i=0;i<n1;i++)
	scanf("%d",&s1[i]);
	printf("\n");
	
	printf("Enter the size of s2 :");
	scanf("%d",&n2);
	
	printf("Enter the element of array s2: ");
	for(int i=0;i<n2;i++)
		scanf("%d",&s2[i]);
	printf("\n");

	printf("S1 array: ");
	for(int i=0;i<n1;i++)
		printf("%d ",s1[i]);
	printf("\n");

	printf("S2 array: ");
	for(int i=0;i<n2;i++)
		printf("%d ",s2[i]);
	printf("\n");

	mergeArray(s1,s2,d,n1,n2);

	printf("Merged Array: ");
	for(int i=0;i<n1+n2;i++)
		printf("%d ",d[i]);
	printf("\n");

}
