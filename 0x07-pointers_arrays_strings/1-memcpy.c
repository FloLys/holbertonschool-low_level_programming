#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: target memory
 * @src: source memory
 * @n: number of bytes to copy
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src;

	return (dest);

}
