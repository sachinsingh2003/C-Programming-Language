// WAP for userdefined atof function(string to float value)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float my_atof(const char *);
float my_atof2(const char *);
void main(int argc, char **argv)
{
	double num;
	num = atof(argv[1]);
	printf("Predefine_num =%lf\n",num);
	

	float num1 = my_atof(argv[1]);
	float num2 = my_atof2(argv[1],len);
	num = num1 + num2;

	printf("Userdefine_num =%lf\n",num);
}

float my_atof(const char *p)
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
float my_atof2(const char *p)
{
	int i,num=0;
	int count=0;
	
	for(i=0;p[i];i++)
	{
		if(p[i]=='.')
		{
			for(int j=i+1;p[j];j++)
			{
				if(p[j]>='0' && p[j]<='9')
				{	
					num = num * 10 + p[j]-48;
					count++;
				}
				else
					break;
			}
		}
	}

	for(int i=0;i<6-count;i++)
	{
		num = num *10;
	}
	float number = num/1000000.0;

	return number;
		
}
