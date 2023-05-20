#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes frrom s2 to be concatenated to s1
 *Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ptr)
		return (NULL);

	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		ptr[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		ptr[i++] = s2[j++];

	ptr[i] = '\0';

	return (ptr);
}
