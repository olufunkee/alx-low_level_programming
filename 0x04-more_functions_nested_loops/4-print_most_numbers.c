#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Print the numbers from 0 to 9
 *
 * Return: Always void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (n == 2 && n ==4)
		{
			continue
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
