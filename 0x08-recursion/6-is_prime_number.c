#include "main.h"

/**
 * is_divisible - check if number is divisible
 * @num: param 1
 * @div: param 2
 * Return: int
 */

int is_divisible(int num, int div)
{
	if (num == div)
		return (0);
	if (num % div == 0)
		return (1);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: param 1
 * Return: if the integer is not prime - 0 : 1
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (is_divisible(n, 2))
		return (0);
	return (1);
}

