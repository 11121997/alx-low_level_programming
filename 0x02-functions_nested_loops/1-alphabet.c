#include "main.h"

/**
*main-Entry point
*
*Description: A C program to print alphabets wit _putchar functionj
*
*Return: Always 0 (success)
*/
int main(void)
{
void print_alphabet(void);

int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
return (0);
}
