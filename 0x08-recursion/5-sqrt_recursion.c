#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of n
*/
int _sqrt_recursion(int n)
{
	return (math(0, n));
}

/**
 * math - calculates square root natural number
 * @n: input number
 * @x: multiplier
 * Return: -1 not found, x natural number
*/
int math(int n, int x)
{
	if (x * x == n)
		return (x);

	else if (x * x > n)
		return (-1);

	else
		return (math(n, x + 1));
}
