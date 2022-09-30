#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string to check
 * Return: Always 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count += 1;
	return (count);
}
