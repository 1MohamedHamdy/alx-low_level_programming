#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program demonstrates the size of various data types
 *              on a computer for different target architectures.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Print the size of char type for specified target architecture */
	printf("Size of a char: %zu byte(s)\n", sizeof(char));

	/* Print the size of int type for specified target architecture */
	printf("Size of an int: %zu byte(s)\n", sizeof(int));

	/* Print the size of long int type for specified target architecture */
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));

	/* Print the size of long long int type for specified target architecture */
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));

	/* Print the size of float type for specified target architecture */
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}

