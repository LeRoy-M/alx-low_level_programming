#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry Point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n[-1] > 5)
	{
		printf("Last digit of %d is %c and is greater than 5\n", n);
	} else if (n[-1] == 0)
	{
		printf("Last digit of %d is %c and is 0\n", n);
	} else if (n[-1] < 6 && n[-1] != 0)
	{
		printf("Last digit of %d is %c and is less than 6 and not 0\n", n);
	}
	return (0);
}
