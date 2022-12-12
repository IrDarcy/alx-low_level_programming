#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char y;
int x;
for (x = 0; x < 10; x++)
	putchar((x % 10) + '0');
for (y = 'a'; y <= 'f'; y++)
	putchar(y);
putchar('\n');

return (0);
}
