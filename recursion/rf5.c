// WAP in C using Recursive function to reverse the number of given any int number .
// i/p: n= 23456 o/p: rev = 65432
// int rec_fun_rev( int );

#include<stdio.h>
int rec_fun_rev(int num)
{
	static int rev = 0;
	if(num)
	{
		int digit = num%10;
		rev = rev * 10 + digit ; 
		
		rec_fun_rev(num/10);
	}
	return rev;
}

void main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	int rev = rec_fun_rev(num);
	printf("Reverse of digit is %d\n",rev);

}
