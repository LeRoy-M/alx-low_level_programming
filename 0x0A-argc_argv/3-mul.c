#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Takes in two parameters
 *
 * @argc: First parameter passed
 * @argv: Second parameter passed
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	double mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] + 0) != *argv[i])
			{
				printf("Error\n");
				return (0);
			}
			else
			{
				mul *= atoi(argv[i]);
			}
		}
		printf("%.0f\n", mul);
	}

	return (0);
}
