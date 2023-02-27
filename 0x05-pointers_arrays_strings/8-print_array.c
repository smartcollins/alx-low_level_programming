#include "main.h"
/**
 * print_array - prints n elements of an array
 * followed by a new line
 * @a: name of array
 * @n: expected number
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < (n - 1); z++)
	{
		printf("%d, ", a[z]);
	}
	if (z == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
