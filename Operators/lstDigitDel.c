// WAP to delete the last digit from the given number....

#include<stdio.h>

void main(){

	int num ;
	printf("Enter the number:-\n");
	scanf("%d",&num);

	num = num/10;

	printf("After deleteing last number - %d\n",num);
}
