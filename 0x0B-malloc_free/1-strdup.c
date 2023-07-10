#include "main.h"
#include <stdlib.h>
/**
**_strdup - function that returns
*a pointer to a newly allocated space in memory
*@str: string array
*Return: ptr
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			ptr[i] = str[i];
	}
	return (ptr);
}
