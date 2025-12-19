// WAP in C to delete 0th 1st 2nd bit.......

#include<stdio.h>
void main(){

	int num, bit1,result ;

	printf("Enter the number:- \n ");
	scanf("%d", &num);

	printf("Enter the bits position:- \n ");
	scanf("%d", &bit1);

	num = num >> bit1 ;

	printf("New number is %d\n",num);

}
