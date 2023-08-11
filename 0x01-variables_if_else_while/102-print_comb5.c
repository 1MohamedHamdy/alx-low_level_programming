#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers in the specified format.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_number = 0;
	int second_number = 0;

	while (first_number < 100)
	{
		second_number = first_number + 1;
		while (second_number < 100)
		{
			putchar((first_number / 10) + '0');
			putchar((first_number % 10) + '0');
			putchar(' ');
			putchar((second_number / 10) + '0');
			putchar((second_number % 10) + '0');
			if (first_number < 98)
			{
				putchar(',');
				putchar(' ');
			}
			second_number++;
		}
		first_number++;
	}
	putchar('\n');
	return (0);
}






