#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer if success, null if fail
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	do {
		i++;
	} while (s1[i - 1]);
	do {
		j++;
	} while (s2[j - 1]);

	str = malloc(sizeof(char) * (i + j - 1));

	if (str == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		str[x] = s1[x];

	for (x = 0; x < j; x++)
		str[i + x - 1] = s2[x];

	return (str);
}
