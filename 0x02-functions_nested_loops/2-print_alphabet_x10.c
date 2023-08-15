#include"main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 * ten times followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int alphabet_count = 0;
	int i = 0;

	while (alphabet_count < 10)
	{
		for (; i < 26; i++)
		{
			_putchar(letter + i);
		}
		_putchar('\n');
		alphabet_count++;
		i = 0;
	}
}
