#include "3-calc.h"

/**
 * main - Entry point for the calculator program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 if successful, 98 for incorrect number of arguments, 99 for
 * invalid operator, or 100 for division/modulo by zero.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	op_func_ptr operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(num1, num2));
	return (0);
}
