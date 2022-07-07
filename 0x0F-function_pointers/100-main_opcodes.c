#include <stdio.h>

/**
 * main - Entry Point
 *
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: Always 0 (Success)
 */

int main(int argc,char *argv[])
{
	int i, args;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	args = atoi(argv[1]);

	if (args < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < args; i++)
	{
		printf("%.2hhx", ((char *)(main + i)));
		if (i < args - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
