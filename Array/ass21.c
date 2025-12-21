// WAP to insert 99 on 0th ,88 on 1st index in same array....

#include<stdio.h>
int insertElement(int *arr,int n,int num1,int num2,int index1,int index2)
{	
	int i;
	for(i=n-1;i>index1;i--)
	{
		*(arr+i) = *(arr+i-2);
	}
	*(arr + index1) = num1;
	*(arr + index2) = num2;
}

void main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("\n");

	int arr[n],*p;
	p = arr ;
	printf("Enter the element of array :\n");
	for(int i=0;i<n-2;i++)
	scanf("%d",p+i);
	printf("\n");

	int num1,num2;
	printf("Enter the number to insert: \n");
	scanf("%d %d",&num1,&num2);

	int index1,index2;
	printf("Enter the index : \n");
	scanf("%d %d",&index1,&index2);

	printf("Original array : ");
	for(int i=0;i<n-2;i++)
	printf("%d ",*(p+i));
	printf("\n");
	
	insertElement(arr,n,num1,num2,index1,index2);	

	printf("Original array : ");
	for(int i=0;i<n;i++)
	printf("%d ",*(p+i));
	printf("\n");
}
