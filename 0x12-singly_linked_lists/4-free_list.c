#include "lists.h"

/*
 * free_list: frees the previously allocated list
 * @head: ...
 *
 * Return: ...
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
