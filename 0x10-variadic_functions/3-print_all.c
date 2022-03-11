#include "variadic_functions.h"

/**
* print_all - print everything
* @format: type of arguments passed
*/
void print_all(const char * const format, ...)
{
	va_list ls;
	size_t i = 0;
	int j = 0;
	char *separator = "";

	st array[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_string}
	};

	va_start(ls, format);
	/*
	*j is the iterator of char selector and function of st array[]
	*(array of structures)
	*i is the iterator of the chars in the input string format
	*/
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (array[j].selector != NULL)
		{
			if (*array[j].selector == format[i])
			{
				printf("%s", separator);
				array[j].f(ls);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(ls);
}
/**
* pr_char - print char
* @ls: list
*/
void pr_char(va_list ls)
{
	printf("%c", va_arg(ls, int));
}

/**
* pr_int - print int
* @ls: list
*/
void pr_int(va_list ls)
{
	printf("%d", va_arg(ls, int));
}

/**
* pr_float - print float
* @ls: list
*/
void pr_float(va_list ls)
{
	printf("%f", va_arg(ls, double));
}

/**
* pr_string - print string
* @ls: list
*/
void pr_string(va_list ls)
{
	char *str;

	str = va_arg(ls, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
