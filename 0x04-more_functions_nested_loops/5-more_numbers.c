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
		for (y = 0; y < 15; y++)
		{
			_putchar(y + '0');
		}	
		_putchar('\n');
	}
}
