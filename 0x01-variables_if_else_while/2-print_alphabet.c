#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Serves as the  entry to the program
 *
 * Return: Returns zero if no errors is encountered,
 * else a non-zero number
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++;)
		putchar(ch);
	putchar('\n');
	return (0);
}

