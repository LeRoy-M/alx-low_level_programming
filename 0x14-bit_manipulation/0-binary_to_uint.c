#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: Receives input during function call
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bi_len, conv_t, base10;
	const char *bin;

	if (b == NULL)
		return (0);

	bi_len = 0;
	bin = b;
	while (*bin != '\0')
	{
		bi_len++;
		bin++;
	}

	base10 = 0;
	conv_t = 1;
	for (i = (bi_len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			base10 += conv_t;
		else if (b[i] != '0')
			return (0);

		conv_t *= 2;
	}

	return (base10);
}
