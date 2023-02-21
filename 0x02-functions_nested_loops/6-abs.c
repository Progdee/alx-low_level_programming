#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @abs: integer value
 * Return: 0
 */
int _abs(int abs)
{
	return (abs * ((abs > 0) - (abs < 0)));
}
