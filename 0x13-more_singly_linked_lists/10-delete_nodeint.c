#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at a given index
* @head: head pointer
* @index: index of node to be deleted
* Return: return a pointer to the index node
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);

}
