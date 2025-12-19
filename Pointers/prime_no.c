// WAP to check number is prime or not using pointers

#include<stdio.h>
void main()
{
	int num ,c=0;
	int *n,*cn;
	
	n = &num;
	cn = &c	;

	printf("Enter the number:\n");
	scanf("%d",n);

	for(int i=1;i<= *n ;i++)
	{
		if(*n % i==0)
			(*cn)++;
	}
	if(*cn == 2)
		printf("Prime Number\n");
	else
		printf("Not Prime\n");
}
