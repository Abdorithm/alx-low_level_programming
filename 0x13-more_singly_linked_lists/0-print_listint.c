#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the nodes of a linked list.
 *
 * @h: name of the list.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
