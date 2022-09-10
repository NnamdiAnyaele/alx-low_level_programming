#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all base 16 numbers followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 48;
	char c = 'a';

	while (d < 58)
	{
		putchar(d);
		d++;
	}

	while (c <= 'f')
	{
		putchar(c)
		c++;
	}

	putchar('\n');
	return (0);
}
