#include "main.h"

/**
*print_to_98 -  function that prints all natural numbers from n to 98
*@n: a character that take integer number
*@x: a character that print integer number
*/

void print_to_98(int n)
{
	int x;
if (n > 98)
{
for (x = n; x > 98; x--)
printf("%d, ", x);
}
else
for (x = n; x < 98; x++)
printf("%d, ", x);

printf("98\n");
}
