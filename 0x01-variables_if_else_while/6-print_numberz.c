#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

/**
* main - Entry Point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
