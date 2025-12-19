// WAP to store 1 student data using structure which contain rollno, name and marks....

#include<stdio.h>
struct stu
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	struct stu v;
	
	printf("Enter rollno,name and marks\n");
	scanf("%d%s%f",&v.rollno,v.name,&v.marks);

	printf("%d %s %f\n",v.rollno,v.name,v.marks);
}
