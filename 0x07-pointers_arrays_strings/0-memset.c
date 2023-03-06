#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @n: number
 * @b: constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);
{
	char *s b;
	unsigned int n;
	unsigned int ln;

	char *memory = m, byte = b;

	for (ln = 0; ln < n; ln++)
		memory[ln] = byte;

	return (memory);
}
