#include "main.h"

/**
*_islower -  function that checks for lowercase character
*@c: the character to be checked
*
*Return: return 1 if c is lowercase or returns 0 otherwise
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
