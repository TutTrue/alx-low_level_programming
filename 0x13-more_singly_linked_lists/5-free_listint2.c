#include "lists.h"

/**
 * free_listint2 - delete a linked list
 * @head: head ofthe linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (!head)
	{
		return;
	}
	p = *head;
	while (p)
	{
		*head = (*head)->next;
		free(p);
		p = *head;
	}
	free(*head);
	free(p);
}
