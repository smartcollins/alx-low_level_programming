#include <stdio.h>
/**
 * main - prints lowercase alpa in reverse
 * Return: Always 0
 */
int main(void)
{
	int al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);
	putchar('\n');

	return (0);
}
