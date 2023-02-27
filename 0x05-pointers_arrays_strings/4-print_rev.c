#include "main.h"
/**
 * print_rev - prints a sring
 * in reverse
 * followed by a new line
 * @s: expected string
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
