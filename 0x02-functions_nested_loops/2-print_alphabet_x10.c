#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int n, ten;

	ten = 0;

	while (ten < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		ten++;
		_putchar('\n');
	}
}
