#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root of n
*/
int _sqrt_recursion(int n)
{
	return (math(n, 0));
}

/**
 * math - calculates square root natural number
 * @n: input number
 * @x: multiplier
 * Return: -1 not found, x natural number
*/
int math(int n, int x)
{
	if (x * x < n)
		return (math(n, x + 1));

	else if (x * x == n)
		return (x);

	else
		return (-1);
}
