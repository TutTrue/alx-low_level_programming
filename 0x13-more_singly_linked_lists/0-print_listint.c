#include "lists.h"

/**
 * print_listint - print linked list
 * @h: head of the linked list
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	int counter = 0;

	p = h;
	while (p)
	{
		printf("%d\n", p->n);
		counter++;
		p = p->next;
	}
	return (counter);
}
