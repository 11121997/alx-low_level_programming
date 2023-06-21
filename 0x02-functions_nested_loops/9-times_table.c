#include "main.h"

/**
*times_table - function that prints the 9 times table
*/

void times_table(void)
{
int x, y, z;
for (x = 0; x <= 9; x++)
{
_putchar(0 + '0');
_putchar(',');
for (y = 0; y <= 9; y++)
{
_putchar(y + '0');
_putchar(',');
z = x * y;
if (z <= 9)
{
_putchar(',');
_putchar(' ');
}
else
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
_putchar('\n');
}
}
}
