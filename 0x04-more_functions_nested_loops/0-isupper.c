#include "main.h"

/**
 * _isupper - checks a character to see if it is uppercase
 *
 * @c: the charcter to check
 *
 * Return: 1 if uppercase and 0 if not
 *
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
