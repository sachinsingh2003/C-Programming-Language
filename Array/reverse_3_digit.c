#include<stdio.h>
void reverse_3_digit(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		int num = arr[i];
		int rev = 0;
		while(num)
		{
			int r = num%10;
			num = num/10;
			rev = rev * 10 + r;
		}
		int a = rev%1000;
		int b = rev/1000;
		int rev2 =0;
		int count=0;
		while(b)
		{
			int r = b%10;
			b =  b/10;
			count++;
			rev2 = rev2 * 10 + r;	
		}
		int p=1;
		while(count)
		{
			p = p*10;
			count--;
		}
		
		arr[i] = a * p + rev2;
	}
}
void main()
{
	int n;
	printf("Enter the number of ele :\n");
	scanf("%d",&n);
		
	int arr[n];
	printf("Enter the ele :\n");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);

	reverse_3_digit(arr,n);

	printf("New array : ");
	for(int i=0;i<n;i++)
	printf("%d  ",arr[i]);
	printf("\n");
}
