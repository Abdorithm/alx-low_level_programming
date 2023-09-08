#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: ...
 * @key: ...
 * @value: ...
 *
 * Return: 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *head;
	int index;

	if (strlen(key) == 0 || value == NULL || ht == NULL
	   || ht->size == 0)
		return (0);
	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	node->value = strdup(value);
	if (node->value == NULL)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, node->key) == 0)
		{
			free(head->value);
			head->value = node->value;
			free(node);
			return (1);
		}
		head = head->next;
	}
	head = ht->array[index];
	node->next = head;
	head = node;
	return (1);
}
