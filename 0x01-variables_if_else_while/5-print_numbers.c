#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the numbers from 0 to 9 using a loop.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;
	/* Loop through numbers from 0 to 9 */
	for (; number < 10; number++)
		printf("%d", number);
	printf("\n");
	return (0);
}
