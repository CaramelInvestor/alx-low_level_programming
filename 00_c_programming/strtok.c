#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char *src = "Jesus loves you";
	char *str = malloc(sizeof(char) * strlen(src));
	char *delim = " ";
	char *token;

	strcpy(str, src);

	token = strtok(str, delim);

	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return (0);
}
