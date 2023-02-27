#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @len: length
 * Return: 0
 */

void print_rev(char *s)
{
	int i, len;
	i = 0;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(*(s+1));
	}
	putchar('\n');
}
