#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no number is passed, 1 if one of the nu...
 */

int main(int agc, char *argv[])
{
	int sum = 0, count = 1, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != "\0"; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi (argv[count]);
		count ++;
	}
	printf("%d\n", sum);
	return (0);
}	
