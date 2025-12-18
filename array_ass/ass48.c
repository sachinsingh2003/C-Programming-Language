// WAP in C to replace prime index ele with 0 in array.
// i/p: int a[8]={11,22,33,44,55,66,77,88};
// o/p: int a[8]={11,22,0 ,0 ,55,0 ,77,0 };


#include<stdio.h>
void print_array(int *,int );
void replace_primeIndex_byZero(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		int j=2;
		while(j<i)
		{
			if(i%j==0)
				break;
			j++;
		}
		if(i==j)
			arr[i]=0;
	}

}
void main()
{
	int n;
	printf("Enter the size of array :\n");
	scanf("%d",&n);

	int s[n];
	printf("Enter the elements : \n");
	for(int i=0;i<n;i++)
	scanf("%d",&s[i]);

	printf("Original Array :");
	print_array(s,n);

	replace_primeIndex_byZero(s,n);	
	
	printf("New Array :");
	print_array(s,n);


}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
