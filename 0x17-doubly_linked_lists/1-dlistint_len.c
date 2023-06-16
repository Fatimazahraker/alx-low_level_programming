#include "lists.h"

/**
 * dlistint_len - length of list
 * @h: head
 * Return: number of node
 */


size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i;

	for (i = 0; current; i++)
		current =  current->next;
	return (i);
}
