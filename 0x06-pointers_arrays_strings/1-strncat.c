#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: value1
 * @src: value2
 * @n: value3
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (a < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
