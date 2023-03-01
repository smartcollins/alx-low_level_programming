#include "main.h"
/**
 * cap_string - capitalizes all words
 * @z: value
 * Return: z
 */
char *cap_string(char *z)
{
	int a = 0;

	while (z[a])
	{
		while (!(z[a] >= 'a' && z[a] <= 'z'))
			a++;
		if ((z[a - 1] == ' ') ||
		    (z[a - 1] == '"') ||
		    (z[a - 1] == '\t') ||
		    (z[a - 1] == '\n') ||
		    (z[a - 1] == ',') ||
		    (z[a - 1] == '.') ||
		    (z[a - 1] == '{') ||
		    (z[a - 1] == '}') ||
		    (z[a - 1] == '(') ||
		    (z[a - 1] == ')') ||
		    (z[a - 1] == '?') ||
		    (z[a - 1] == '!') ||
		    (z[a - 1] == ';') ||  a == 0)
		{
			z[a] -= 32;
		}
		a++;
	}
	return (z);
}
