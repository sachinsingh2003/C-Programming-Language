// WAP in C using Recursive function to sum of last 3 digits of given any int number .
// i/p: n= 23456 o/p: sum= 15
// int rec_fun_sum( int num , int c );

#include<stdio.h>
int rec_fun_sum(int num)
{
	static int sum = 0;
	static int count=0;
	if(num)
	{
		int digit = num%10;
		count++;
		sum = sum + digit ; 
		if(count<3)
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
	printf("Sum of last 3 digit is %d\n",sum);

}
