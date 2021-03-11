#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers - print numbers with a separator
* @n: number of elements
* @separator: separate between numbers
* Return: 0
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list par;

	if (n != 0)
	{
		va_start(par, n);
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(par, int));
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("%d", va_arg(par, int));
	}
	printf("\n");
	va_end(par);
}
