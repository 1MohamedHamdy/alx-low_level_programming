#include "main.h"

/**
 * print_line - Prints a line of underscores.
 * @n: The number of underscores to print.
 */
void print_line(int n)
{
int i = 0;
if (n <= 0)
goto newline;
for (; i < n; i++)
{
_putchar('_');
}
newline:
_putchar('\n');
}
