#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the lowercase alphabet using a loop.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 97;
	/* Loop through the lowercase alphabet characters */
	for (; alphabet <= 122; alphabet++)
		putchar(alphabet);
	/* Print a newline character to end the line */
	putchar('\n');
	return (0);
}
