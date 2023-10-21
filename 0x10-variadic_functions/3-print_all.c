#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed.
 */
void print_all(const char * const format, ...)
{
	format_t conv_spec[] = {
		{"c", "char"},
		{"i", "int"},
		{"f", "float"},
		{"s", "char *"},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (conv_spec[j].flag != NULL)
		{
			if (strcmp(format[i], conv_spec[j].flag) == 0)
			{
				printf(conv_spec[j].flag, va_arg(args, conv_spec[j].type));
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
