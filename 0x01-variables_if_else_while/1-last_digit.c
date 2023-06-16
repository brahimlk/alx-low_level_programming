#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints last digit of n
 *
 * Description: print last digit of number, compare it
 * to 5, 0 and if it is less than 6
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else if (m < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	else
		printf("Last digit of %d is %d and is greater than 5", n, m);
	return (0);
}
