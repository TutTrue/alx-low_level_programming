#include <stdio.h>
#include <string.h>

/**
 * main - print the number of argument passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", (int)((argc - 1) + (strlen(*argv) * 0)));
	return (0);
}
