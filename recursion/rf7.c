// WAP in C using Recursive function to count set bit in given num. // pass address of variable
// i/p: n= 63 o/p: count: 6
// int rec_fun_count( int * );

#include<stdio.h>
int rec_fun_count_setBit(int *num)
{
	int *p = num;
	static int pos = 31;
	static int count=0;
	if(pos>=0)
	{
		if((*p>>pos&1)==1)
			count++;
		pos--;
		rec_fun_count_setBit(p);
	}
	return count;
}

void main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	int *p = &num;
	
	int a = rec_fun_count_setBit(p);
	printf("Number of set bit : %d\n",a);

}
