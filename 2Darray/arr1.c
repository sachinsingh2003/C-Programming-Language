// WAP to print 2D array...

#include<stdio.h>
void main()
{
	int arr[2][3];
	
	printf("Enter the elements :\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("size of arr: %ld\n",sizeof(arr));
	printf("size of arr[0]:%ld\n",sizeof(arr[0]));
	printf("size of arr[0][0]: %ld\n",sizeof(arr[0][0]));

	int r = sizeof(arr)/ sizeof(arr[0]);
	int c = sizeof(arr[0])/sizeof(arr[0][0]);

	printf("r= %d c = %d\n",r,c);

	printf("Array : \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
	}

}
