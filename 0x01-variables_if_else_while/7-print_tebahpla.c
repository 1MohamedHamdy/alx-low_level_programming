#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the lowercase in reverse using a loop.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 122;
	/* Loop through the lowercase in reverse characters */
	for (; alphabet >= 97; alphabet--)
		putchar(alphabet);
	/* Print a newline character to end the line */
	putchar('\n');
	return (0);
}
