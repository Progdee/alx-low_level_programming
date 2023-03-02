#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int p;
	int q;
	int rev;

	q = n - 1;

	for (p = 0; p < n / 2; p++)
	{
		tmp = a[p];
		a[p] = a[q];
		a[q--] = rev;
	}
}

