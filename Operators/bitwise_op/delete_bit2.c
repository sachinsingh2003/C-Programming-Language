// WAP to delete the 2nd and 5th bit.......


#include<stdio.h>
void main()
{
	int num ,a,b ,bit;
	printf("Enter the number : \n");
	scanf("%d",&num);

	printf("Enter the bit position:\n");
	scanf("%d",&bit);

	a = num << 29 ;
	a = num >> 29 ;

	b = num >> (bit+1) ;
	b = b << bit ;
	
	num  = a | b ;

	printf("New number is:- %d\n", num);
	

}
