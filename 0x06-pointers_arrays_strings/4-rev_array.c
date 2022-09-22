#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array to reverse
 * @n: number of elements in array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i == 0)
			continue;
		printf(", ");
	}
	printf("\n");
}
