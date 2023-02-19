#include <stdio.h>
/**
 * main - prints number of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char al;

	for (num - 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (al = 'a'; al <= 'f'; al++)
		putchar(al);

	putchar('\n');

	return (0);
}
