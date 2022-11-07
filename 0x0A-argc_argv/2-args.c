#include <stdio.h>

/**
 * main - prints all argc
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 if success
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[1]);
	}
	return (0);
}
