#include "main.h"

/**
* binary_to_uint - converts binary number to unsigned int
* @b: pointer to string of 0 and 1 chars
* Return: converted number or 0 if there are other chars apart from 0 and 1
* or if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int exp = 1, sum = 0;

	if (!b)
		return (0);

	/*counter of string*/
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;

	/*sums the 1s in binary with exponent increasing*/
	for (; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += exp;

		exp *= 2;
	}
	return (sum);
}
