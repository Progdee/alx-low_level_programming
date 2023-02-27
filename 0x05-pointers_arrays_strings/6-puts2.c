#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * return: 0
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			putchar(str[i]);
		else
			continue;
	}
	putchar('\n');
}
