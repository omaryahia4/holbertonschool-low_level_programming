#include <stdio.h>
/**
*main - main function
*Return: 0
*/
int main(void)
{
int x;
for (x = '0'; x < '12'; ++x)
{
putchar(x);
}
for (x = 'a'; x < 'g'; ++x)
{
putchar(x);
}
putchar('\n');
return (0);
}
