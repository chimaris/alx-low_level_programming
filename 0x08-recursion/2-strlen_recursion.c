#include "main.h"

/**
 * _strlen_recursion - prints a string in reverse
 * @s: param 1
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
