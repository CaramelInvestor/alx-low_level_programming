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

	for (sd = 0; sd < 10; sd++)
		printf("%d", sd);
	printf("\n");
	return (0);
}
