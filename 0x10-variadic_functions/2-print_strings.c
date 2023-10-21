#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator:  string to be printed between strings.
 * @n: number of strings passed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "nil";
		printf("%s", s);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
