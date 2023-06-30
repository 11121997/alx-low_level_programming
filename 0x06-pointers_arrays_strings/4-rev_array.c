#include "main.h"
/**
*reverse_array - function that reverses the content of an array
*@a: array
*@n: number of elements
*/

void reverse_array(int *a, int n)
{
	int i, k, t;

	for (i = 0; i < k; i++)
	{
		for (k = (n - 1); i = k; k--)
		{
		t = a[i];
		a[i] = a[k];
		a[k] = t;
		}
	}
}
