#include <stdio.h>

int main()
{

	/* an array with 5 rows and 2 columns*/
	int a[5][4];
	int i, j;

	 /* output each array element's value */
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
	printf("Enter value of a[%d][%d]:", i, j);
	scanf("%d", &a[i][j]);
		}
	}

	return (0);
}
