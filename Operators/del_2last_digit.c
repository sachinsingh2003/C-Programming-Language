//WAP to delete second last digit of any given number-----

#include<stdio.h>
void main()
{
	int num,a,c,b;
	printf("Enter the number:- \n");
	scanf("%d",&num);

	a = num / 100;
	b = num % 100;
	c = b%10;

	printf("New number is %d\n",a*10 +c); 



}
