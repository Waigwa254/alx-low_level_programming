#include "hash_tables.h"

/**
 * key_index - Get the index
 * @key: Thto get the
 * @size: The siz
 * Return: index
 * Description: algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
