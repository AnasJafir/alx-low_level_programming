#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
 * key_index - Computes the index of a key in a hash table
 * @key: The key to be hashed
 * @size: The size of the hash table (array)
 *
 * Return: The index at which the key should be stored in the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_val;

hash_val = hash_djb2(key);
return (hash_val % size);
}
