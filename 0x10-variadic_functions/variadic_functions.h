#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print_selector - selector char and function pointer
 * @selector: identifier of format function
 * @f: The function associated
 */
typedef struct print_selector
{
char *selector;
void (*f)(va_list ls);
} st;

void pr_char(va_list ls);
void pr_int(va_list ls);
void pr_float(va_list ls);
void pr_string(va_list ls);

#endif
