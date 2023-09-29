#include "shell.h"
/**
 *_getenv - gets the value of a specified env
 *@name: variable to look for
 *Return: Pointer to start index of the value
 */
char *_getenv(char *name)
{
	char **ptr = environ; /*set another pointer to env list*/
	size_t namelen = strlen(name);

	while (*ptr)
	{
		if (strcmp(*ptr, name, namelen) == 0 && (*ptr)[namelen] == '=')
		{
		/*return the value of the environment variable*/
			return (&((*ptr)[namelen + 1]));
		}
		ptr++;
	}
	return (NULL);
}
