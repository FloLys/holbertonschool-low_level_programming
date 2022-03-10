#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers
* @separator: string to be printed between numbers
* @n: number of integers in function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
		return;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(args, int));

		else
			printf("%d%s", va_arg(args, int), separator);
	}
	putchar('\n');

	va_end(args);
}
