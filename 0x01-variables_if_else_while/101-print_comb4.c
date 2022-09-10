#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
        int digit1;
        int digit2;
	int digit3;

        for (digit1 = 0; digit1 < 10; digit1++)
        {
                for (digit2 = 0; digit2 < 10; digit2++)
                {
			for(digit3 = 0; digit3 < 10; digit3++)
			{
                                	putchar((digit1 % 10) + '0');
                                	putchar((digit2 % 10) + '0');
					putchar((digit3 % 10) + '0');}
			}
                        putchar(',');
                        putchar(' ');
                }
        }

        putchar('\n');

        return (0);
}
