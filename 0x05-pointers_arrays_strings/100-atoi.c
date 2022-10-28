#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: Holds te addr
 * Return: res(responce)
 */
int _atoi(char *s)
{
	int c;
	int res = 0;
	int sig = -1;
	int brk = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '-')
			sig = sig * -1;
		if (s[c] >= '0' && s[c] <= '9')
		{
			res = res * 10;
			res = res - (s[c] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res = sig * res;
	return (res);
}
