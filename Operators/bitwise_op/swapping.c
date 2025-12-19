// WAP to swap 2 numbers using bitwise operators :-

#include<stdio.h>
void main(){

	int  a,b;
	printf("Enter the numbers:-\n");
	scanf("%d%d",&a,&b);

	printf("Before swapping a = %d and b = %d\n",a,b);	

	a = a ^ b ;
	b = a ^ b ;
	a = a ^ b ;

	printf("After swapping a = %d  and b = %d\n",a,b);
	
}
