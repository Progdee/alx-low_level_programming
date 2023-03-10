#include <stdio.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument Vector
 * Return: 1 if the number of arguments is not exactly 1, 0 if the number passed is negative
 *
 */

int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents % 25 < cents)
			{
				cents -= 25;
				coins++;
			}
			else if (cents % 10 < cents)
			{
				cents -= 10;
				coins ++;
			}
			else if (cents % 5 < cents)
			{
				cents -= 5;
				coins++;
			}
			else if (cents % 2 < cents)
			{
				cents -= 2;
				coins ++;
			}
			else if (cents %1 < cents)
			{
				cents -= 1;
				coins ++;
			}
		}
	}
	else
	{
		printf("Error\m");
		return (0);
	}
}
