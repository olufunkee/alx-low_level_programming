#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers betweeen 0 to 14 incl
 *
 * Return: Alwayas void.
 */
void more_numbers(void)
{
	int y;
	int n;

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
