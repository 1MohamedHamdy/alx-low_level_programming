#include"main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints "_putchar" followed by a new line
 * and returns 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar\n"
	/* Write the message to stdout using _putchar function */
	int i = 0;

	for (; message[i] != '\0'; i++)
	{
		_putchar(message[i]);
	}
	return (0);
}

