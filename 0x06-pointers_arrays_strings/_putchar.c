#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes @c to stdout
 * @c: character to prints
 * Return: On success 1 while -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
