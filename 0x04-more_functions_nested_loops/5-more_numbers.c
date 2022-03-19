#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print ten times the number from 0 to 14
 *
 * Return: Always void
 */
void more_numbers(void);
{
	int y;
	int x;

	for (x = 0; x < 10; x++}
	{
		y = 0;
		while (y <= 14)
		{
			if (y >= 10)
			{
				_putchar(y / 10 + '0');
			}
				_putchar(y % 10 + '0');
			y++;
		}
	_putchar('\n');
	}
}
