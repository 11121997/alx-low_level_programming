#include <stdio.h>
/**
*main - Entry point
*@argc: int
*@argv: string array
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
