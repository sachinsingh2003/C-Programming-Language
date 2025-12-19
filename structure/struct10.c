//----------------------Bit Field Mechanism-------------------
// Bits field is a mechanism where we can allocate memmory in form of bits.......

// If sizeof operator is not applicable on bit fielf, then how to find size of bit field......?????
//-----------logic..........-----------
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

	v.j = 1;                       // valid
	int c=0;

	while(v.j)
	{
		v.j = v.j <<1;
		c++;
	}
	printf("Size of v.j is %d\n",c);
}
