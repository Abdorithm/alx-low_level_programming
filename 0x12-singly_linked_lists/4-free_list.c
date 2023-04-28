#include "lists.h"


/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = tmp;
	}
}
