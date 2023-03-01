#include "main.h"
/**
 * reverse_array - reverses contents of an array of integers
 * @a: value
 * @n: value2
 */
void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
