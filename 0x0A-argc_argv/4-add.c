#include <stdlib.h>
#include <stdio.h>
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
	float add = 0;

	if (argc == 1)
	{
		printf("%.0f\n", add);
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
				add += atoi(argv[i]);
			}
		}
		printf("%.0f\n", add);
	}

	return (0);
}
