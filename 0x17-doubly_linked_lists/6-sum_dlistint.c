#include "lists.h"
/**
 * sum_dlistint - get the sum of a linked list
 * @head: head of the list
 * Return: sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	int sum = 0;

	while (cur)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
