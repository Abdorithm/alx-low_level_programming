#include "lists.h"

/**
 * print_list - prints the node of a linked list.
 * @h: name of the list.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
		size++;
	}
	return (size);
}
