#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n;

	while (n <= 10)
	{
		char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
	return (0);
}
