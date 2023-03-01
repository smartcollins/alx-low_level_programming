#include "main.h"
/**
 * leet - encodes a strig into 1337
 * @a: value
 * Return: a
 */
char *leet(char *a)
{
	int b, c;
	char d1[] = "aAeEoOTtlL";
	char d2[] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (a[b] == d1[c])
				a[b] = d2[c];
		}
	}
	return (a);
}
