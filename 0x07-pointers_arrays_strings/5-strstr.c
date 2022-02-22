#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack Null bytes are not compared
 * @haystack: string to test
 * @needle: substring to compare to
 * Return: pointer to located substring or null
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0' || *haystack == '\0')
		return ('\0');

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 1; ; j++)
			{
				if (*(needle + j) == '\0')
					return (haystack + i);

				else if (*(haystack + i + j) == *(needle + j))
					continue;

				else
					break;
			}
		}
	}
	return ('\0');
}
