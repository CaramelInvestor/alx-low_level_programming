#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: a pointer to the key of the item
 * @size: size of the array
 * Return: an unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
