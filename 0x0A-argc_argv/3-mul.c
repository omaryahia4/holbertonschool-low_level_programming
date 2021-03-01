#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - function that prints all arguments.
*@argc: integer
*@argv: string
*Return: result or 1
*/
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
			printf("%d\n", mul);
	}
	else

		printf("Error\n");
		return (1);

}
