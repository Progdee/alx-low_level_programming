#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src...
 * @dest: points to
 * @src: pointed to
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return ('\n');
}
