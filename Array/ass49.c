// WAP in C to store prime index ele in another array.
// i/p: int a[8]={11,22,33,44,55,66,77,88};
// o/p: int b[8]={33,44,66,88};


#include<stdio.h>
void print_array(int *,int );
int store_primeIndex_anotherIndex(int *arr,int *des,int n)
{
	int k=0;
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
			des[k++]=arr[i];
	}
	return k;

}
void main()
{
	int n;
	printf("Enter the size of array :\n");
	scanf("%d",&n);

	int s[n],d[n];
	printf("Enter the elements : \n");
	for(int i=0;i<n;i++)
	scanf("%d",&s[i]);

	printf("Original Array :");
	print_array(s,n);

	n= store_primeIndex_anotherIndex(s,d,n);	
	
	printf("New Array :");
	print_array(d,n);


}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
