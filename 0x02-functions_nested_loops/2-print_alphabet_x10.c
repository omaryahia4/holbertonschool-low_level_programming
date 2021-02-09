#include "holberton.h"
/**
*print_alphabet_x10 - print alphabet in 10 lines.
*@c : input character
*/
void print_alphabet_x10(void)
{
int i, c;
for (i = 0; i <= 9; i++)
{
for (c = 97; c <= 122; c++)
{
_putchar(c);
}
_putchar('\n');
}
return (0);
}
