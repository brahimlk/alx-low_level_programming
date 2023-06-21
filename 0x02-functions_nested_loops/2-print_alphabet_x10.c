#include "main.h"
/**
 * print_alphabet - alphabet in lowercase 10x times
 *
 * Description: function that prints the alphabet 10x times, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
	{
		int j, i;

		for (j = 0; j < 10; j++)
		{
			for (i = 97; i <= 122; i++)
				_putchar(i);
			_putchar('\n');
		}
	}
