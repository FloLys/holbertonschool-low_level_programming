#include "main.h"

/**
 * _strcmp - compares the two strings s1 and s2.
 * The comparison is done using unsigned characters
 * @s1: destination string
 * @s2: source string
 * Return: 0 = equal. Negative = s1 < s2. Positive = s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s2[a] == s1[a] && s2[a] != '\0'; a++)
	{}

	return (s1[a] - s2[a]);
}
