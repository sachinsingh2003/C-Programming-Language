// WA commmand line argument program to convert int into string....

#include<stdio.h>
#include<stdlib.h>
char * convertor(char *,int);
void main(int argc,char **argv)
{
	int num,newNum,i;
	char str[20];

	if(argc < 2) {
        	printf("Usage: ./a.out <number>\n");
        	return 0;
    	}
	num = atoi(argv[1]);
	printf("Number is %d\n",num);
	
	convertor(str,num);
	
}	
char * convertor(char *p,int num)
{
	int k=0,newNum=0;
	while(num)
	{
		int r = num%10;
		num = num/10;
		newNum = newNum *10 + r;
	}
//	printf("newNum = %d\n",newNum);
	for(;newNum;newNum = newNum/10)
	{
		int r = newNum%10;
		p[k++] = r + '0';
	}
	p[k] ='\0';

	printf("string =%s\n",p); 
}
