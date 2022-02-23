#include "main.h"

/**
 * _puts_recursion - print a string with new line
 * @s: string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
