#include "main.h"
/**
 * _strlen - checks the length of a string
 * @s: string
 * Return: length
 */
int_strlen(char *s)
{
	int l = 0;

	while (*s != "\0")
	{
		l++;
		s++;
	}
	return (l);
}
