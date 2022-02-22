#include "main.h"

/**
 * _strspbrk - locates the first occurrence in the string s
 * of any bytes in the string accept
 * @s: string
 * @accept: bytes of s
 * Return: first ocurrence of bytes
*/
char *_strpbrk(char *s, char *accept)
{
	char i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return ((s + i));
			}
		}
	}
	return ((s + i));
}
