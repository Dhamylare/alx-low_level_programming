#include "lists.h"

/**
* add_nodeint - add node at beginning of a listint_t list
* @head: head pointer
* @n: integer value to be added
* Return: return NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
