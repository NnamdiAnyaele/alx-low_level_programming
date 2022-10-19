#include "main.h"

/**
 * print_alphabet_x10 - printthe alphabet in lowercase 10 times
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	char c;
	int count;

	count = 0;
	while  (count < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		count++
	}
}
