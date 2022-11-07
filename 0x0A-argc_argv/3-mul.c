#include <stdio.h>
#include <stdlib.h>

/**
 * main - enter point
 * @argc: number of args
 * @argv: holds args
 * Return 1 for no arg
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int re;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		re = a * b;
		printf("%d\n", re);
	}
	return (0);
}
