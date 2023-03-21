#include"main.h"

 /**
  * main - check the code
  *
  * Description: a C program that prints the alphabet in lowecase.
  *
  * Return: Always 0.
  */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
