#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all combinations of single digit numbers
 * in ascending order followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 48;
	int d = 48;

	while (c < 58)
	{
		while (d < 58)
		{
			if (c != d && c < d)
			{
				putchar(c);
				putchar(d);

				if (!(c == 56 && d == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		c++;
	}

	putchar('\n');
	return (0);
}
