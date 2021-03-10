#include <stdio.h>
#include "function_pointers.h"
/**
* print_name - print name
*@name: pointer
*@f: pointer of function
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
