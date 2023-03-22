#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a string
 * @f: pointer to a fuction
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
