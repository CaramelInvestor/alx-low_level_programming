#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iunistd.h>
#include <stdlib.h>
/**
 * create_file - function that creates a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the EOF
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lenght;
	ssize_t res_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		lenght = 0;
		while (*(text_content + lenght) != '\0')
			lenght++;
		res_write = write(fd, text_content, lenght);
		if (res_write == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
