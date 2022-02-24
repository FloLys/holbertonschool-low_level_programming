#include "main.h"

/**
 * is_prime_number - find prime numbers
 * @n: number
 * Return: 1 for yes, 0 for no
*/
int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - calculates prime numbers iterating through ints
 * @n: input number
 * @x: divisor of n
 * Return: 1 for yes, 0 for no
*/
int prime(int n, int x)
{
	if (n <= 1)
		return (0);

	else if (x == n)
		return (1);

	else
	{
		if (n % x == 0 && x != 1 && x != n)
			return (0);
	}

	return (prime(n, x + 1));
	return (0);
}
