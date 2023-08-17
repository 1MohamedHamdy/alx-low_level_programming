#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int num = 612852475143UL;
unsigned long int divisor = 2;
while (num > 1)
{
if (num % divisor == 0)
{
num /= divisor;
}
else
{
divisor++;
}
}
printf("%lu g\n", divisor);
return (0);
}
