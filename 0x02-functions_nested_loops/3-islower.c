#include "main.h"

/**
 * _islower - checks to see if a character is lowercase or uppercase
 * and return 1 or 0 respectively
 * @c:contains the character to be checked.
 * Return: 0 or 1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
