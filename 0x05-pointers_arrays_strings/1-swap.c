#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integer one
 * @b: integer two
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
