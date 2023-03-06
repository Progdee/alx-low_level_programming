#include "main.h"

/**
 * *_memcpy - copies memory
 * @*dest: memory area
 * @*src: memory area
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ln;

	char *destination = dest;

	char *source = src;

	for (ln = 0; ln < n; ln++)
	{
		destination[ln] = source[ln];
	}
	return (dest);
}
