#include "lists.h"

/**
 * free_list - free the memory allocated t a list_t list
 *
 * @head: pointer to the  node of the list to free
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
