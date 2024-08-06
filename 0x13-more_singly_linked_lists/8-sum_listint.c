#include "lists.h"

/**
* sum_listint - prints sum of all the data (n) of a listint_t list.
* @head: head pointer
* Return: sum all the data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
