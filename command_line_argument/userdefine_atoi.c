// WAP for userdefined atoi function

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int my_atoi(const char *);
void main(int argc, char **argv)
{
	int num;
	num = atoi(argv[1]);
	printf("Predefine_num =%d\n",num);

//	printf("len =%d\n",strlen(argv[1]));

	num = my_atoi(argv[1]);
	printf("Userdefine_num =%d\n",num);
}

int my_atoi(const char *p)
{
	int i,num=0;
	if(p[0]=='+' || p[0]=='-')
		i=1;
	else
		i=0;

	for(;p[i];i++)
	{
		if(p[i]>='0' && p[i]<='9')
			num = num *10 + p[i]-48;
		else
			break;
	}
	if(p[0]=='-')
		num = -num;
	
	return num;
}
