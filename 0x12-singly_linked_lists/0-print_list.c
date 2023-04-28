#include "lists.h"

/**
 * print_list - prints the node of a linked list.
 * @h: name of the list.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		size++;
	}
	return (size);
}
