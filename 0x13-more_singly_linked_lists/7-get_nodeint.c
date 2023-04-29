#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t linked list.
 * @head: lists
 * @index: integer
 * Return: pointer to list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
		if (i == index)
			return (tmp);
	}
	return (NULL);
}
