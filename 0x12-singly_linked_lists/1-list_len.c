#include "lists.h"

/**
 * list_len - len of lined list
 * @h: head of linked list
 * Return: len of linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t counter = 0;

	while (p != NULL)
	{
		counter++;
		p = p->next;
	}
	return (counter);
}
