#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies value from src to dest
 * @dest: Holds address of a var
 * @src: Holds the address
 * Return: a copy of src
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
