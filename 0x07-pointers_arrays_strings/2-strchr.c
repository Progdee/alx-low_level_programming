#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int ln = 0;

	while  (s[ln] >= '\0')
	{
		ln++;

		if (s[ln] == c)

			return (s + ln);
	}
	return ('\0');
}
