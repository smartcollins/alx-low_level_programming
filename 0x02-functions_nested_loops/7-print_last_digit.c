#include "main.h"
/**
 * print_last_digit - prints last digits of a number
 * @n: value
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-1 + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

