#include "hash_tables.h"

/**
 * key_index - function to find the index
 * @key: takes the kay from user
 * @size: takes the size
 * Return: the index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
