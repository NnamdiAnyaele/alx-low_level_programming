#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 * @n: integer whose last digit is printed.
 * Return: 0 to 10
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (n % 10);
		_putchar(last_digit);
		return (last_digit);
	}
}
