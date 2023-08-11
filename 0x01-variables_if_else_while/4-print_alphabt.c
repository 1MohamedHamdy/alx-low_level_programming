#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the lowercase English alphabet characters
 * while skipping 'e' and 'q'.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 97;
	/* Loop through the lowercase alphabet characters */
	for (; alphabet <= 122; alphabet++)
	{
		if (alphabet == 101 || alphabet == 113)
		{
			/* Skip 'e' and 'q' */
			continue;
		}
		putchar(alphabet);
	}
	/* Print a newline character to end the line */
	putchar('\n');
	return (0);
}
