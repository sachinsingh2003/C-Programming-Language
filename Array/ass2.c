// WAP in C to sort array in decending order.....

#include<stdio.h>
int sort(int *a,int ele)
{
	for(int i=0;i<ele-1;i++)
	{
		for(int j=0;j<ele-1-i ;j++)
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
		int a[5];
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
