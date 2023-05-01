#include "lists.h"

/**
 * free_listint - free  list
 * @head: list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}