#include "lists.h"

/**
 * pop_listint - delete the head of list
 * @head: list
 * Return: integer
 */

int pop_listint(listint_t **head)
{
	int pop;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	pop = (*head)->n;

	free(tmp);
	return (pop);
}
