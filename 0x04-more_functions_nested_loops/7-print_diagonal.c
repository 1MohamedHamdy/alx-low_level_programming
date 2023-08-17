#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes.
 * @n: The number of backslashes in the diagonal line.
 */
void print_diagonal(int n)
{
int i = 0;
int j = 0;
int counter = -1;
if (n <= 0)
_putchar('\n');
for (; i < n; i++)
{
counter++;
for (; j < i ; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
j = 0;
}
}
