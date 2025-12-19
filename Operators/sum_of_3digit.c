// WAP in C to sum of 3 digit number--------

#include<stdio.h>
void main()
{
	int number,a,b,c,d;
	
	printf("Enter a 3 digit number number:-\n");
	scanf("%d",&number);

	a = number % 10 ;
	b = number/10 ;
	c = b%10 ;
	d = b/10 ;

	printf("Sum of digit is:-%d\n",a+c+d) ;

}
