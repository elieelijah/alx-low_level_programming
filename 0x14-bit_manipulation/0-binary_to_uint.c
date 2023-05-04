#include "main.h"

/**
 * binary_to_uint - converts a binary number string to an unsigned int
 * @b: pointer to the binary number string
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num <<= 1;
		num += (*b - '0');
	}

	return (num);
}
