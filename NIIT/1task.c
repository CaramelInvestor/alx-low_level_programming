#include <stdio.h>
void main()
{
	int length;
	int width;
	int area;

	area = (length * width);
	printf("Enter the length of the rectangle:\n");
	gets(length);
	printf("Enter the width of the rectangle:\n");
	gets(width);

	printf("The area of the rectangle is: %d\n", area);
}
