#include <stdio.h>
#define MIN_NUM 1
#define MAX_NUM 100

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = MIN_NUM; i <= MAX_NUM; i++)
{
if (i % 3 == 0)
{
if (i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("Fizz");
}
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
printf(" ");
}
printf("\n");
return (0);
}
