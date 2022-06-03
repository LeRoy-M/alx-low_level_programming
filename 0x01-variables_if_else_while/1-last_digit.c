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
	int na[] = {n};
	if (na[-1] > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, na[-1]);
	} else if (na[-1] == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, na[-1]);
	} else if (na[-1] < 6 && na[-1] != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, na[-1]);
	}
	return (0);
}
