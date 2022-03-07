#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all combinations of two digits
 *
 * Return: (0) success
 */
int main(void)
{
	int n1, n2, x = 0;

	for (n1 = 0; n1 <= 9; n1++)
	{	
		for (n2 = 0; n2 <= 9; n2++)
		{
			if (n2 > n1)
			{
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
				}
			}
		}
	}
	return (0);
}
