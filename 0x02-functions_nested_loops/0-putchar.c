#include"main.h"

/**
 * main - cleck the code
 *
 * Description: a C program that prints _putchar
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');


	return (0);

}
