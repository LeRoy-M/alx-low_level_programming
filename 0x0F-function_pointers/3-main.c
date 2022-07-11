#include <ctype.h>
#include "3-calc.h"

/**
 * main - Entry Point
 *
 * @argc: Argument Count
 * @argv: Argument Array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	op_t operator[] = {'+', '-', '*', '/', '%'};

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (*argv[2] != operator[0] && *argv[2] != operator[1] && *argv[2] != operator[2] && *argv[2] != operator[3] && *argv[2] != operator[4])
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(*argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
