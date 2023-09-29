#include <stdio.h>

/**
 *main - serves as entry point
 *@n: integer
 *@p: integer
 *Return: 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Value of 'n': %d\n", n);
	printf("Address of 'n': %p\n", &n);
	*p = 402;
	printf("Value of 'n': %d\n", n);
	return (0);
}
