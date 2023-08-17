#include "main.h"

/**
 * @brief 
 * 
 */
void print_line(int n)
{
int i = 0;
if (n <= 0)
goto newline;
for (; i<n; i++)
{
_putchar('_');
}
newline :
_putchar('\n');
}