#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    size_t step = sqrt(size);
    size_t prev = 0;

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

        if (prev + step < size)
            prev += step;
        else
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

    for (size_t i = prev - step; i <= prev && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);

        if (array[i] == value)
            return (i);
    }

    return (-1);
}
