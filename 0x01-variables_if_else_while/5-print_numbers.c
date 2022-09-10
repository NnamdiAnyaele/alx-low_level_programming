#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all numbers from 0 to 9 followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
