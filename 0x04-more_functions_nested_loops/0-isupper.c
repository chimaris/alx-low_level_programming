#include "main.h"
#include <ctype.h>

/**
 * _isupper - check the code.
 * @c: character to check
 * Return: 0 if is not uppercase while 1 if is uppercase letter.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
