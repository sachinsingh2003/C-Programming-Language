// WAP to delete the second last digit from the given number.....

#include<stdio.h>
void main(){

	int num, temp;
	printf("Enter the number :-\n");
	scanf("%d",&num);

	temp = num%10 ;

	num = num/100;
	num =num * 10 + temp ;
	
	printf("New number is %d\n",num);
	
	
	
}
