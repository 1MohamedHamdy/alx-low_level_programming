#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the digits from 0 to 9, separated by
 * commas and spaces, except for the last digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 48;
	/* Loop through numbers from 0 to 9 */
	for (; number <= 57; number++)
	{
		putchar(number);
		if (number == 57)
			break;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
