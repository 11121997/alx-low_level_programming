#include "function_pointers.h"
/**
*print_name - function that print name
*@name: string
*@f: printing function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
