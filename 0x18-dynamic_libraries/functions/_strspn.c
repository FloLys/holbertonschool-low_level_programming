#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: bytes of s
 * Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cn = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				cn++;
				break;
			}
		}

	if (accept[j] == '\0')
		return (cn);
	}
	return (cn);
}
