#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: pointer to the head of the list
 * @n: data of the new node
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
