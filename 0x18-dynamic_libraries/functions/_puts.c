#include "main.h"

/**
 * _puts - print a string to standard output
 * @s: string to print to output
 */
void _puts(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		_putchar(s[a]);

	_putchar('\n');
}
