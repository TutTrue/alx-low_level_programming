#include "lists.h"

/**
 * sum_listint - sum of the list
 * @head: head of the list
 * Return: sum of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
