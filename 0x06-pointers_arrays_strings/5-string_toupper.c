#include "main.h"
/**
 * string_toupper - changes all lowercase
 * letters os a string to uppercase
 * @z: value
 * Return: z
 */
char *string_toupper(char *z)
{
	int a = 0;

	while (z[a] != '\0')
	{
		if (z[a] >= 'a' && z[a] <= 'z')
			z[a] = z[a] - 32;
		a++;
	}
	return (z);
}
