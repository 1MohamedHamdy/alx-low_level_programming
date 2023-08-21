#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the input string.
 */
void puts_half(char *str)
{
	int i, j = 0, length, strlen = 0;

	while (str[j] != '\0')
	{
		strlen++;
		j++;
	}
	length = strlen / 2;
	for (i = length; i < strlen; i++)
		_putchar(str[i]);
	_putchar('\n');
}
