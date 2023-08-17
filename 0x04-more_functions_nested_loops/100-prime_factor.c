#include <stdio.h>
#include <stdbool.h>

/**
 * is_prime - Checks if a number is prime.
 * @n: The number to check for primality.
 * Return: Returns true if the number is prime, false otherwise.
 */
bool is_prime(unsigned long int n)
{
unsigned long int i;
if (n <= 1)
{
return (false);
}
for (i = 2; i * i <= n; i++)
{
if (n % i == 0)
{
return (false);
}
}
return (true);
}

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 * Return: The largest prime factor.
 */
unsigned long int largest_prime_factor(unsigned long int n)
{
unsigned long int largest_prime = 0;
unsigned long int j;
for (j = 2; j * j <= n; j++)
{
if (n % j == 0 && is_prime(j))
{
largest_prime = j;
}
}

return (largest_prime);
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int n = 612852475143;
unsigned long int largest_prime = largest_prime_factor(n);
printf("%lu\n", largest_prime);
return (0);
}
