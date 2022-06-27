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
	int whole;
	int cents;
	int coins;

	if (argc != 2 || !(isdigit(*argv[1])))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		whole = (((atoi(argv[1])) / 25) + (((atoi(argv[1])) % 25) / 10));
		coins = (whole + (((atoi(argv[1])) % 10) / 5) + (((atoi(argv[1])) % 5) / 2));
		cents = (coins + (((atoi(argv[1])) % 2) / 1));

		printf("%d\n", cents);
	}

	return (0);
}
