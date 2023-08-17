#include <stdio.h>
#include <stdbool.h>

/**
 * _sqrt - Calculate the square root of a number using
 * the Newton-Raphson method.
 * @x: The number for which to calculate the square root.
 * Return: The calculated square root.
 */
double _sqrt(double x)
{
float sqrt, tmp;
sqrt = x / 2;
tmp = 0;
while (sqrt != tmp)
{
tmp = sqrt;
sqrt = (x / tmp + tmp) / 2;
}
return (sqrt);
}

/**
 * largest_prime_factor - Find and print the largest prime factor of a number.
 * @n: The number for which to find the largest prime factor.
 */
void largest_prime_factor(long int n)
{
int largest_prime, prmNu;
while (n % 2 == 0)
n = n / 2;
for (prmNu = 3; prmNu <= _sqrt(n); prmNu += 2)
{
while (n % prmNu == 0)
{
n = n / prmNu;
largest_prime = prmNu;
}
}
if (n > 2)
largest_prime = n;
printf("%d\n", largest_prime);
}


/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
largest_prime_factor(612852475143);
return (0);
}
