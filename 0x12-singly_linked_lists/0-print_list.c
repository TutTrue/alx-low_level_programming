#include "lists.h"
#include<stdio.h>
#include <stddef.h>

/**
 * print_list - print linked list
 * @h: head of list
 * Return: len of list
 */
size_t print_list(const list_t *h)
{
	const struct list_s *p;
	size_t counter = 0;

	p = h;
	while (p != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);

		counter++;
		p = p->next;
	}
	return (counter);
}
