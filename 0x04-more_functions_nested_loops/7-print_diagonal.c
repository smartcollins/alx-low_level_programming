#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: value
 * Return: Always 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (i = 0; i < n; i++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == a)
				{
					_putchar('\\');
				}
				else if (b < a)
				{
					_putchar('');
				}
			}
			_putchar('\n');
		}
	}
}
