// WAP for swapping of two number using 3rd variable

#include<stdio.h>
void main(){

	int num1,num2,temp;
	
	printf("Enter the number:-\n");
	scanf("%d%d",&num1,&num2);

	printf("Before swapping num1 = %d  and num2 = %d\n",num1,num2);

	temp = num1 ;
	num1 = num2;
	num2 = temp;

	printf("After swapping num1 =%d  num2 = %d\n \a",num1,num2);
}
