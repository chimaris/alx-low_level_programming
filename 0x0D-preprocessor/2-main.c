#include <stdio.h>

/**
 * main - Print the name of the file it was compliled from
 * Return: Always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}