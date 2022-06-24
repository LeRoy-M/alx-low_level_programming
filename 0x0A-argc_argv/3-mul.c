#include <stdlib.h>
#include <stdio.h>

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
	float mul = 1;

	if (argc == 1)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%.0f\n", mul);
	}

	return (0);
}
