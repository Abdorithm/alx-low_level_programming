#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash tabel,
 * Null on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);
	return (ht);
}
