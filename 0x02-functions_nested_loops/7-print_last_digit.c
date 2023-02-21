#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @ld: number
 * Return: the last digit
 */

int print_last_digit(int ld)
{
	int ld;

	ld = (ld % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}
