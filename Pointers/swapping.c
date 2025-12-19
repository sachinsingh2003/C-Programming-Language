// WAP for swapping of two number using temporary variablr and using pointers...

#include<stdio.h>
void main()
{
	int a,b,c;
	int *p,*q,*r ;
	
	printf("Enter the numbers:\n");
	scanf("%d %d",&a,&b);
	
	p = &a ,q = &b , r = &c ;
	
	*r = *p ;  // c =  a
	*p = *q ;  // a =  b
	*q = *r ;  // b =  c

//	printf("a = %d b = %d\n",a,b);
 
 	printf("a = %d b = %d\n",*p,*q);
}
