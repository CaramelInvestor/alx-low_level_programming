#include <stdio.h>

main()
{
	float flt_num, *p;

	flt_num = 123.45;
	printf("'flt_num': %f '\n'", flt_num);
	p = &flt_num;
	*p = 543.21;
	printf("'flt_num': %f '\n'", *p);
	return (0);
}
