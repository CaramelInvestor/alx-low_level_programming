#include "main.h"
#include <stdio.h>

/**
 *_strlen -  a function that returns the length of a string.
 *@str: Charcter to be declared
 *Return: length
 */
size_t _strlen(const char *str)


{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
