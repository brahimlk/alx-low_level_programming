#include "main.h"
/**
 *
 * times_table - function that prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
	{
		int j, i, r;

		for (j = 0; j < 10; j++)
		{
			r = 0;
			for (i = 0; i < 10; i++)
			{
				_putchar(r + '0');
				_putchar(',');
				_putchar(' ');
				r += j;
			}
			_putchar('\n');
		}
	}
