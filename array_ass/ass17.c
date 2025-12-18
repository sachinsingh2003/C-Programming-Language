// WAP to sort 1st 3 element of array-----

#include<stdio.h>
int sort3ele(int *arr,int n)
{
	
	for(int i=0;i<3-1;i++)
	{
		for(int j=0;j<3-1-i;j++)
		{
			if(*(arr+j) > *(arr+j+1))
			{
				int temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
}
void main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("\n");

	int arr[n];
	int *p = arr;
	printf("Enter the elements: \n");
	for(int i=0;i<n;i++)
	scanf("%d",p+i);

	printf("Original Array : ");
	for(int i=0;i<n;i++)
	printf("%d ",*(p+i));
	printf("\n");
	
	sort3ele(arr,n);

	printf("Sort Array : ");
	for(int i=0;i<n;i++)
	printf("%d ",*(p+i));
	printf("\n");
}
