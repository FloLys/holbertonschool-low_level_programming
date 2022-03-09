#include "main.h"
#include <stdlib.h>

/**
* print_name - prints a name
* @name: name of person
* @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
