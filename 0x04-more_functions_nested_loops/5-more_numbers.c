#include "main.h"
/**
 * more_numbers - prints digits from 0 - 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
