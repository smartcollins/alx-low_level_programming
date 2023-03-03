#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes string using rot13
 * @a: value
 * Return: a
 */
char *rot13(char *a)
{
	int b, c;

	char value[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 52; c++)
		{
			if (a[b] == value[b])
			{
				a[b] = encode[c];
				break;
			}
		}
	}
	return (a);
}
