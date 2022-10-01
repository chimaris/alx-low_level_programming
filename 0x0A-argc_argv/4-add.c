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
	int i, sum, exit;

	sum = 0;
	exit = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (exit);
	}

	for (i = 1; i <= argc - 1; i++)
	{
		if (isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			exit = 1;
			printf("Error\n");
			break;
		}
	}
	if (exit == 0)
	{
		printf("%d\n", sum);
	}
	return (exit);
}
