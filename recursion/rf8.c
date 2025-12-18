// WAP in C using Recursive function to check given num is prime or not .
// i/p: n= 17 o/p: yes prime
// int rec_fun_prime ( int ,int );

#include<stdio.h>
int rec_fun_prime(int num)
{
	static int i=1;
	static int count=0;
	if(i<num)
	{
		if(num%i==0)
			count++;
		i++;
		rec_fun_prime(num);
	}
	if(count==1)
		return 1;
	else
		return 0; 
}

void main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	int a = rec_fun_prime(num);
	if(a)
		printf("YES\n");
	else
		printf("NO\n");

}
