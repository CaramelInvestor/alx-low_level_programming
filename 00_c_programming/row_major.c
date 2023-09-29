#include <stdio.h>

main()
{
	int a[10][25];
	int i, j;

	for (i = 0; i < 10; i++)
	for (j = 0; j < 25; j++)
	printf("Address of a[10][6] = %p + (%d * %d + %d) * %d", &a[0][0], 8, 25, 6, 4);
	break;
	return (0);
}
