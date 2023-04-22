#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Serves as the entry point to the program
 *
 * Return: Return zero if no error is encountered,
 * else return a non zero number
 */
int main(void)
{
	int d = '0';

	for (d; d <= '9'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
