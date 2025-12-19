//---------------Function in Structure----------------

// WAp to design a function which return 3 diffrent types data which are : int ,stinrg an float..

#include<stdio.h>
struct stu{
	int rollno;
	char name[20];
	float marks;
};
struct stu ret_isf(void);

void main()
{
	struct stu v = ret_isf();
				    
	printf("%d  %s  %f\n",v.rollno,v.name,v.marks);
}
struct stu ret_isf(void) 
{
	struct stu v ={5,"sachin",99};
	
	return v;              
}

