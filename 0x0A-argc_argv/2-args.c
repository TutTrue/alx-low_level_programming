#include <stdio.h>

/**
 * main - print all argument passed
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (*argv)
	{
		printf("%s\n", *argv++ + (argc * 0));
	}
	return (0);
}
