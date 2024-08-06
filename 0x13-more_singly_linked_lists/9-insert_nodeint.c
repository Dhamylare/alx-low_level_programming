#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given postion
* @head: head pointer
* @idx: index of the node
* @n: value at new node
* Return: return the address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
