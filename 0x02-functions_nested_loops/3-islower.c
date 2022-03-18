#include "main.h"
/**
 * _islower- print 1 if lowercase
 *
 * @c: is the parameter used
 *
 * Return: value int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
