#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: list
 * @idx: index
 * @n: data
 * Return: adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = h;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (h == NULL || h->next == NULL)
			return (NULL);
		
		h = h->next;
	}

	h->next = new;
	new->n = n;
	new->next = h->next;
	return (new);
}

