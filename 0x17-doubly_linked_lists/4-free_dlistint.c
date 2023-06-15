#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;

	while (cur)
	{
		head = head->next;
		free(cur);
		cur = head;
	}
}
