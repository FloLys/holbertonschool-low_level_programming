#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all combinations of three digits
 *
 * Return: (0) success
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 <= 9; n1++)
	{	
		for (n2 = n1 + 1; n2 <= 9; n2++)
		{
			for (n3 = n2 + 1; n3 <= 9; n3++)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);
				putchar(n3 + 48);
				putchar(',');
				putchar(' ');
				/*
				if (x == 0)
				{
					putchar(n1);
					putchar(n2);
					x = 1;
				}

				else
				{
					putchar(',');
					putchar(' ');

					putchar(n1);
					putchar(n2);
				}*/
			}
		}
	}
	return (0);
}
