#include "main.h"

/**
 * print_alphabet- this function is to print
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char f = 'a';

	while (f <= 'z')
	{
		_putchar(f);
		f++;
	}
	_putchar('\n');
}
