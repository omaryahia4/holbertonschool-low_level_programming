#include <stdio.h>
/**
*main - main function
*Return: 0
*/
int main(void)
{
int x;
for (x = '0'; x - 1 < '9'; ++x)
{
putchar(x);
}
for (x = 'a'; x - 1 < 'f'; ++x)
{
putchar(x);
}
putchar('\n');
return (0);
}
