// WAP in C using Recursive function to check given num is perfect or not .
// i/p: n= 6 o/p: yes perfect
// int rec_fun_perfect( int );

#include<stdio.h>
int rec_fun_perfect(int num)
{
	static int sum = 0;
	static int i=1;
	if(i<num)
	{
		if(num%i==0)
			sum = sum + i;
		i++;
		rec_fun_perfect(num);
	}
	if(sum==num)
		return sum;
	else
		return 0; 
}

void main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	int a = rec_fun_perfect(num);
	if(a)
		printf("YES\n");
	else
		printf("NO\n");

}
