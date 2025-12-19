//---------------Dynamic Memory in Structure---------------
// WAP to allocate dynamic memory for n student data . Take input from user and if there is any chance of memory leak or dangling pointer then try to avoid it......

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu
{
	int rollno;
	char name[20];
	float marks;
};
void main()
{
	int n;
	printf("Enter the number of student\n");
	scanf("%d",&n);

	struct stu **p;
	p = malloc(sizeof(struct stu *)*n);
	
	for(int i=0;i<n;i++)
	p[i] = malloc(sizeof(struct stu));
	
	printf("Enter rollno, name and marks\n");
	for(int i=0;i<5;i++)
	scanf("%d%s%f",&p[i]->rollno,p[i]->name,&p[i]->marks);
	
	for(int i=0;i<5;i++)
	{
	printf("%d   %s   %f",p[i]->rollno,p[i]->name,p[i]->marks);
	printf("\n");
	}

	for(int i=0;i<n;i++)
	{
		free(p[i]);
//		p[i]=0;
	}
	free(p);
//	p = 0;

	
}
