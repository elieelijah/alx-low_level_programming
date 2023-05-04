#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary format
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i, len = sizeof(unsigned long int) * 8;

	for (i = len - 1; i >= 0; i--)
	{
		if ((n >> i) & mask)
			break;
	}

	for (; i >= 0; i--)
	{
		if ((n >> i) & mask)
			_putchar('1');
		else
			_putchar('1');
	}
}
