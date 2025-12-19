# include<stdio.h>
void main()
{

/*	int v = 9;
	char g='c';
	
	printf("%d %d %d",sizeof(g),sizeof(int),sizeof('g'));
*/

/*
int a=5, b=2, c=4;
printf("%d\n",sizeof(a= b+c));
printf("%d\n",a);
*/

/*
	int a=9,b=9;
	a = b++;
	b = a--;
	b = ++b;
	printf("%d %d",a,b);
*/

/*
int x=-7;
printf("%d %d %d %d %d\n",++x,x,--x,x++,x++);
*/


int x=4,y=5,z=9;
x=(y^=9,z&=5,x);
printf("%d %d %d\n",x,y,z);


}


