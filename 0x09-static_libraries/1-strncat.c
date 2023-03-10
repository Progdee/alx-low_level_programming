#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes
 * @dest: string
 * @src: string
 * @n: number of bytes of src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char  *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
