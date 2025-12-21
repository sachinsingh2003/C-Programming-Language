// WAP in C to delete all strong num from array .
// i/p: int a[6]={2,145,2,14,3,2};
// o/p: int a[6]={14,3};

#include<stdio.h>
void print_array(int *,int);
int delete_strong(int *arr,int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		int num = arr[i];
		int sum=0;	
		while(num)
		{
			int r = num%10;
			int fact =1;
			for(int j=1;j<=r;j++)	
			{
				fact = fact * j;
			}
		num = num/10;
		sum = sum + fact;
		}
		if(sum== arr[i])
			continue;
		else
			arr[k++] = arr[i]; 
		
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

	n = delete_strong(s,n);	
	
	printf("New Array :");
	print_array(s,n);


}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
