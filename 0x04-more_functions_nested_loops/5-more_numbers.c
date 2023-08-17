#include "main.h"

/**
 * more_numbers - Prints a pattern of numbers using loops and conditions.
 */
void more_numbers(void)
{
int i = 0;
int j = 0;
int counter = 0;
const int x = 1;
int flag = 0;
for (; i < 10; i++)
{
for (; j < 15; j++)
{
if (j > 9 || flag == 1)
{
flag = 1;
counter++;
if (counter == 1)
j = 0;
if (counter == 6)
break;
_putchar(x + '0');
}
_putchar(j + '0');
}
j = 0;
counter = 0;
flag = 0;
_putchar('\n');
}
}
