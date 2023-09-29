#include <stdio.h>

main()
{
	char array_ch[6] = {'A', 'B', 'C', 'D', 'E', '\0'};
	int i;

	i = 0;
	for (; array_ch[i] != '\0' &&  i < 6; i++)
	printf("%c", array_ch[i]);
	printf("\n");
	return (0);
}
