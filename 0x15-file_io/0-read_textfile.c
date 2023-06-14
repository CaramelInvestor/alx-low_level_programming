#include "main.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file where text is read from
 * @letters: is the number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file_read, file_write;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	file_read = read(letters, buf, fd);

	if (fd | file_read)
	{
		return (0);
	}
	file_write = write(letters, buf, fd);

	if (file_write | file_read)
	{
		return (0);
	}
	free(buf);
	close(fd);
	return (0);
}
