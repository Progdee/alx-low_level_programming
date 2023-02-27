#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src...
 * @dest: points to 
 * @src: pointed to
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
