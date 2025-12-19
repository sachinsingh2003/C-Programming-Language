// WAP to rotate bits....
// i/p : num= 100 -> 01100100  , no. of rotation = 4
// o/p : num = 01000110


#include<stdio.h>
void main()
{
	unsigned char num,b ;
	
	printf("Enter the number:\n");
	scanf("%hhu",&num);

	printf("Enter the bit rotation(0-7):-\n");
	scanf("%hhu",&b);

	num = (num << b) |(num >> (8-b))  ;
	
	printf("%d",num);

}
