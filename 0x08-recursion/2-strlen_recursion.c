#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int length = 1;

	if (*s == '\0')
		return (0);
	return (length + _strlen_recursion(s + length));
}
