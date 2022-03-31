#include "main.h"

/**
 * int _strlen_recursion(char *s)- size
 * @s: pointer to string params
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
