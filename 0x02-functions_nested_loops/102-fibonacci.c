#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 * separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	int i = 2;

	for (; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	i = 0;
	for (; i < 50; i++)
	{
		printf("%d", fib[i]);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

