#include "lists.h"

/**
 * free_listint - delete linked list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;

	while (p)
	{
		head = head->next;
		free(p);
		p = head;
	}
}
