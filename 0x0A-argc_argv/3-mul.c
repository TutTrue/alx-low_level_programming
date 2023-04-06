#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the mul of 2 arguments passed
 * @argc: number of args
 * @argv: array of args
 * Return: 1 if error and 0 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
