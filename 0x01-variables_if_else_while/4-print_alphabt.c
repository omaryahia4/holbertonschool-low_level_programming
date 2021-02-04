#include <stdio.h>
/**
* main - Alphabet except e and q
* Return: 0 in success
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
if (x != 'e' && x != 'q')
putchar(x);
putchar('\n');
return (0);
}
