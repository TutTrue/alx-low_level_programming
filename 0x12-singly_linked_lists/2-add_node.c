#include "lists.h"

/**
 * add_node - add new node at the begining of the list
 * @head: pointer to the head of linked list
 * @str: str that will be stored in the node
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	if (!newNode->str)
		return (NULL);
	if (!head)
	{
		*head = newNode;
		return (newNode);
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
