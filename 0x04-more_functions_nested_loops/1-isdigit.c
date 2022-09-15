#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check the code.
 * @c: character to check
 * Return: 0 if is not digit while 1 if is digit.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
