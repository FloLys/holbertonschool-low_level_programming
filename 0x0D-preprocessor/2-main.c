#include <stdio.h>

/**
 * main - print name of its own file
 * Return: 0
*/
int main(void)
{
	printf(__BASE_FILE__);
	putchar('\n');
	return (0);
}
