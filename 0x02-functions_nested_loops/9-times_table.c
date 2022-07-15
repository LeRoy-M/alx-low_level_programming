#include "main.h"

/**
 * times_table - Prints the 9 times table from 0
 *
 * Return; void
 */

void times_table(void)
{
	unsigned int i, j, tt;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			tt = i * j;
			if (j == 0)
			{
				_putchar(tt + '0');
			}
			else if (tt > 9)
			{
				_putchar(' ');
				_putchar((tt / 10) + '0');
				_putchar((tt % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(tt + '0');
			}

			if (j != 9)
			{
				_putchar(',');
			}		
		}
		_putchar('\n');
	}
}
