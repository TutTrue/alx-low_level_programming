#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: head of the list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t cur,prev;

	if (!*head)
		return (NULL);
	cur  = *head->next;
	prev = NULL;
	while (cur)
	{
		(*head)->next = prev;
		prev = *head;
		*head = cur;
	}
	(*head)->next = prev;
	return (*head);
}
