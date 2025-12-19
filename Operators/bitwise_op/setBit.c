// WAP in C to set 3rd and 2nd bit.

#include<stdio.h>
void main(){

	int num, bit1, bit2 ;

	printf("Enter the number:- \n ");
	scanf("%d", &num);

	printf("Enter the bits position:- \n ");
	scanf(" %d %d", &bit1,&bit2);

	num = (num | (1<<bit1)) | (num | (1<<bit2));

	printf("New number is %d",num);

}
