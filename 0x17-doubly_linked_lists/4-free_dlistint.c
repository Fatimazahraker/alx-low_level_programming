#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nav, *nav2;

	nav = head;
	while (nav)
	{
		nav2 = nav->next;
		free(nav);
		nav = nav2;
	}
}
