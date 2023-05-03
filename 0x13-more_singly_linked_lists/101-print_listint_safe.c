#include "lists.h"

/**
 * print_listint_safe -  function that prints a listint_t linked list.
 * @head: list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *chain1, *chain2;
	size_t node = 0, i = 0;

	if (head)
	{
		chain1 = head;
	while (chain1->next)
	{
		chain2 = head;
		i = 0;
		printf("[%p] %d\n", (void *)chain1, chain1->n);
		chain1 = chain1->next;
		node++;
		while (i < node)
		{
			if (chain1 == chain2)
			{
				printf("-> [%p] %d\n", (void *) chain2, chain2->n);
				return (node);
			}
			chain2 = chain2->next;
			i++;
		}
	}
		printf("[%p] %d\n", (void *)chain1, chain1->n);
		node++;
	}
	return (node);
}
