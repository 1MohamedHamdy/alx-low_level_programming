#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints a quote using the write function
 *              ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: Always 1 (Failure, not the usual 0 for success)
 */

int main(void)
{
	char quote[] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19\n";

	/* Get the Length of char array */
	unsigned int length = strlen(quote);

	/* Write the quote to the standard output */
	write(1, quote, length);

	/* Indicate failure by returning 1 */
	return (1);
}

