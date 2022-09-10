#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all the alphabet in lowercase
 * in reverse followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c <= 'a')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
