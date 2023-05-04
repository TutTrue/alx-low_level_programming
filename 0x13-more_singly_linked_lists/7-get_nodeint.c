#include "lists.h"

/**
 * get_nodeint_at_index - get the nth index node
 * @head: head of the list
 * @index: index of the node
 * Return: node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	p = head;
	if (index == 0)
		return (p);
	for (i = 1; i <= index; i++)
		if (p)
			p = p->next;
		else
			return (NULL);
	return (p);
}
