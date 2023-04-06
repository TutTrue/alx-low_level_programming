#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the ADDITION of arguments passed
 * @argc: number of args
 * @argv: array of args
 * Return: 1 if error and 0 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i, sum = 0;

		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i][0]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);

	}

}
