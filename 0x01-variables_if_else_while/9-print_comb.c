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
	int sd;
	int c;
	int s;

	for (sd = 0; sd < 10; sd++)
		putchar(sd);
	for (c = ','; c++;)
		putchar(c);
	for (s = ' '; s++;)
		putchar(s);
	printf("\n");
	return (0);
}
