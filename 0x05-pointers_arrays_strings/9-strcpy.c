#include "main.h"
/**
 * char *_strcpy - copies string
 * pointed to by src
 * including the terminating null byte
 * to the buffer 
 * pointed to by dest
 * Return: value
 */
char *_stcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
