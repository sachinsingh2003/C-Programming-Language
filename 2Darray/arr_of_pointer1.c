// example...

#include<stdio.h>
void main()
{
	int a[5] = {30,40,10,50,20};
	
	int *p[5] = {a+2,a+4,a,a+1,a+3};
		
	for(int i=0;i<5;i++)
		printf("%d ",*p[i]);
	printf("\n");
}
