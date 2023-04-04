#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", c->n);
		count += 1;
		c = cursor->next;
	}
	return (c);
}
