#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @len: length
 * Return: 0
 */

void print_rev(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}

	for (n = (fcounter - 1); n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
