// WAP to find the sum of 2 digit number (23 => 2+3 = 5)


#include<stdio.h>
void main(){

	int num, a ;
	printf("Enter the number :- ");
	scanf("%d",&num);
	
	a = num % 10 ;
	a = a +  num/10 ;
	
	printf("%d%d\n",num %10,num/10);
	printf("Sum is :- %d\n",a);
	
}
