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
	int num1, num2, result;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	operation = get_op_func(operator);

	if (operator == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		return(100);
	}
	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
