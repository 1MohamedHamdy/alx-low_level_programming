#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This function generates a random number, checks its sign,
 * and prints a corresponding message.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	/* Seed the random number generator with the current time */
	srand(time(0));
	/* Generate a random number and store it in 'n' */
	n = rand() - RAND_MAX / 2;
	/* Check the sign of 'n' and print the appropriate message */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
