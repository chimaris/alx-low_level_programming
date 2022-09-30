#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* main - program that multiplies two numbers.
	* @argc: argument count
	* @argv: arguments point to array pointer
	* Return: 1 success
	*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
