#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file, file_read, file_write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	file_read = read(open_file, buffer, letters);
	if (file_read == -1)
	{
		free(buffer);
		return (0);
	}

	file_write = write(STDOUT_FILENO, buffer, file_read);
	if (file_write == -1 || file_read != file_write)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_file);
	return (file_write);
}
