#include "lists.h"
/**
 * print_dlistint - prints double linked list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *cur = h;
	int counter = 0;

	while (cur.next != NULL)
	{
		printf("%d\n", cur->n);
		cun = cur->next;
		counter++;
	}
	return (counter);
}
