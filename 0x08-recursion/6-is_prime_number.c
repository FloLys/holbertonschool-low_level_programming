#include "main.h"

/**
 * is_prime_number - find prime numbers
 * @n: number
 * Return: 1 for yes, 0 for no
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else
		return (prime(2, n));
}

/**
 * prime - calculates prime numbers iterating through ints
 * @n: input number
 * @x: divisor of n
 * Return: 1 for yes, 0 for no
*/
int prime(int n, int x)
{
	if (n % x == 0)
		return (0);

	else if (x >= n / 2)
		return (1);

	else if (n % x != 0)
		return (prime(x + 1, n));

	else
		return (-1);
}
