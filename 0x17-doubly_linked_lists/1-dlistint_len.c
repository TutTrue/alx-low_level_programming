#include "lists.h"
/**
 * dlistint_len - print the len of the list
 * @h: head of the list
 * Return: len of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	size_t counter = 0;

	while (cur)
	{
		counter++;
		cur = cur->next;
	}
	return (counter);
}
