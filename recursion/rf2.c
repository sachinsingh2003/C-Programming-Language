// WAP in C using Recursive function to count digit less than 6 of given any int number .
// i/p: n= 2658942 o/p: count= 4
// int rec_fun_count( int num );

#include<stdio.h>
int rec_fun_count(int num)
{
	static int count =0;
	if(num)
	{
		int digit = num%10;
		if(digit<6)
			count++;
		rec_fun_count(num/10);
	}
	return count;
}

void main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	int count = rec_fun_count(num);
	printf("Sum of digit  less then 6 is %d\n",count);

}
