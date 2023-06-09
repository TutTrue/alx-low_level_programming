#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the list
 * @idx: position of new node
 * @n: number stored in the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *newNode = malloc(sizeof(listint_t));
	unsigned int i;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!*head && idx == 0)
	{
		*head = newNode;
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head  = newNode;
		return (*head);
	}
	p = *head;
	for (i = 0; i < idx - 1; i++)
		if (p)
			p = p->next;
		else
			return (NULL);


	newNode->next = p->next;
	p->next = newNode;
	return (newNode);
}
