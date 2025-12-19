//-----------LED Application -------------------------
// WAP to compliment(toggle) one particular bit in a given number:-



#include<stdio.h>
void main(){

	char num , pos;
	printf("Enter 1 bit number:-\n");
	scanf("%hhd",&num);


	printf("Enter the position of bit:-\n");
	scanf("%hhd",&pos);
	
	printf("Number is %hhd\n",num);
	
	num = num ^ 1<<pos ; 
	
	printf("After Number is = %hhd\n ",num);
	
}
