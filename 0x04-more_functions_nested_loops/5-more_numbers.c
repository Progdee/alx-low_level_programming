#include "main.h"

/**
 * more_numbers(void) - prints 10 times the numbers, from 0 to 14
 * Return: 0
 * @num: numbers from 0 to 14
 * @no: number of times
 */

void more_numbers(void)
{
	int num, no;

	for (no = 0; no <= 9; no++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}	
