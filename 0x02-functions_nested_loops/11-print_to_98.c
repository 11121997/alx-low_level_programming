#include "main.h"

/**
*print_to_98 -  function that prints all natural numbers from n to 98
*@n: a character that take integer number
*@x: a character that print integer number
*/

void print_to_98(int n)
{
int count;
if (n > 98)
for (count = n; count > 98; count--)
printf("%d, ", count);
else 
for (count = n; count < 98; count++)
printf("%d, ", count);
printf("98\n");
}
