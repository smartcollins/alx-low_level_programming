#include "main.h"
/**
 * int - checks for lowercase characterby using ASCII code
 * Return: 1 for lowercase and 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
