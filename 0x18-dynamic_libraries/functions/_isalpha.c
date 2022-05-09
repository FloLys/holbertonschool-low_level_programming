#include "main.h"

/**
 *_isalpha - checks for alphabetic characters
 * @c: character to be checked
 * Return: 1 True. 0 False
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');

}
