#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string
 * @c: char in the string
 * Return: *p for first occurrence of char c, \0 if not found
*/
char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s = (s + i);
			return (s);
		}

	}

	if (s[i] == c)
	{
		s = (s + i);
		return (s);
	}
	return ('\0');
}
