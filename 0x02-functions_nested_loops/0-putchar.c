#include "main.h"

/**
* main - Enrty Point
*
* Return: Always 0 (Sucess)
*/

int main(void)
{
	char sentence[] = "_putchar";
	int letter;
	
	for (letter = 0; letter < 8; letter++)
	{
		_putchar(sentence[letter]);
	}
	_putchar('\n');

	return (0);
}
