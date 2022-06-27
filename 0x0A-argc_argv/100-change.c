#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Takes in two parameters
 *
 * @argc: First parameter passed
 * @argv: Second parameter passed
 *
 * Return: Always int
 */

int main(int argc, char *argv[])
{
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		coins = (((atoi(argv[1])) / 25) + (((atoi(argv[1])) % 25) / 10) + (((atoi(argv[1])) % 10) / 5) + (((atoi(argv[1])) % 5) / 2) + (((atoi(argv[1])) % 2) / 1));
		printf("%d\n", coins);
	}

	return (0);
}
