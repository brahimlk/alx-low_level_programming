#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: count
 * @argv: vector
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
		printf("0\n");
	else
	{
		if (cents >= 25)
		{
			coins += cents / 25;
			cents %= 25;
		}
		if (cents >= 10)
		{
			coins += cents / 10;
			cents %= 10;
		}
		if (cents >= 5)
		{
			coins += cents / 5;
			cents %= 10;
		}
		if (cents >= 2)
		{
			coins += cents / 2;
			cents %= 2;
		}
		if (cents == 1)
			coins += 1;
		printf("%d\n", coins);
	}
	return (0);
}
