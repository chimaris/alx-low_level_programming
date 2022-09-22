#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array to reverse
 * @n: number of elements in array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
