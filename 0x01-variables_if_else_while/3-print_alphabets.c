#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
	int alphLower;
	int alphUpper;

	for (alphLower = 'a'; alphLower <= 'z'; alphLower++)
		putchar(alphLower);
	for (alphUpper = 'A'; alphUpper <= 'Z'; alphUpper++)
		putchar(alphUpper);
	putchar('\n');

	return (0);
}
