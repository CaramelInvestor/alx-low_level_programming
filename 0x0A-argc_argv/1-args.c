#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments in the program.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int n;

	for(n = 0; n < argc; n++)
		(*argv)++; 
	printf("%d\n", n - 1);
	return (0);
}
