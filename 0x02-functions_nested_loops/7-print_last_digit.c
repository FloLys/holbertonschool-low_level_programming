#include "main.h"

/**
 *print_last_digit - computes the absolute value of an integer
 * @n: num to check
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');
	_putchar('\n');

	return (a);
}
