#include"main.h"

/**
 * print_number - function to print the exact number
 * @n: n of type int
 */

void print_number(int n)
{
	unsigned int digit = n;

	if (n < 0)
	{
		putchar('-');
		digit = -digit;
	}

	if ((digit / 10) > 0)
		print_number(digit / 10);

	putchar((digit % 10) + '0');
}
