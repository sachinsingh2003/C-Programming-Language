// WAP to get the last digit of given input

#include<stdio.h>
void main(){

	int num, lst_digit;
	printf("Enter the number:-\n");
	scanf("%d",&num);

	lst_digit = num%10;
	
	printf("The last digit of %d is %d",num,lst_digit);
	
}
