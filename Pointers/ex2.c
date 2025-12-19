// WAP to scan a number using pointer , dislpay directly as well as indirectly

#include<stdio.h>
void main()
{
	int num,*p;
	
	printf("Enter the number: \n");
	p = &num;
	scanf("%d",p);
	
	printf("num =%d *p= %d\n",num,*p);
}
