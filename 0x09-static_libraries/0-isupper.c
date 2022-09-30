#include "main.h"
#include <ctype.h>

/**
 * _isupper - check the code.
 * @c: character to check
 * Return: 0 if is not uppercase while 1 if is uppercase letter.
 */

int _isupper(int c)
{
	/** you can also use isupper() function */
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
