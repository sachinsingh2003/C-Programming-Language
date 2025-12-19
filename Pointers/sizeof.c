//Size of a pointer variable.....

#include<stdio.h>
void main()
{
	char ch,*chp;
	int i, *ip;
	float f, *fp;

	printf("%ld %ld\n",sizeof(ch),sizeof(chp));

	printf("%ld %ld\n",sizeof(i),sizeof(ip));

	printf("%ld %ld\n",sizeof(f),sizeof(fp));

	
	printf("%ld\n",sizeof(&ch));

	printf("%ld\n",sizeof(&i));

	printf("%ld\n",sizeof(&f));


}
