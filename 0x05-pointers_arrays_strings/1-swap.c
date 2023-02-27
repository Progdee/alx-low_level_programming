#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @n: numbers
 * @a: number
 * @b: number
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
