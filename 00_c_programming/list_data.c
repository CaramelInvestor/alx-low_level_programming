#include <stdio.h>

main()
{
	double list_data[6] = {12345,
				12345,
				12345,
				12345,
				12345};
	int total_byte = (sizeof (double) * 6);
	printf("Number of byte is: %ld-byte. long\n", sizeof(list_data));
	printf("Number of byte is: %d-byte. long\n", total_byte);
	return (0);
}
