#include "main.h"
#include <stdio.h>

/**
 * more_numbers -print numbers from 0 to 14, ten times
 *
 * This function prints the numbers from 0 to 14 in a sequence, repeating it
 * ten times. Each number is printed individually, and a newline character is
 * printed after each sequence of numbers. The function uses nested loops to
 * control the repetition and ranges of numbers.
 */

void more_number(void)
{
	int i, j;


	for (i = 0; i < 10; i++)
	{

		for (j = 0; j <= 14; j++)
		{

			if (j > 9)
			{

				putchar((j / 10) + '0');
			}

			putchar((j % 10) + '0');
		}
		putchar('\n');
	}
}
