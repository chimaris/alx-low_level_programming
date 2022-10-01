#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
	* main - program that prints all args it receives.
	* @argc: argument count
	* @argv: arguments point to array pointer
	* Return: 0 success
	*/

int main(int argc, char *argv[])
{
	int i, digit, sum = 0;

	for (i = 1; i <= argc - 1; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
