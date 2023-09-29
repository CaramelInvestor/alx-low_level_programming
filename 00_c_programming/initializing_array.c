#include <stdio.h>

main()
{
	int index;
	int length[10];

	index = 0;
	for (; index < 10; index++)
	{
	length[index] = index++;
	printf("length[%d] is initialized with %d\n", index, length[index]);
	}
	return (0);
}
