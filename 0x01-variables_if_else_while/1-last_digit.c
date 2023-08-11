#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This function generates a random number, extracts its last digit,
 * and prints messages based on the properties of the last digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int ldigit;
	/* Seed the random number generator with the current time */
	srand(time(0));
	/* Generate a random number and store it in 'n' */
	n = rand() - RAND_MAX / 2;
	/* Extract the last digit of 'n' */
	ldigit = n % 10;
	/* Check the properties of the last digit and print the appropriate message */
	if (ldigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	else if (ldigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, ldigit);
	else if (ldigit < 6 && ldigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	return (0);
}
