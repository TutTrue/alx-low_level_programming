#include "lists.h"

/**
 * delete_nodeint_at_index - ...
 * @head: head of the list
 * @index: index of node that will be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *p = *head;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		p->next = NULL;
		free(p);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		prev = p;
		p = p->next;
	}
	if (!p)
		return (-1);

	prev->next = p->next;
	p->next = NULL;
	free(p);
	return (1);
}
