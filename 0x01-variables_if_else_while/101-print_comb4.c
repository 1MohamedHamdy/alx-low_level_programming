#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all possible different combinations
 * of three digits in increasing order, separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j;
	int k;
	/* Loop through the first digit */
	for (; i <= 55; i++)
	{
		/* Loop through the second digit */
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
