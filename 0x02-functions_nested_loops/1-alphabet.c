#include"main.h"

 /**
  * main - check the code
  *
  * Description: a C program that prints the alphabet in lowecase.
  *
  */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
