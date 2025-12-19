//-----------LED Application -------------------------
// WAP tp set(ON) one particular bit in a given number:-



#include<stdio.h>
void main(){

	int num , pos;
	printf("Enter 1 bit number:-\n");
	scanf("%d",&num);


	printf("Enter the position of bit:-\n");
	scanf("%d",&pos);
	
	printf("Number is %hhd\n",num);
	
	num = num | 1<<pos; 
	
	printf("After Number is = %d\n ",num);
	
}
