#include "lists.h"
/**
 * print_dlistint - prints double linked list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	int counter = 0;

	while (cur)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		counter++;
	}
	return (counter);
}
