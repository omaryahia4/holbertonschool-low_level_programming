#include "holberton.h"
/**
* print_triangle - print triangle
*@size:integer.
* Return;
*/
void print_triangle(int size)
{
int i, j, k;

if (size > 0)
{
i = 0;
while (i < size)
{
j = 0;
while (j < size - i - 1)
{
_putchar(' ');
j++;
}
k = size - i - 1;
while (k <= size)
{
if (k != size)
_putchar('#');
else
_putchar('\n');
k++;
}
i++;
}
}
else
{
_putchar('\n');
}
}
