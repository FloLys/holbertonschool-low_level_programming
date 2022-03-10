#include "variadic_functions.h"

/**
* print_strings - print strings
* @separator: string to be printed between numbers
* @n: number of strings in function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
			printf("(nil)");

		else
			printf("%s", s);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(args);
}
