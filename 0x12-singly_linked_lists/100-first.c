#include <stdio.h>

void __attribute__((constructor)) maris(void);

/**
 * maris - Prints a string before the main function executed
 */

void maris(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
