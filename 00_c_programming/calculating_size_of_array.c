#include <stdio.h>

main()
{
	int total_byte;
	int length[10];

	total_byte = sizeof(int) * 10;
	printf("The Size of int is %lu-byte long.\n", sizeof(int));
	printf("The Array of 10 ints has total %d-bytes.\n", total_byte);
	printf("The Address of the first element: %p\n", &length[0]);
	printf("The Address of the last element: %p\n", &length[9]);
	return (0);
}
