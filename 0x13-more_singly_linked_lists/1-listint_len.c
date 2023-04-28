#include "lists.h"

/**
 * listint_len - length of linked list
 * @h: head of the list
 * Return: length of a list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	int counter = 0;

	p = h;
	while (p)
	{
		counter++;
		p = p->next;
	}
	return (counter);
}
