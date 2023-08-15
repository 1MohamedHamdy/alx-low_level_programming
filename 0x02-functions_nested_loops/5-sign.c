#include"main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater than zero,
 * 0 if n is zero,
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		x = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		x = -1;
	}
	return (x);
}
