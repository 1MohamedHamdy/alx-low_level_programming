#include "main.h"

/**
 * _isupper - Checks if a character is digit Betty-style.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
