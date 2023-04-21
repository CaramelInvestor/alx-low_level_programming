#include <unistd.h>

/**
 * main -Serves as the entry point to the program
 *
 * Return: Return zero if no error is encountered,
 * else return a non-zero number
 */

int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" \
		- Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
