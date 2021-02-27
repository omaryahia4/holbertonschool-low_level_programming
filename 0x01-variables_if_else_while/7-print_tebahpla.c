#include <stdio.h>
/**
*main - printing alphabet backwards
*Return: 0 in success
*/
int main(void)
{
for (char x = 'z'; x >= 'a'; --x)
{
putchar(x);
}
putchar('\n');
return (0);
}
