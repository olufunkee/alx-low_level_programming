#include "main.h"

/**
 * _islower - to print 1 if lowercase
 *
 * @c - the parameter used
 *
 * Return: value int
 */
int _islower(int c)
{
int c;
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
