#include "main.h"

/**
 * leet - Converts certain characters to their "leet" equivalents.
 * @s: The input string to be converted.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
	int i = 0, j = 0, strlen = 0;

	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}
	for (; j < strlen; j++)
	{
		if (s[j] == 'a' || s[j] == 'A')
			s[j] = '4';
		else if (s[j] == 'e' || s[j] == 'E')
			s[j] = '3';
		else if (s[j] == 'o' || s[j] == 'O')
			s[j] = '0';
		else if (s[j] == 't' || s[j] == 'T')
			s[j] = '7';
		else if (s[j] == 'l' || s[j] == 'L')
			s[j] = '1';
	}
	return (s);
}
