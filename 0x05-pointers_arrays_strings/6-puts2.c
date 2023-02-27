#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: value
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;
	int c;
	char *d = str;

	while (*d != '\0')
	{
		d++;
		a++;
	}
	b = a - 1;
	for (c = 0; c <= b; c++)
	{
		if (c % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
