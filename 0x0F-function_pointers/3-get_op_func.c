#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - function pointer takes a char and return
 * a pointer to a function that takes 2 intgers
 * @s: the char
 * Return: pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (strcmp(ops[i].op, s) != 0 && ops[i].op != NULL)
		i++;
	return (ops[i].f);
}
