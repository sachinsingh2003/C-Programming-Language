// WAP in C using Recursive function to sum of even digits of given any int number .
// i/p: n= 2345 o/p: sum= 6
// int rec_fun_sum( int num );

#include<stdio.h>
int rec_fun_sum(int num)
{
/*
	if(num==0)
		return 0;
	int digit  = num % 10;
	int a = rec_fun_sum(num/10);
	
	if(digit %2==0)
		return digit + a;
	else
		return a;
*/
	static int sum =0;
	if(num)
	{
		int digit = num%10;
		if(digit %2==0)
			sum = sum + digit;
		rec_fun_sum(num/10);
	}
	return sum;
}

void main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	int sum = rec_fun_sum(num);
	printf("Sum of even digit is %d\n",sum);

}
