// WAP in C to delete perfect number from array .
// i/p: int a[6]={6,6,7,28,6,5,24};
// o/p: int a[6]={7,5,24};

#include<stdio.h>
void print_array(int *,int);
int delete_perfect(int *arr,int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		int num = arr[i];
		int j=1,sum=0;
		while(j<num)
		{
			if(num%j==0)
				sum = sum + j;
			j++;
		}	
		if(sum==arr[i])
			continue;
		else
		{
			arr[k++]=arr[i];
		}
	}
	return k;

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

	n = delete_perfect(s,n);	
	
	printf("New Array :");
	print_array(s,n);


}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
