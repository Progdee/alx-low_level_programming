#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes allocated
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int strl1, strl2, concat_str, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (strl1 = 0; s1[strl1] != '\0'; strl1++);

	for (strl2 = 0; s2[strl2] != '\0'; strl2++);

	if (n > strl2)
		n = strl2;

	concat_str = strl1 + n;

	ptr = malloc(concat_str + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < concat_str; i++)
		if (i < strl1)
			ptr[i] = strl[i];
		else
			ptr[i] = strl2[i - strl1];

	ptr[i] = '\0';
	return (ptr);
}
