#include <stdio.h>

int main()
{
	int var;
	int *ptr;
	int **pptr;

	var = 9999;

	/* take the address of var */
	ptr = &var;

	/* take the address of ptr using address of operator & */
	pptr = &ptr;

	/* take the value using pptr */
	printf("Value of var = %d\n", var);
	printf("Value available at *ptr = %d\n", *ptr);
	printf("Value available at **pptr = %d\n", **pptr);

	printf("Memory Addr var = %p\n", &var);
	printf("Memory Addr ptr = %p\n", ptr);
	printf("Memory Addr pptr = %p\n", pptr);

	return 0;
}
