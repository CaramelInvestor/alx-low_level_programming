#include <stdio.h>

main()
{
	char array_ch[15] = {'I', ' ',
			'l', 'i', 'k', 'e', ' ',
			'C', '!', '\0'};
	int i;

	for (i = 0; array_ch[i]; i++)
	printf("%c", array_ch[i]);
	printf("\n");
	return (0);
}
