#include "main.h"

/**
 * _abs - function to get the absolute value of an integer
 * @n: the integer whose absolute will be returned.
 * Return: Always 0 and above.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
