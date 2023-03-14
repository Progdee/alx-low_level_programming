#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size_1 = 0, size_2 = 0;
	char *ptr, *ret;

	ptr = s1;
	if (s1)
		while (*ptr++)
			size_1++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*ptr++)
			size_2++;
	else
		s2 = "";

	ret = malloc(size_1 + size_2 + 1);
	if (!ret)
		return (NULL);

	ptr = ret;

	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;
	return (ret);
}
