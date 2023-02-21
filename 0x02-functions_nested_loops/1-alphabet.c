#include "main.h"
/**
 *print_alphabet - prints alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
