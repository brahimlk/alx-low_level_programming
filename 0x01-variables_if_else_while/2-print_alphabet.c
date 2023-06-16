#include <stdio.h>
/**
 * main - alphabet in lowercase
 *
 * Description: prints alphabet in lowercase using putchar
 *
 * Return: 0
 */
int main(void)
{
	char c[]="abcdefghijklmnopqrstuvwxyz";
	int i=0;

	while (c[i] != '\0')
	{
		putchar("%c", c);
		i++;
	}
	putchar("\n");
	return (0);
}
