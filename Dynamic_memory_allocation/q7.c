// Find maximum & minimum in dynamically allocated array 
// • Use malloc/calloc 
// • Input N 
// • Print max & min 

#include<stdio.h>
#include<stdlib.h>
void max_min(int *arr,int n)
{
	int max= 0;
	int min =arr[0];

	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
			max = arr[i];
	
		else if(arr[i]<min)
			min = arr[i];	
	}
	printf("Max : %d",max);
	printf("\nMin : %d",min);
}
int main()
{
	int n;
	printf("Enter the number of ele\n");
	scanf("%d",&n);
	
	int *arr;
	arr = malloc(sizeof(int)*n);

	printf("Enter the ele of arr:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Array :\n");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	max_min(arr,n);
}
