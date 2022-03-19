#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: Alwayas void
 */
void more_numbers(void)
{
	int n;
	int y;

	for (n = 0; n <= 9; n++)
	{
		y = 0;
		while (y <= 14)
		{
			if (y >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			y++;
		}
	_putchar('\n');
	}
}
