#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the digits from 0 to 9 using ASCII values.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48;
	/* Loop through ASCII values for digits 0 to 9 */
	for (; num <= 57; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
