#include "main.h"

/**
 * main - _isdigit checks for int (0 through 9).
 *@c: is the int to be checked
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0)
	{
		return (1);
	}
	else if (c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
