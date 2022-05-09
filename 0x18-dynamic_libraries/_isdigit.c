#include "main.h"

/**
 *_isdigit - checks for digits from 0 to 9
 * @c: character to be checked
 * Return: 1 True. 0 False
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
	_putchar('\n');

}
