#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all possible different combinations
 * of two digits in increasing order, separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j;
	/* Loop through the first digit */
	for (; i <= 56; i++)
	{
		/* Loop through the second digit */
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
