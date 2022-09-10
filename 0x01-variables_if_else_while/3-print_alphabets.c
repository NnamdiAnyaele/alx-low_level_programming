#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all the alphabet in lowercase followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = "a";

	while (c <= z)
	{
		putchar(c);
		c++;
	}

	putchar("\n");
	return (0);
}
