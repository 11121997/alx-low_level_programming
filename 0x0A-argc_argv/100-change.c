#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*@argc: int
*@argv: int
*Return: o in success 1 otherwise
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, leastcents = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			leastcents += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
			if (money < 0)
			{
				printf("%d\n", '0');
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else if (argc < 1)
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
