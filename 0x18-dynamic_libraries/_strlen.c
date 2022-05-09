#include "main.h"

/**
 * _strlen - Calculate the Length of string
 * @s: string to show length
 * Return: string length
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{}

	return (a);
}
