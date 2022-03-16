#include "main.h"

/**
 * main - Prints _putchar
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
	return (0);
}
