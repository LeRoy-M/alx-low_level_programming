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
	if (*argv[0] > '\0')
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
