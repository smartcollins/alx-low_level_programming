#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: value
 * @src: value2
 * @n: value3
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
