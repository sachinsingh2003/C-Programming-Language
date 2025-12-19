//---------------Function in Structure----------------

#include<stdio.h>
struct stu{
	int rollno;
	char name[20];
	float marks;
};
void print1(struct stu );
void print2(struct stu *);

void main()
{
	struct stu v ={5,"abcd",34};
	print1(v);                          // call by value
	print2(&v);			    // call by reference

	printf("%d  %s  %f\n",v.rollno,v.name,v.marks);
}
void print1(struct stu x) 
{
	printf("%d  %s  %f\n",x.rollno,x.name,x.marks);
	
	x.rollno = 10;             // does not change value in main function 
}
void print2(struct stu *p)
{

	printf("%d  %s  %f\n",p->rollno,p->name,p->marks);
	
	p->rollno = 100;          // value changes in main function
}
