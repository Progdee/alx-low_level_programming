#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @n: numbers
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n;
	n = *a;
	*a = *b;
	*b = n;
}
