#include "lists.h"

/**
 * print_list - ...
 * @h: ...
 *
 * Return: ...
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		printf("\n");
		n++;
		h = h->next;
	}
	return (n);
}
