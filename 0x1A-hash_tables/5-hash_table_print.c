#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int begin = 0;
	hash_node_t *head;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
		{
			head = ht->array[i];
			while (head != NULL)
			{
				if (begin)
					printf(", ");
				printf("'%s': '%s'", head->key, head->value);
				begin = 1;
				head = head->next;
			}
		}
	printf("}\n");
}
