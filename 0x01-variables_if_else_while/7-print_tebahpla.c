#include <stdio.h>
/**
*main - printing alphabet backwards
*Return: 0 in success
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x--)
putchar(x);
putchar('\n');
return (0);
}
