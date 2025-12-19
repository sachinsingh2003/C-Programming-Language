// WAP to swap 1st and last byte of a given integer data....

#include<stdio.h>
void main()
{
	int num=0x11223344;
	char *cp,*cp1;

	cp = cp1= (char *)&num;
	cp1 = cp1+3;

	printf("Before num= %x\n",num);

	int t = *cp;
	*cp = *cp1;
	*cp1 = t;

	cp=cp1=(char *)&num;
	cp = cp+1;
	cp1= cp1+2;

	int d = *cp;
	*cp = *cp1;
	*cp1 = d;

	printf("After num = %x\n",num);

}
