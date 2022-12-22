#include <stdio.h>

/**
 * main - write your line of code here...
 * Remember:
 * @n- you are not allowed to use a
 * @n- you are not allowed to modify p
 * @n- only one statement
 * @n - you are not allowed to code anything else than this line of code
 */

int main (void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	/* ...so that this printsm 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
