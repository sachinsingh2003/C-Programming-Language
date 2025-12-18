/*
WAP in C using Recursive fun to reverse bits .
i/p : n= 31
00000000 00000000 00000000 00011111
o/p: // print binary in main function
11111000 00000000 00000000 00000000
int rec_fun_rev_bit ( int );
void rec_fun_binary ( int );
*/

#include<stdio.h>
void rec_fun_binary(int num,int pos)
{
	if(pos>=0)
	{

		printf("%d",(num>>pos&1));
		if(pos%8==0)
			printf(" ");

		rec_fun_binary(num,pos-1);
	}
}
int rec_fun_rev_bit(int num,int i,int j)
{
	int first,last;

	if(i>j)
	{	
		first = num>>j&1;	
		last  = num>>i&1;
	
		if(first != last)
		{	
			num = num ^ (1<<j);
			num  = num ^ (1<<i);
		}
		num =  rec_fun_rev_bit(num,i-1,j+1);
	}
	return num;
}
void main()
{
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	
	rec_fun_binary(num,31);
	printf("\n");
	
	int new = rec_fun_rev_bit(num,31,0);	
	
	int i;
	for(i=31;i>=0;i--)
	{	printf("%d",new>>i&1);
		{	
			if(i%8==0)
				printf(" ");
		}
	}
	printf("\n");

}
