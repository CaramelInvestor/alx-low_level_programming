#include <stdio.h>
#include "main.h"

/**
 *main -  a program that prints its name, followed by a new line
 *@argc: argument count
 *@argv: argument vector
 *Return: if no error return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
		printf("%s\n", argv[i]);
	return (0);
}
