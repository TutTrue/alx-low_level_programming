#include "lists.h"

/**
 * add_nodeint - add new node to the list
 * @head: head of the linked list
 * @n: number stored in the node
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (!head)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
}
