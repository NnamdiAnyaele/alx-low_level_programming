#include "main.h"

/**
 * print_sign - return 0 if number is 0, return 1 if
 * possitive and -1 if negative.
 * @n: the value to check.
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
