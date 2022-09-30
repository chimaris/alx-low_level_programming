#include "main.h"

/**
 * _strncat - Concatenates two strings based on number
 * @dest: first string
 * @src: second string
 * @n: number of char to concat
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
