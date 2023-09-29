#include <stdio.h>

main()
{
	char ch, *p;

	ch = 'A';
	printf("Value of 'ch': %c '\n'", ch);
	p = &ch;
	printf("Clone value of 'p': %c '\n'", *p);
}
