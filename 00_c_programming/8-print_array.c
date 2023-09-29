#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array
 * @n: number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
        int p;

        for (p = 0; p < n; p++)
        {
                printf("%d, ", a[p]);
        }
		printf("\n");
}
