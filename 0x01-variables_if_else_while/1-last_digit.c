#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Determines 
* Return: Always 0
*/ 
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if(x > 5)
{
printf("last digit of %d is %d and is greater than 5\n");
}
if else(x==0)
{
printf(("last digit of %d is %d and is zero\n");
}
else
{
("last digit of %d is %d and is less than 6 and not 0\n");
}
return (0);
}
