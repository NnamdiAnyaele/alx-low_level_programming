#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: int to be checked
 *
 * Return: 1 if digit and 0 if otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
