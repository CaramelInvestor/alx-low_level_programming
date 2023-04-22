#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-Serves as the entry point to the program
 *
 * Return: Return zero if no error is encountered
 * else return a non-zero number
 */
int main(void)
{
	char (chl);
	char (chu);

	for (chl = 'a'; chl <= 'z'; chl++)
		putchar(chl);
	for (chu = 'A'; chu <= 'Z'; chu++)
		putchar(chu);
	putchar('\n');
	return (0);
}
