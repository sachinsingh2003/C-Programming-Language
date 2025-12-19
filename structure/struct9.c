//----------------------Bit Field Mechanism-------------------
// Bits field is a mechanism where we can allocate memmory in form of bits.......

#include<stdio.h>

struct stu
{
	int i;
	unsigned int j:3 ;
};
void main()
{
	struct stu v;
	
//	printf("Enter v.j \n");        // invalid (compile time error)
//	scanf("%d",&v.j);

	v.j = 7;                       // valid
	printf("%d\n",v.j);
}
