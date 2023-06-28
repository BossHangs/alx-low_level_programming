#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - Prints numbers from '0' to '9', excluding '2' and '4'
 *
 *This function prints the numbers from '0' to '9', excluding '2' and '4',
 *using the putchar function. Each character is printed individually, and
 *a newline character is printed at the end.
 *Return:void
 */

void print_most_numbers(void)

{
	char c;

	for (c = '0' ; c <= '9'; c++)
	{
		if (c != '2' &&  c != '4')
			putchar(c);
	}
	putchar('\n');
}
