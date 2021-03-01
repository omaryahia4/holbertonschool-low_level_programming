#include <stdio.h>
#include <stdlib.h>
/**
*main - print number of arguments
*@argc:integer
*@argv:string
*Return:0
*/
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
