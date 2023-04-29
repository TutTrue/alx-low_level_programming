#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of linked list
 * @head: head of the list
 * @n: number stored in new node
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *p = *head;

	if (!newNode)
		return (NULL);

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (p->next != NULL)
		p = p->next;

	newNode->n = n;
	p->next = newNode;
	return (newNode);
}
