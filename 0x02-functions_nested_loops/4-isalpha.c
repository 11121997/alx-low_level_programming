include "main.h"

/**
* _isalpha - function that checks for alphabetic character
*@c: the character to be checked
*
*Return: return 1 if c is a letter, lowercase or uppercase
*or returns 0 otherwise
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
}
