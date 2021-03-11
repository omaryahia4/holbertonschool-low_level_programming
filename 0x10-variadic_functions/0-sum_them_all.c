#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - adding all parameters
*@n: unsigned int
*Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i, sum;

	va_start(par, n);
	if (n == 0)
	{
	return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(par, int);
	va_end(par);
	return (sum);
}
