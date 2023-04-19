#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - ...
 * @argc: number of args
 * @argv: array of args
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3][0] == '0' && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(atoi((argv[1])), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

