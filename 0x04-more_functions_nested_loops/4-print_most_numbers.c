#include "main.h"
/**
 * print_most_numbers - prints digits from 0 - 9 aside 2 and 4
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50)
		{
			if (i != 52)
			{
				_putchar(i);
			}
		}
	}
	_putchar('\n');
}
