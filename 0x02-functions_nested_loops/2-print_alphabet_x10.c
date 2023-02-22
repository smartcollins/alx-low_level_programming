#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n;
	
	for (n = 1; n <= 10; n++)
	{
		char a;
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
}
