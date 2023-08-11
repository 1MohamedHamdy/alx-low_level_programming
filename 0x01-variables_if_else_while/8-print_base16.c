#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num = 48;
	char alphabet = 97;
	/* Loop through ASCII values for digits 0 to 9 */
	for (; num <= 57; num++)
		putchar(num);
	/* Loop through ASCII values for chars a to f */
	for (; alphabet <= 102; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
