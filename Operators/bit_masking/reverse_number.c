// WAP to reverse the number using bit masking.....
//   ex= 12345678 
//    o/p = 87654321

#include<stdio.h>
void main()
{

	unsigned int num,a;
	printf("Enter the number:-\n");
	scanf("%x",&num);

	a = ((num & 0x0000000f)<<28) | ((num & 0x000000f0)<<24);
	printf("%x",a);
}


