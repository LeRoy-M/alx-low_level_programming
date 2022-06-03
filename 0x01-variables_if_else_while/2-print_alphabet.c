#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
* main - Entry Point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(tolower(c));
		putchar('\n');
	}
	return (0);
}
