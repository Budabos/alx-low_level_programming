#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _isdigit - checks if is a number or not
 * @n: holds argment
 * Return: 1, if its a number, else 0
 */
int _isdigit(char *n);
int _isdigit(char *n)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(n);
	while (i < len)
	{
		if (n[i] < '0' || n[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (n[i] - '0');
		i++;
	}
	return (num);
}
/**
 *  main - add positive numbers
 *  @argc: argnt count
 *  @argv: array of  a arguements
 *  Return: result of addition or 1
 */
int main(int argc, char *argv[])
{
	int i, num, sum;

sum = 0;
for (i = 1; i < argc; i++)
{
	num = _isdigit(argv[i]);
	if (num == -1)
	{
		printf("Error\n");
		return (1);
	}
	sum += num;
}
printf("%d\n", sum);
return (0);
}
