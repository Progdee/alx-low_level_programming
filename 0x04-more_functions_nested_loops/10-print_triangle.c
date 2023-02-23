#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int n, index;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (index = size - n; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < n; index++)
				_putchar('#');

			if (n == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
