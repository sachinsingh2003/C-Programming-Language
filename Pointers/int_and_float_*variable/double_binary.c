// WAP to print binary format of double unsing integer pointer

#include<stdio.h>
void main()
{
        double d = 23.5;	
	int pos,*ip;
	
	ip = (int *)&d;
	
//	printf("%d \n",sizeof(d));
	
	for(pos=64;pos>=0;pos--)
	{
		printf("%d", *ip>>pos&1);
		if(pos%8==0)
			printf(" ");
	}
	printf("\n");
}
