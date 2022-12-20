#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elementsof an array
 *
 * @a: pointer to array
 * @n: number of array elements
 * Return: void
 */
void print_array(int *a, int n)
{
int y;
for (y = 0; y < n; y++)
{
printf("%d", a[y]);
if (y != n - 1)
{
printf(",");
printf(" ");
}
}
printf("\n");
}
