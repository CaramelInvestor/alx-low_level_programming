#include <stdio.h>

main()
{
	char array_ch[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
	int index;

	for (index = 0; array_ch[index] != '\0' && index < 6; index++)
	printf("%c", array_ch[index]);
	printf("\n");
	printf("%s\n", array_ch);
	return (0);
}
