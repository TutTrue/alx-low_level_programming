#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	printf("%d", 1);
	for (i = 2; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
