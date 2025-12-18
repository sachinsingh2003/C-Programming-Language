// WAP to insert 10 on sorted place in sorted array....

#include<stdio.h>
int insertElement(int *arr,int n,int num)
{	
	int i;
	for(i=n+1;*(arr+i-1)>num;i--)
	{
		*(arr+i) = *(arr+i-1);
	}
	*(arr+i) = num;
}

void main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("\n");

	int arr[n],*p,num,index;
	p = arr ;
	printf("Enter the element of array :\n");
	for(int i=0;i<n-1;i++)
	scanf("%d",p+i);
	printf("\n");

	printf("Enter the number to insert: \n");
	scanf("%d",&num);

//	printf("Enter the index : \n");
//	scanf("%d",&index);

	printf("Original array : ");
	for(int i=0;i<n-1;i++)
	printf("%d ",*(p+i));
	printf("\n");
	
	insertElement(arr,n,num);	

	printf("Original array : ");
	for(int i=0;i<n;i++)
	printf("%d ",*(p+i));
	printf("\n");
}
