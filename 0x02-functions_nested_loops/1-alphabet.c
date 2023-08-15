#include"main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * followed by a new line. It uses the _putchar function to print characters.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
