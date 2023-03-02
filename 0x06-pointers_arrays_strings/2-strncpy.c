#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: number of string bytes
 * Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
