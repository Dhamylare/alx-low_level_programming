#include "lists.h"

/**
* get_nodeint_at_index - print the nth node of a linked list
* @head: head pointer
* @index: index of the node
* Return: pointer of Index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
