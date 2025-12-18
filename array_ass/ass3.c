// WAP in C to sort 1st 4 element of array in decending order.....

#include<stdio.h>
int sort(int *a,int ele)
{
	for(int i=0;i<4-1;i++)
	{
		for(int j=0;j<4-1-i ;j++)
		{
			if(*(a+j) < *(a+j+1))
			{
				int temp = *(a+j);
				*(a+j) = *(a+j+1);
				*(a+j+1) = temp ;
			}
		}
	}
}

int main()
{
	{
		int a[7];
		int ele = sizeof(a)/sizeof(a[0]);

		printf("Enter the elements :\n");
		for(int i=0;i<ele;i++)
			scanf("%d",&a[i]);

		printf("Original Array: ");
		for(int i=0;i<ele;i++)
			printf("%d  ",a[i]);
		printf("\n");
		sort(a,ele);

		printf("Sorted Array: ");
		for(int i=0;i<ele;i++)
			printf("%d  ",a[i]);
	}

	return 0;
}
