// WAP in C to delete odd palindrome number from array .
// i/p: int a[6]={22,141,222,45,33,77};
// o/p: int a[6]={22,222,45};

#include<stdio.h>
void print_array(int *,int);
int delete_odd_pallindrome(int *arr,int n)
{
	int k=0;
	for(int i=0;i<n;i++)
	{
		int num = arr[i];
		int sum=0;
		while(num)
		{
			int r = num%10;
			sum = sum * 10 + r;
			num = num/10;
		}
		if(sum==arr[i] && arr[i]%2!=0)
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

	n = delete_odd_pallindrome(s,n);	
	
	printf("New Array :");
	print_array(s,n);


}
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
