// WAP to swap adajacent nibbles....


#include<stdio.h>
void main()
{
	int num = 0x12345678;
	char *p , i ;
	
	p = (char *)&num;

	printf("Before nun = %x\n",num);

	for(i=0;i<4;i++)
	{
		*p = *p>>4 | *p<<4 ;
	p = p+1 ;
	}
	printf("After num = %x\n",num);

}
