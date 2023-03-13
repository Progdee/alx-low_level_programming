#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str - string
 * Return: Null if str = NULL
 */

char *_strdup(char *str)
{
	char *new_string;
	unsigned int size, i;
	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	new_string = malloc(sizeof(char) * (size + 1));

	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_string[i] = str[i];
	}
	new_string[size] = '\0';
	return (new_string);
}
