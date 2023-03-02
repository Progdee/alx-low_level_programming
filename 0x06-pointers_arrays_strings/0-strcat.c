#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: a string
 * @src: a string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
		b++;
	}

	while (*(src + a) != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
