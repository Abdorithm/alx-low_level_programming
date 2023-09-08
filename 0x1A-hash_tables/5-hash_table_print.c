#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int begin = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
		{
			if (begin)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			begin = 1;
		}
	printf("}\n");
}
