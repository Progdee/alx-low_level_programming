#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the characterr \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('\');
	}

	_putchcar('\n');
}
