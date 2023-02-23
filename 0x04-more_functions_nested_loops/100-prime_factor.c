#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 */

int main(void)
{
	long prime = 612852475143, half;

	while (half < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (half = 3; half < (prime / 2); half += 2)
		{
			if ((prime % half) == 0)
				prime /= half;
		}
	}
	printf("%1d\n", prime);

	return (0);
}
